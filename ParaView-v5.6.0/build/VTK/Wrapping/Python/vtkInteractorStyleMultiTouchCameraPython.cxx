// python wrapper for vtkInteractorStyleMultiTouchCamera
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
#include "vtkInteractorStyleMultiTouchCamera.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleMultiTouchCamera(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorStyleMultiTouchCamera_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
extern "C" { PyObject *PyvtkInteractorStyleTrackballCamera_ClassNew(); }
#define DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
#endif

static const char *PyvtkInteractorStyleMultiTouchCamera_Doc =
  "vtkInteractorStyleMultiTouchCamera - multitouch manipulation of the\ncamera\n\n"
  "Superclass: vtkInteractorStyleTrackballCamera\n\n"
  "vtkInteractorStyleMultiTouchCamera allows the user to interactively\n"
  "manipulate (rotate, pan, etc.) the camera, the viewpoint of the scene\n"
  "using multitouch gestures in addition to regular gestures\n\n"
  "@sa\n"
  "vtkInteractorStyleTrackballActor vtkInteractorStyleJoystickCamera\n"
  "vtkInteractorStyleJoystickActor\n\n";


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleMultiTouchCamera::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleMultiTouchCamera::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleMultiTouchCamera *tempr = vtkInteractorStyleMultiTouchCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleMultiTouchCamera *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleMultiTouchCamera::NewInstance());

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
PyvtkInteractorStyleMultiTouchCamera_OnRotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRotate();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnRotate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnPinch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnPinch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnPinch();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnPinch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnPan();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnPan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleMultiTouchCamera_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleMultiTouchCamera_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleMultiTouchCamera_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleMultiTouchCamera_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkInteractorStyleMultiTouchCamera\nC++: static vtkInteractorStyleMultiTouchCamera *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleMultiTouchCamera_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorStyleMultiTouchCamera\nC++: vtkInteractorStyleMultiTouchCamera *NewInstance()\n\n"},
  {"OnRotate", PyvtkInteractorStyleMultiTouchCamera_OnRotate, METH_VARARGS,
   "V.OnRotate()\nC++: void OnRotate() override;\n\nEvent bindings for gestures\n"},
  {"OnPinch", PyvtkInteractorStyleMultiTouchCamera_OnPinch, METH_VARARGS,
   "V.OnPinch()\nC++: void OnPinch() override;\n\nEvent bindings for gestures\n"},
  {"OnPan", PyvtkInteractorStyleMultiTouchCamera_OnPan, METH_VARARGS,
   "V.OnPan()\nC++: void OnPan() override;\n\nEvent bindings for gestures\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorStyleMultiTouchCamera_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionStylePython.vtkInteractorStyleMultiTouchCamera", // tp_name
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
  PyvtkInteractorStyleMultiTouchCamera_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleMultiTouchCamera_StaticNew()
{
  return vtkInteractorStyleMultiTouchCamera::New();
}

PyObject *PyvtkInteractorStyleMultiTouchCamera_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorStyleMultiTouchCamera_Type, PyvtkInteractorStyleMultiTouchCamera_Methods,
    "vtkInteractorStyleMultiTouchCamera",
 &PyvtkInteractorStyleMultiTouchCamera_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorStyleMultiTouchCamera_Type;

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

void PyVTKAddFile_vtkInteractorStyleMultiTouchCamera(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleMultiTouchCamera_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleMultiTouchCamera", o) != 0)
  {
    Py_DECREF(o);
  }

}

