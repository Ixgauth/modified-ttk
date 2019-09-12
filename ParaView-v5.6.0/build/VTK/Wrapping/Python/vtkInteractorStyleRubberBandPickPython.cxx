// python wrapper for vtkInteractorStyleRubberBandPick
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
#include "vtkInteractorStyleRubberBandPick.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleRubberBandPick(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorStyleRubberBandPick_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
extern "C" { PyObject *PyvtkInteractorStyleTrackballCamera_ClassNew(); }
#define DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
#endif

static const char *PyvtkInteractorStyleRubberBandPick_Doc =
  "vtkInteractorStyleRubberBandPick - Like TrackBallCamera, but this can\npick props underneath a rubber band selection rectangle.\n\n"
  "Superclass: vtkInteractorStyleTrackballCamera\n\n"
  "This interactor style allows the user to draw a rectangle in the\n"
  "render window by hitting 'r' and then using the left mouse button.\n"
  "When the mouse button is released, the attached picker operates on\n"
  "the pixel in the center of the selection rectangle. If the picker\n"
  "happens to be a vtkAreaPicker it will operate on the entire selection\n"
  "rectangle. When the 'p' key is hit the above pick operation occurs on\n"
  "a 1x1 rectangle. In other respects it behaves the same as its parent\n"
  "class.\n\n"
  "@sa\n"
  "vtkAreaPicker\n\n";


static PyObject *
PyvtkInteractorStyleRubberBandPick_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleRubberBandPick::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleRubberBandPick::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleRubberBandPick *tempr = vtkInteractorStyleRubberBandPick::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleRubberBandPick *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleRubberBandPick::NewInstance());

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
PyvtkInteractorStyleRubberBandPick_StartSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartSelect();
    }
    else
    {
      op->vtkInteractorStyleRubberBandPick::StartSelect();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleRubberBandPick::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleRubberBandPick::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleRubberBandPick::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkInteractorStyleRubberBandPick::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleRubberBandPick_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleRubberBandPick_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleRubberBandPick_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleRubberBandPick_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInteractorStyleRubberBandPick\nC++: static vtkInteractorStyleRubberBandPick *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleRubberBandPick_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorStyleRubberBandPick\nC++: vtkInteractorStyleRubberBandPick *NewInstance()\n\n"},
  {"StartSelect", PyvtkInteractorStyleRubberBandPick_StartSelect, METH_VARARGS,
   "V.StartSelect()\nC++: void StartSelect()\n\n"},
  {"OnMouseMove", PyvtkInteractorStyleRubberBandPick_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove() override;\n\nEvent bindings\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleRubberBandPick_OnLeftButtonDown, METH_VARARGS,
   "V.OnLeftButtonDown()\nC++: void OnLeftButtonDown() override;\n\nEvent bindings\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleRubberBandPick_OnLeftButtonUp, METH_VARARGS,
   "V.OnLeftButtonUp()\nC++: void OnLeftButtonUp() override;\n\nEvent bindings\n"},
  {"OnChar", PyvtkInteractorStyleRubberBandPick_OnChar, METH_VARARGS,
   "V.OnChar()\nC++: void OnChar() override;\n\nEvent bindings\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorStyleRubberBandPick_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionStylePython.vtkInteractorStyleRubberBandPick", // tp_name
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
  PyvtkInteractorStyleRubberBandPick_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleRubberBandPick_StaticNew()
{
  return vtkInteractorStyleRubberBandPick::New();
}

PyObject *PyvtkInteractorStyleRubberBandPick_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorStyleRubberBandPick_Type, PyvtkInteractorStyleRubberBandPick_Methods,
    "vtkInteractorStyleRubberBandPick",
 &PyvtkInteractorStyleRubberBandPick_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorStyleRubberBandPick_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyleTrackballCamera_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleRubberBandPick(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleRubberBandPick_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleRubberBandPick", o) != 0)
  {
    Py_DECREF(o);
  }

}

