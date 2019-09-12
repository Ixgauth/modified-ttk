// python wrapper for vtkInteractorStyleTerrain
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
#include "vtkInteractorStyleTerrain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleTerrain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorStyleTerrain_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyle_ClassNew
extern "C" { PyObject *PyvtkInteractorStyle_ClassNew(); }
#define DECLARED_PyvtkInteractorStyle_ClassNew
#endif

static const char *PyvtkInteractorStyleTerrain_Doc =
  "vtkInteractorStyleTerrain - manipulate camera in scene with natural\nview up (e.g., terrain)\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "vtkInteractorStyleTerrain is used to manipulate a camera which is\n"
  "viewing a scene with a natural view up, e.g., terrain. The camera in\n"
  "such a scene is manipulated by specifying azimuth (angle around the\n"
  "view up vector) and elevation (the angle from the horizon).\n\n"
  "The mouse binding for this class is as follows. Left mouse click\n"
  "followed rotates the camera around the focal point using both\n"
  "elevation and azimuth invocations on the camera. Left mouse motion in\n"
  "the horizontal direction results in azimuth motion; left mouse motion\n"
  "in the vertical direction results in elevation motion. Therefore,\n"
  "diagonal motion results in a combination of azimuth and elevation.\n"
  "(If the shift key is held during motion, then only one of elevation\n"
  "or azimuth is invoked, depending on the whether the mouse motion is\n"
  "primarily horizontal or vertical.) Middle mouse button pans the\n"
  "camera across the scene (again the shift key has a similar effect on\n"
  "limiting the motion to the vertical or horizontal direction. The\n"
  "right mouse is used to dolly (e.g., a type of zoom) towards or away\n"
  "from the focal point.\n\n"
  "The class also supports some keypress events. The \"r\" key resets the\n"
  "camera.  The \"e\" key invokes the exit callback and by default exits\n"
  "the program. The \"f\" key sets a new camera focal point and flys\n"
  "towards that point. The \"u\" key invokes the user event. The \"3\" key\n"
  "toggles between stereo and non-stero mode. The \"l\" key toggles on/off\n"
  "a latitude/longitude markers that can be used to estimate/control\n"
  "position.\n\n"
  "@sa\n"
  "vtkInteractorObserver vtkInteractorStyle vtk3DWidget\n\n";


static PyObject *
PyvtkInteractorStyleTerrain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleTerrain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleTerrain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleTerrain *tempr = vtkInteractorStyleTerrain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleTerrain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleTerrain::NewInstance());

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
PyvtkInteractorStyleTerrain_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleTerrain::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleTerrain::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleTerrain::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkInteractorStyleTerrain::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkInteractorStyleTerrain::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkInteractorStyleTerrain::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkInteractorStyleTerrain::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkInteractorStyleTerrain::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Rotate();
    }
    else
    {
      op->vtkInteractorStyleTerrain::Rotate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pan();
    }
    else
    {
      op->vtkInteractorStyleTerrain::Pan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Dolly();
    }
    else
    {
      op->vtkInteractorStyleTerrain::Dolly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_SetLatLongLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatLongLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLatLongLines(temp0);
    }
    else
    {
      op->vtkInteractorStyleTerrain::SetLatLongLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_GetLatLongLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatLongLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLatLongLines() :
      op->vtkInteractorStyleTerrain::GetLatLongLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_LatLongLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LatLongLinesOn();
    }
    else
    {
      op->vtkInteractorStyleTerrain::LatLongLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTerrain_LatLongLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTerrain *op = static_cast<vtkInteractorStyleTerrain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LatLongLinesOff();
    }
    else
    {
      op->vtkInteractorStyleTerrain::LatLongLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleTerrain_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleTerrain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleTerrain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleTerrain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInteractorStyleTerrain\nC++: static vtkInteractorStyleTerrain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleTerrain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorStyleTerrain\nC++: vtkInteractorStyleTerrain *NewInstance()\n\n"},
  {"OnMouseMove", PyvtkInteractorStyleTerrain_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleTerrain_OnLeftButtonDown, METH_VARARGS,
   "V.OnLeftButtonDown()\nC++: void OnLeftButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleTerrain_OnLeftButtonUp, METH_VARARGS,
   "V.OnLeftButtonUp()\nC++: void OnLeftButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMiddleButtonDown", PyvtkInteractorStyleTerrain_OnMiddleButtonDown, METH_VARARGS,
   "V.OnMiddleButtonDown()\nC++: void OnMiddleButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMiddleButtonUp", PyvtkInteractorStyleTerrain_OnMiddleButtonUp, METH_VARARGS,
   "V.OnMiddleButtonUp()\nC++: void OnMiddleButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnRightButtonDown", PyvtkInteractorStyleTerrain_OnRightButtonDown, METH_VARARGS,
   "V.OnRightButtonDown()\nC++: void OnRightButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnRightButtonUp", PyvtkInteractorStyleTerrain_OnRightButtonUp, METH_VARARGS,
   "V.OnRightButtonUp()\nC++: void OnRightButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnChar", PyvtkInteractorStyleTerrain_OnChar, METH_VARARGS,
   "V.OnChar()\nC++: void OnChar() override;\n\nOverride the \"fly-to\" (f keypress) for images.\n"},
  {"Rotate", PyvtkInteractorStyleTerrain_Rotate, METH_VARARGS,
   "V.Rotate()\nC++: void Rotate() override;\n\nThese methods for the different interactions in different modes\nare overridden in subclasses to perform the correct motion. Since\nthey might be called from OnTimer, they do not have mouse coord\nparameters (use interactor's GetEventPosition and\nGetLastEventPosition)\n"},
  {"Pan", PyvtkInteractorStyleTerrain_Pan, METH_VARARGS,
   "V.Pan()\nC++: void Pan() override;\n\n"},
  {"Dolly", PyvtkInteractorStyleTerrain_Dolly, METH_VARARGS,
   "V.Dolly()\nC++: void Dolly() override;\n\n"},
  {"SetLatLongLines", PyvtkInteractorStyleTerrain_SetLatLongLines, METH_VARARGS,
   "V.SetLatLongLines(int)\nC++: virtual void SetLatLongLines(vtkTypeBool _arg)\n\nTurn on/off the latitude/longitude lines.\n"},
  {"GetLatLongLines", PyvtkInteractorStyleTerrain_GetLatLongLines, METH_VARARGS,
   "V.GetLatLongLines() -> int\nC++: virtual vtkTypeBool GetLatLongLines()\n\nTurn on/off the latitude/longitude lines.\n"},
  {"LatLongLinesOn", PyvtkInteractorStyleTerrain_LatLongLinesOn, METH_VARARGS,
   "V.LatLongLinesOn()\nC++: virtual void LatLongLinesOn()\n\nTurn on/off the latitude/longitude lines.\n"},
  {"LatLongLinesOff", PyvtkInteractorStyleTerrain_LatLongLinesOff, METH_VARARGS,
   "V.LatLongLinesOff()\nC++: virtual void LatLongLinesOff()\n\nTurn on/off the latitude/longitude lines.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorStyleTerrain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionStylePython.vtkInteractorStyleTerrain", // tp_name
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
  PyvtkInteractorStyleTerrain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleTerrain_StaticNew()
{
  return vtkInteractorStyleTerrain::New();
}

PyObject *PyvtkInteractorStyleTerrain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorStyleTerrain_Type, PyvtkInteractorStyleTerrain_Methods,
    "vtkInteractorStyleTerrain",
 &PyvtkInteractorStyleTerrain_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorStyleTerrain_Type;

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

void PyVTKAddFile_vtkInteractorStyleTerrain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleTerrain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleTerrain", o) != 0)
  {
    Py_DECREF(o);
  }

}

