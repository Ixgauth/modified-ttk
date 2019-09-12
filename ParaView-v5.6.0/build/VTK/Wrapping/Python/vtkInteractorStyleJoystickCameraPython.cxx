// python wrapper for vtkInteractorStyleJoystickCamera
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
#include "vtkInteractorStyleJoystickCamera.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleJoystickCamera(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorStyleJoystickCamera_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyle_ClassNew
extern "C" { PyObject *PyvtkInteractorStyle_ClassNew(); }
#define DECLARED_PyvtkInteractorStyle_ClassNew
#endif

static const char *PyvtkInteractorStyleJoystickCamera_Doc =
  "vtkInteractorStyleJoystickCamera - interactive manipulation of the\ncamera\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "vtkInteractorStyleJoystickCamera allows the user to move (rotate,\n"
  "pan, etc.) the camera, the point of view for the scene.  The position\n"
  "of the mouse relative to the center of the scene determines the speed\n"
  "at which the camera moves, and the speed of the mouse movement\n"
  "determines the acceleration of the camera, so the camera continues to\n"
  "move even if the mouse if not moving. For a 3-button mouse, the left\n"
  "button is for rotation, the right button for zooming, the middle\n"
  "button for panning, and ctrl + left button for spinning.  (With fewer\n"
  "mouse buttons, ctrl + shift + left button is for zooming, and shift +\n"
  "left button is for panning.)\n\n"
  "@sa\n"
  "vtkInteractorStyleJoystickActor vtkInteractorStyleTrackballCamera\n"
  "vtkInteractorStyleTrackballActor\n\n";


static PyObject *
PyvtkInteractorStyleJoystickCamera_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleJoystickCamera::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleJoystickCamera::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleJoystickCamera *tempr = vtkInteractorStyleJoystickCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleJoystickCamera *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleJoystickCamera::NewInstance());

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
PyvtkInteractorStyleJoystickCamera_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseWheelForward();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::OnMouseWheelForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseWheelBackward();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::OnMouseWheelBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Rotate();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::Rotate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_Spin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Spin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Spin();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::Spin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pan();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::Pan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Dolly();
    }
    else
    {
      op->vtkInteractorStyleJoystickCamera::Dolly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleJoystickCamera_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleJoystickCamera_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleJoystickCamera_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleJoystickCamera_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInteractorStyleJoystickCamera\nC++: static vtkInteractorStyleJoystickCamera *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleJoystickCamera_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorStyleJoystickCamera\nC++: vtkInteractorStyleJoystickCamera *NewInstance()\n\n"},
  {"OnMouseMove", PyvtkInteractorStyleJoystickCamera_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleJoystickCamera_OnLeftButtonDown, METH_VARARGS,
   "V.OnLeftButtonDown()\nC++: void OnLeftButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleJoystickCamera_OnLeftButtonUp, METH_VARARGS,
   "V.OnLeftButtonUp()\nC++: void OnLeftButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMiddleButtonDown", PyvtkInteractorStyleJoystickCamera_OnMiddleButtonDown, METH_VARARGS,
   "V.OnMiddleButtonDown()\nC++: void OnMiddleButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMiddleButtonUp", PyvtkInteractorStyleJoystickCamera_OnMiddleButtonUp, METH_VARARGS,
   "V.OnMiddleButtonUp()\nC++: void OnMiddleButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnRightButtonDown", PyvtkInteractorStyleJoystickCamera_OnRightButtonDown, METH_VARARGS,
   "V.OnRightButtonDown()\nC++: void OnRightButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnRightButtonUp", PyvtkInteractorStyleJoystickCamera_OnRightButtonUp, METH_VARARGS,
   "V.OnRightButtonUp()\nC++: void OnRightButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMouseWheelForward", PyvtkInteractorStyleJoystickCamera_OnMouseWheelForward, METH_VARARGS,
   "V.OnMouseWheelForward()\nC++: void OnMouseWheelForward() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMouseWheelBackward", PyvtkInteractorStyleJoystickCamera_OnMouseWheelBackward, METH_VARARGS,
   "V.OnMouseWheelBackward()\nC++: void OnMouseWheelBackward() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"Rotate", PyvtkInteractorStyleJoystickCamera_Rotate, METH_VARARGS,
   "V.Rotate()\nC++: void Rotate() override;\n\nThese methods for the different interactions in different modes\nare overridden in subclasses to perform the correct motion. Since\nthey might be called from OnTimer, they do not have mouse coord\nparameters (use interactor's GetEventPosition and\nGetLastEventPosition)\n"},
  {"Spin", PyvtkInteractorStyleJoystickCamera_Spin, METH_VARARGS,
   "V.Spin()\nC++: void Spin() override;\n\n"},
  {"Pan", PyvtkInteractorStyleJoystickCamera_Pan, METH_VARARGS,
   "V.Pan()\nC++: void Pan() override;\n\n"},
  {"Dolly", PyvtkInteractorStyleJoystickCamera_Dolly, METH_VARARGS,
   "V.Dolly()\nC++: void Dolly() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorStyleJoystickCamera_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionStylePython.vtkInteractorStyleJoystickCamera", // tp_name
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
  PyvtkInteractorStyleJoystickCamera_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleJoystickCamera_StaticNew()
{
  return vtkInteractorStyleJoystickCamera::New();
}

PyObject *PyvtkInteractorStyleJoystickCamera_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorStyleJoystickCamera_Type, PyvtkInteractorStyleJoystickCamera_Methods,
    "vtkInteractorStyleJoystickCamera",
 &PyvtkInteractorStyleJoystickCamera_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorStyleJoystickCamera_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyle_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleJoystickCamera(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleJoystickCamera_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleJoystickCamera", o) != 0)
  {
    Py_DECREF(o);
  }

}

