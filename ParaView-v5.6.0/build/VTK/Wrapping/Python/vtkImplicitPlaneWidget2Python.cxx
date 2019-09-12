// python wrapper for vtkImplicitPlaneWidget2
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
#include "vtkImplicitPlaneWidget2.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitPlaneWidget2(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImplicitPlaneWidget2_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkImplicitPlaneWidget2_Doc =
  "vtkImplicitPlaneWidget2 - 3D widget for manipulating an infinite plane\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget defines an infinite plane that can be interactively\n"
  "placed in a scene. The widget is assumed to consist of four parts: 1)\n"
  "a plane contained in a 2) bounding box, with a 3) plane normal, which\n"
  "is rooted at a 4) point on the plane. (The representation paired with\n"
  "this widget determines the actual geometry of the widget.)\n\n"
  "To use this widget, you generally pair it with a\n"
  "vtkImplicitPlaneRepresentation (or a subclass). Various options are\n"
  "available for controlling how the representation appears, and how the\n"
  "widget functions.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the mouse is over the plane normal:\n"
  "  LeftButtonPressEvent - select normal\n"
  "  LeftButtonReleaseEvent - release normal\n"
  "  MouseMoveEvent - orient the normal vector If the mouse is over the\n"
  "origin point (handle):\n"
  "  LeftButtonPressEvent - select handle\n"
  "  LeftButtonReleaseEvent - release handle (if selected)\n"
  "  MouseMoveEvent - move the origin point (constrained to the plane)\n"
  "If the mouse is over the plane:\n"
  "  LeftButtonPressEvent - select plane\n"
  "  LeftButtonReleaseEvent - release plane (if selected)\n"
  "  MouseMoveEvent - move the plane If the mouse is over the outline:\n"
  "  LeftButtonPressEvent - select outline\n"
  "  LeftButtonReleaseEvent - release outline (if selected)\n"
  "  MouseMoveEvent - move the outline If the keypress characters are\n"
  "used\n"
  "  'Down/Left' Move plane down\n"
  "  'Up/Right' Move plane up In all the cases, independent of what is\n"
  "picked, the widget responds to the following VTK events:\n"
  "  MiddleButtonPressEvent - move the plane\n"
  "  MiddleButtonReleaseEvent - release the plane\n"
  "  RightButtonPressEvent - scale the widget's representation\n"
  "  RightButtonReleaseEvent - stop scaling the widget\n"
  "  MouseMoveEvent - scale (if right button) or move (if middle button)\n"
  "the widget \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkImplicitPlaneWidget2's widget\n"
  "events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for widget motion has been\n"
  "invoked\n"
  "  vtkWidgetEvent::Up and vtkWidgetEvent::Down -- MovePlaneAction \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkImplicitPlaneWidget2 invokes the following VTK events on\n"
  "itself (which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@par Event Bindings: This class, and vtkImplicitPlaneRepresentation,\n"
  "are next generation VTK widgets. An earlier version of this\n"
  "functionality was defined in the class vtkImplicitPlaneWidget.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkPlaneWidget vtkLineWidget vtkPointWidget\n"
  "vtkSphereWidget vtkImagePlaneWidget vtkImplicitCylinderWidget\n\n";


static PyObject *
PyvtkImplicitPlaneWidget2_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitPlaneWidget2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitPlaneWidget2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitPlaneWidget2 *tempr = vtkImplicitPlaneWidget2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitPlaneWidget2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitPlaneWidget2::NewInstance());

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
PyvtkImplicitPlaneWidget2_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  vtkImplicitPlaneRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitPlaneRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget2::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget2::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_SetLockNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockNormalToCamera(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget2::SetLockNormalToCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_GetImplicitPlaneRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitPlaneRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitPlaneRepresentation *tempr = (ap.IsBound() ?
      op->GetImplicitPlaneRepresentation() :
      op->vtkImplicitPlaneWidget2::GetImplicitPlaneRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget2_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget2 *op = static_cast<vtkImplicitPlaneWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkImplicitPlaneWidget2::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitPlaneWidget2_Methods[] = {
  {"IsTypeOf", PyvtkImplicitPlaneWidget2_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard vtkObject methods\n"},
  {"IsA", PyvtkImplicitPlaneWidget2_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard vtkObject methods\n"},
  {"SafeDownCast", PyvtkImplicitPlaneWidget2_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImplicitPlaneWidget2\nC++: static vtkImplicitPlaneWidget2 *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard vtkObject methods\n"},
  {"NewInstance", PyvtkImplicitPlaneWidget2_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImplicitPlaneWidget2\nC++: vtkImplicitPlaneWidget2 *NewInstance()\n\nStandard vtkObject methods\n"},
  {"SetRepresentation", PyvtkImplicitPlaneWidget2_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkImplicitPlaneRepresentation)\nC++: void SetRepresentation(vtkImplicitPlaneRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetEnabled", PyvtkImplicitPlaneWidget2_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int enabling) override;\n\nDisable/Enable the widget if needed. Unobserved the camera if the\nwidget is disabled.\n"},
  {"SetLockNormalToCamera", PyvtkImplicitPlaneWidget2_SetLockNormalToCamera, METH_VARARGS,
   "V.SetLockNormalToCamera(int)\nC++: void SetLockNormalToCamera(int lock)\n\nObserve/Unobserve the camera if the widget is locked/unlocked to\nupdate the vtkImplicitePlaneRepresentation's normal.\n"},
  {"GetImplicitPlaneRepresentation", PyvtkImplicitPlaneWidget2_GetImplicitPlaneRepresentation, METH_VARARGS,
   "V.GetImplicitPlaneRepresentation()\n    -> vtkImplicitPlaneRepresentation\nC++: vtkImplicitPlaneRepresentation *GetImplicitPlaneRepresentation(\n    )\n\nReturn the representation as a vtkImplicitPlaneRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkImplicitPlaneWidget2_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImplicitPlaneWidget2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkImplicitPlaneWidget2", // tp_name
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
  PyvtkImplicitPlaneWidget2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitPlaneWidget2_StaticNew()
{
  return vtkImplicitPlaneWidget2::New();
}

PyObject *PyvtkImplicitPlaneWidget2_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImplicitPlaneWidget2_Type, PyvtkImplicitPlaneWidget2_Methods,
    "vtkImplicitPlaneWidget2",
 &PyvtkImplicitPlaneWidget2_StaticNew);

  PyTypeObject *pytype = &PyvtkImplicitPlaneWidget2_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitPlaneWidget2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitPlaneWidget2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitPlaneWidget2", o) != 0)
  {
    Py_DECREF(o);
  }

}

