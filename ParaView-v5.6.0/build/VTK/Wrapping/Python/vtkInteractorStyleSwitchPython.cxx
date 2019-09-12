// python wrapper for vtkInteractorStyleSwitch
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
#include "vtkInteractorStyleSwitch.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleSwitch(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorStyleSwitch_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyleSwitchBase_ClassNew
extern "C" { PyObject *PyvtkInteractorStyleSwitchBase_ClassNew(); }
#define DECLARED_PyvtkInteractorStyleSwitchBase_ClassNew
#endif

static const char *PyvtkInteractorStyleSwitch_Doc =
  "vtkInteractorStyleSwitch - class to swap between interactory styles\n\n"
  "Superclass: vtkInteractorStyleSwitchBase\n\n"
  "The class vtkInteractorStyleSwitch allows handles interactively\n"
  "switching between four interactor styles -- joystick actor, joystick\n"
  "camera, trackball actor, and trackball camera.  Type 'j' or 't' to\n"
  "select joystick or trackball, and type 'c' or 'a' to select camera or\n"
  "actor. The default interactor style is joystick camera.\n"
  "@sa\n"
  "vtkInteractorStyleJoystickActor vtkInteractorStyleJoystickCamera\n"
  "vtkInteractorStyleTrackballActor vtkInteractorStyleTrackballCamera\n\n";


static PyObject *
PyvtkInteractorStyleSwitch_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleSwitch::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleSwitch::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleSwitch *tempr = vtkInteractorStyleSwitch::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleSwitch *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleSwitch::NewInstance());

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
PyvtkInteractorStyleSwitch_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

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
      op->vtkInteractorStyleSwitch::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetAutoAdjustCameraClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAdjustCameraClippingRange(temp0);
    }
    else
    {
      op->vtkInteractorStyleSwitch::SetAutoAdjustCameraClippingRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_GetCurrentStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyle *tempr = (ap.IsBound() ?
      op->GetCurrentStyle() :
      op->vtkInteractorStyleSwitch::GetCurrentStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetCurrentStyleToJoystickActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentStyleToJoystickActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentStyleToJoystickActor();
    }
    else
    {
      op->vtkInteractorStyleSwitch::SetCurrentStyleToJoystickActor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetCurrentStyleToJoystickCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentStyleToJoystickCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentStyleToJoystickCamera();
    }
    else
    {
      op->vtkInteractorStyleSwitch::SetCurrentStyleToJoystickCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetCurrentStyleToTrackballActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentStyleToTrackballActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentStyleToTrackballActor();
    }
    else
    {
      op->vtkInteractorStyleSwitch::SetCurrentStyleToTrackballActor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetCurrentStyleToTrackballCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentStyleToTrackballCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentStyleToTrackballCamera();
    }
    else
    {
      op->vtkInteractorStyleSwitch::SetCurrentStyleToTrackballCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetCurrentStyleToMultiTouchCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentStyleToMultiTouchCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentStyleToMultiTouchCamera();
    }
    else
    {
      op->vtkInteractorStyleSwitch::SetCurrentStyleToMultiTouchCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkInteractorStyleSwitch::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetDefaultRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetDefaultRenderer(temp0);
    }
    else
    {
      op->vtkInteractorStyleSwitch::SetDefaultRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetCurrentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetCurrentRenderer(temp0);
    }
    else
    {
      op->vtkInteractorStyleSwitch::SetCurrentRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleSwitch_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleSwitch_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleSwitch_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleSwitch_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInteractorStyleSwitch\nC++: static vtkInteractorStyleSwitch *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleSwitch_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorStyleSwitch\nC++: vtkInteractorStyleSwitch *NewInstance()\n\n"},
  {"SetInteractor", PyvtkInteractorStyleSwitch_SetInteractor, METH_VARARGS,
   "V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *iren) override;\n\nThe sub styles need the interactor too.\n"},
  {"SetAutoAdjustCameraClippingRange", PyvtkInteractorStyleSwitch_SetAutoAdjustCameraClippingRange, METH_VARARGS,
   "V.SetAutoAdjustCameraClippingRange(int)\nC++: void SetAutoAdjustCameraClippingRange(vtkTypeBool value)\n    override;\n\nWe must override this method in order to pass the setting down to\nthe underlying styles\n"},
  {"GetCurrentStyle", PyvtkInteractorStyleSwitch_GetCurrentStyle, METH_VARARGS,
   "V.GetCurrentStyle() -> vtkInteractorStyle\nC++: virtual vtkInteractorStyle *GetCurrentStyle()\n\nSet/Get current style\n"},
  {"SetCurrentStyleToJoystickActor", PyvtkInteractorStyleSwitch_SetCurrentStyleToJoystickActor, METH_VARARGS,
   "V.SetCurrentStyleToJoystickActor()\nC++: void SetCurrentStyleToJoystickActor()\n\nSet/Get current style\n"},
  {"SetCurrentStyleToJoystickCamera", PyvtkInteractorStyleSwitch_SetCurrentStyleToJoystickCamera, METH_VARARGS,
   "V.SetCurrentStyleToJoystickCamera()\nC++: void SetCurrentStyleToJoystickCamera()\n\nSet/Get current style\n"},
  {"SetCurrentStyleToTrackballActor", PyvtkInteractorStyleSwitch_SetCurrentStyleToTrackballActor, METH_VARARGS,
   "V.SetCurrentStyleToTrackballActor()\nC++: void SetCurrentStyleToTrackballActor()\n\nSet/Get current style\n"},
  {"SetCurrentStyleToTrackballCamera", PyvtkInteractorStyleSwitch_SetCurrentStyleToTrackballCamera, METH_VARARGS,
   "V.SetCurrentStyleToTrackballCamera()\nC++: void SetCurrentStyleToTrackballCamera()\n\nSet/Get current style\n"},
  {"SetCurrentStyleToMultiTouchCamera", PyvtkInteractorStyleSwitch_SetCurrentStyleToMultiTouchCamera, METH_VARARGS,
   "V.SetCurrentStyleToMultiTouchCamera()\nC++: void SetCurrentStyleToMultiTouchCamera()\n\nSet/Get current style\n"},
  {"OnChar", PyvtkInteractorStyleSwitch_OnChar, METH_VARARGS,
   "V.OnChar()\nC++: void OnChar() override;\n\nOnly care about the char event, which is used to switch between\ndifferent styles.\n"},
  {"SetDefaultRenderer", PyvtkInteractorStyleSwitch_SetDefaultRenderer, METH_VARARGS,
   "V.SetDefaultRenderer(vtkRenderer)\nC++: void SetDefaultRenderer(vtkRenderer *) override;\n\nOverridden from vtkInteractorObserver because the interactor\nstyles used by this class must also be updated.\n"},
  {"SetCurrentRenderer", PyvtkInteractorStyleSwitch_SetCurrentRenderer, METH_VARARGS,
   "V.SetCurrentRenderer(vtkRenderer)\nC++: void SetCurrentRenderer(vtkRenderer *) override;\n\nOverridden from vtkInteractorObserver because the interactor\nstyles used by this class must also be updated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorStyleSwitch_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionStylePython.vtkInteractorStyleSwitch", // tp_name
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
  PyvtkInteractorStyleSwitch_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleSwitch_StaticNew()
{
  return vtkInteractorStyleSwitch::New();
}

PyObject *PyvtkInteractorStyleSwitch_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorStyleSwitch_Type, PyvtkInteractorStyleSwitch_Methods,
    "vtkInteractorStyleSwitch",
 &PyvtkInteractorStyleSwitch_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorStyleSwitch_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyleSwitchBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleSwitch(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleSwitch_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleSwitch", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTKIS_JOYSTICK", 0 },
        { "VTKIS_TRACKBALL", 1 },
        { "VTKIS_CAMERA", 0 },
        { "VTKIS_ACTOR", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

