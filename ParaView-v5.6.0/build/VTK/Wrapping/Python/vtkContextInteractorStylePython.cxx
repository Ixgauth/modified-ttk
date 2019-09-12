// python wrapper for vtkContextInteractorStyle
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
#include "vtkContextInteractorStyle.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContextInteractorStyle(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContextInteractorStyle_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyle_ClassNew
extern "C" { PyObject *PyvtkInteractorStyle_ClassNew(); }
#define DECLARED_PyvtkInteractorStyle_ClassNew
#endif

static const char *PyvtkContextInteractorStyle_Doc =
  "vtkContextInteractorStyle - An interactor for chart views.\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "It observes the user events (mouse events) and propagates them to the\n"
  "scene. If the scene doesn't eat the event, it is propagated to the\n"
  "interactor style superclass.\n\n";


static PyObject *
PyvtkContextInteractorStyle_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContextInteractorStyle::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContextInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContextInteractorStyle *tempr = vtkContextInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContextInteractorStyle::NewInstance());

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
PyvtkContextInteractorStyle_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  vtkContextScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextScene"))
  {
    if (ap.IsBound())
    {
      op->SetScene(temp0);
    }
    else
    {
      op->vtkContextInteractorStyle::SetScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_GetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextScene *tempr = (ap.IsBound() ?
      op->GetScene() :
      op->vtkContextInteractorStyle::GetScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnSceneModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnSceneModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnSceneModified();
    }
    else
    {
      op->vtkContextInteractorStyle::OnSceneModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkContextInteractorStyle::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkContextInteractorStyle::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkContextInteractorStyle::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkContextInteractorStyle::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkContextInteractorStyle::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkContextInteractorStyle::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkContextInteractorStyle::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseWheelForward();
    }
    else
    {
      op->vtkContextInteractorStyle::OnMouseWheelForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseWheelBackward();
    }
    else
    {
      op->vtkContextInteractorStyle::OnMouseWheelBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  const size_t size0 = 5;
  unsigned int temp0[5];
  unsigned int save0[5];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->OnSelection(temp0);
    }
    else
    {
      op->vtkContextInteractorStyle::OnSelection(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkContextInteractorStyle::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnKeyPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyPress();
    }
    else
    {
      op->vtkContextInteractorStyle::OnKeyPress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnKeyRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyRelease();
    }
    else
    {
      op->vtkContextInteractorStyle::OnKeyRelease();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContextInteractorStyle_Methods[] = {
  {"IsTypeOf", PyvtkContextInteractorStyle_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContextInteractorStyle_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContextInteractorStyle_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContextInteractorStyle\nC++: static vtkContextInteractorStyle *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContextInteractorStyle_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContextInteractorStyle\nC++: vtkContextInteractorStyle *NewInstance()\n\n"},
  {"SetScene", PyvtkContextInteractorStyle_SetScene, METH_VARARGS,
   "V.SetScene(vtkContextScene)\nC++: void SetScene(vtkContextScene *scene)\n\nSet the scene to forward user events to. Refresh the view when\nthe scene is dirty and no event is being processed. The scene is\nobserved (vtkCommand::ModifiedEvent) and a refresh on the view is\ncalled appropriately: scene is dirty and no event is being\nprocessed.\n"},
  {"GetScene", PyvtkContextInteractorStyle_GetScene, METH_VARARGS,
   "V.GetScene() -> vtkContextScene\nC++: vtkContextScene *GetScene()\n\nReturn the observed scene.\n"},
  {"OnSceneModified", PyvtkContextInteractorStyle_OnSceneModified, METH_VARARGS,
   "V.OnSceneModified()\nC++: virtual void OnSceneModified()\n\nCalled when the scene is modified. Refresh the scene if needed.\n"},
  {"OnMouseMove", PyvtkContextInteractorStyle_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove() override;\n\nCalled when the user moves the mouse Default behavior forwards\nthe event to the observed scene.\n"},
  {"OnLeftButtonDown", PyvtkContextInteractorStyle_OnLeftButtonDown, METH_VARARGS,
   "V.OnLeftButtonDown()\nC++: void OnLeftButtonDown() override;\n\nCalled when the user clicks the mouse left button. Default\nbehavior forwards the event to the observed scene.\n"},
  {"OnLeftButtonUp", PyvtkContextInteractorStyle_OnLeftButtonUp, METH_VARARGS,
   "V.OnLeftButtonUp()\nC++: void OnLeftButtonUp() override;\n\nCalled when the user releases the mouse left button. Default\nbehavior forwards the event to the observed scene.\n"},
  {"OnMiddleButtonDown", PyvtkContextInteractorStyle_OnMiddleButtonDown, METH_VARARGS,
   "V.OnMiddleButtonDown()\nC++: void OnMiddleButtonDown() override;\n\nCalled when the user clicks the mouse middle button. Default\nbehavior forwards the event to the observed scene.\n"},
  {"OnMiddleButtonUp", PyvtkContextInteractorStyle_OnMiddleButtonUp, METH_VARARGS,
   "V.OnMiddleButtonUp()\nC++: void OnMiddleButtonUp() override;\n\nCalled when the user releases the mouse middle button. Default\nbehavior forwards the event to the observed scene.\n"},
  {"OnRightButtonDown", PyvtkContextInteractorStyle_OnRightButtonDown, METH_VARARGS,
   "V.OnRightButtonDown()\nC++: void OnRightButtonDown() override;\n\nCalled when the user clicks the mouse right button. Default\nbehavior forwards the event to the observed scene.\n"},
  {"OnRightButtonUp", PyvtkContextInteractorStyle_OnRightButtonUp, METH_VARARGS,
   "V.OnRightButtonUp()\nC++: void OnRightButtonUp() override;\n\nCalled when the user releases the mouse right button. Default\nbehavior forwards the event to the observed scene.\n"},
  {"OnMouseWheelForward", PyvtkContextInteractorStyle_OnMouseWheelForward, METH_VARARGS,
   "V.OnMouseWheelForward()\nC++: void OnMouseWheelForward() override;\n\nCalled when the user moves the mouse wheel forward. Default\nbehavior forwards the event to the observed scene.\n"},
  {"OnMouseWheelBackward", PyvtkContextInteractorStyle_OnMouseWheelBackward, METH_VARARGS,
   "V.OnMouseWheelBackward()\nC++: void OnMouseWheelBackward() override;\n\nCalled when the user moves the mouse wheel backward. Default\nbehavior forwards the event to the observed scene.\n"},
  {"OnSelection", PyvtkContextInteractorStyle_OnSelection, METH_VARARGS,
   "V.OnSelection([int, int, int, int, int])\nC++: virtual void OnSelection(unsigned int rect[5])\n\nPlace holder for future implementation. Default behavior forwards\nthe event to the observed scene.\n"},
  {"OnChar", PyvtkContextInteractorStyle_OnChar, METH_VARARGS,
   "V.OnChar()\nC++: void OnChar() override;\n\nHandle key presses.\n"},
  {"OnKeyPress", PyvtkContextInteractorStyle_OnKeyPress, METH_VARARGS,
   "V.OnKeyPress()\nC++: void OnKeyPress() override;\n\nCalled when the user presses a key.\n"},
  {"OnKeyRelease", PyvtkContextInteractorStyle_OnKeyRelease, METH_VARARGS,
   "V.OnKeyRelease()\nC++: void OnKeyRelease() override;\n\nCalled when the user releases a key.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContextInteractorStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkViewsContext2DPython.vtkContextInteractorStyle", // tp_name
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
  PyvtkContextInteractorStyle_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContextInteractorStyle_StaticNew()
{
  return vtkContextInteractorStyle::New();
}

PyObject *PyvtkContextInteractorStyle_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContextInteractorStyle_Type, PyvtkContextInteractorStyle_Methods,
    "vtkContextInteractorStyle",
 &PyvtkContextInteractorStyle_StaticNew);

  PyTypeObject *pytype = &PyvtkContextInteractorStyle_Type;

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

void PyVTKAddFile_vtkContextInteractorStyle(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContextInteractorStyle_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContextInteractorStyle", o) != 0)
  {
    Py_DECREF(o);
  }

}

