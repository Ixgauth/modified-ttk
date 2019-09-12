// python wrapper for vtkPVTrackballMoveActor
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
#include "vtkPVTrackballMoveActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVTrackballMoveActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVTrackballMoveActor_ClassNew(); }

#ifndef DECLARED_PyvtkCameraManipulator_ClassNew
extern "C" { PyObject *PyvtkCameraManipulator_ClassNew(); }
#define DECLARED_PyvtkCameraManipulator_ClassNew
#endif

static const char *PyvtkPVTrackballMoveActor_Doc =
  "vtkPVTrackballMoveActor - Pans camera with x y mouse movements.\n\n"
  "Superclass: vtkCameraManipulator\n\n"
  "vtkPVTrackballMoveActor allows the user to interactively manipulate\n"
  "the camera, the viewpoint of the scene. Moving the mouse down zooms\n"
  "in. Up zooms out. This manipulator has not been extended to parallel\n"
  "projection yet. It works in perspective by rotating the camera.\n\n";


static PyObject *
PyvtkPVTrackballMoveActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVTrackballMoveActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballMoveActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballMoveActor *op = static_cast<vtkPVTrackballMoveActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTrackballMoveActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballMoveActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVTrackballMoveActor *tempr = vtkPVTrackballMoveActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballMoveActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballMoveActor *op = static_cast<vtkPVTrackballMoveActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVTrackballMoveActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTrackballMoveActor::NewInstance());

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
PyvtkPVTrackballMoveActor_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballMoveActor *op = static_cast<vtkPVTrackballMoveActor *>(vp);

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
      op->vtkPVTrackballMoveActor::OnMouseMove(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballMoveActor_OnButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballMoveActor *op = static_cast<vtkPVTrackballMoveActor *>(vp);

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
      op->vtkPVTrackballMoveActor::OnButtonDown(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballMoveActor_OnButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballMoveActor *op = static_cast<vtkPVTrackballMoveActor *>(vp);

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
      op->vtkPVTrackballMoveActor::OnButtonUp(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVTrackballMoveActor_Methods[] = {
  {"IsTypeOf", PyvtkPVTrackballMoveActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVTrackballMoveActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVTrackballMoveActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVTrackballMoveActor\nC++: static vtkPVTrackballMoveActor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVTrackballMoveActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVTrackballMoveActor\nC++: vtkPVTrackballMoveActor *NewInstance()\n\n"},
  {"OnMouseMove", PyvtkPVTrackballMoveActor_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnMouseMove(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnButtonDown", PyvtkPVTrackballMoveActor_OnButtonDown, METH_VARARGS,
   "V.OnButtonDown(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnButtonDown(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnButtonUp", PyvtkPVTrackballMoveActor_OnButtonUp, METH_VARARGS,
   "V.OnButtonUp(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnButtonUp(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *iren) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVTrackballMoveActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVTrackballMoveActor", // tp_name
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
  PyvtkPVTrackballMoveActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVTrackballMoveActor_StaticNew()
{
  return vtkPVTrackballMoveActor::New();
}

PyObject *PyvtkPVTrackballMoveActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVTrackballMoveActor_Type, PyvtkPVTrackballMoveActor_Methods,
    "vtkPVTrackballMoveActor",
 &PyvtkPVTrackballMoveActor_StaticNew);

  PyTypeObject *pytype = &PyvtkPVTrackballMoveActor_Type;

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

void PyVTKAddFile_vtkPVTrackballMoveActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVTrackballMoveActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVTrackballMoveActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

