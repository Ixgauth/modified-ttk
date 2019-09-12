// python wrapper for vtkPVTrackballMultiRotate
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
#include "vtkPVTrackballMultiRotate.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVTrackballMultiRotate(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVTrackballMultiRotate_ClassNew(); }

#ifndef DECLARED_PyvtkCameraManipulator_ClassNew
extern "C" { PyObject *PyvtkCameraManipulator_ClassNew(); }
#define DECLARED_PyvtkCameraManipulator_ClassNew
#endif

static const char *PyvtkPVTrackballMultiRotate_Doc =
  "vtkPVTrackballMultiRotate - This camera manipulator combines the\nvtkPVTrackballRotate and vtkPVTrackballRoll manipulators in one.\n\n"
  "Superclass: vtkCameraManipulator\n\n"
  "Think of there being an invisible sphere in the middle of the screen.\n"
  " If you grab that sphere and move the mouse, you will rotate that\n"
  "sphere.  However, if you grab outside that sphere and move the mouse,\n"
  "you will roll the view.\n\n";


static PyObject *
PyvtkPVTrackballMultiRotate_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVTrackballMultiRotate::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballMultiRotate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballMultiRotate *op = static_cast<vtkPVTrackballMultiRotate *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVTrackballMultiRotate::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballMultiRotate_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVTrackballMultiRotate *tempr = vtkPVTrackballMultiRotate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballMultiRotate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballMultiRotate *op = static_cast<vtkPVTrackballMultiRotate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVTrackballMultiRotate *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVTrackballMultiRotate::NewInstance());

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
PyvtkPVTrackballMultiRotate_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballMultiRotate *op = static_cast<vtkPVTrackballMultiRotate *>(vp);

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
      op->vtkPVTrackballMultiRotate::OnMouseMove(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballMultiRotate_OnButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballMultiRotate *op = static_cast<vtkPVTrackballMultiRotate *>(vp);

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
      op->vtkPVTrackballMultiRotate::OnButtonDown(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVTrackballMultiRotate_OnButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVTrackballMultiRotate *op = static_cast<vtkPVTrackballMultiRotate *>(vp);

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
      op->vtkPVTrackballMultiRotate::OnButtonUp(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVTrackballMultiRotate_Methods[] = {
  {"IsTypeOf", PyvtkPVTrackballMultiRotate_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVTrackballMultiRotate_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVTrackballMultiRotate_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVTrackballMultiRotate\nC++: static vtkPVTrackballMultiRotate *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVTrackballMultiRotate_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVTrackballMultiRotate\nC++: vtkPVTrackballMultiRotate *NewInstance()\n\n"},
  {"OnMouseMove", PyvtkPVTrackballMultiRotate_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnMouseMove(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnButtonDown", PyvtkPVTrackballMultiRotate_OnButtonDown, METH_VARARGS,
   "V.OnButtonDown(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnButtonDown(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnButtonUp", PyvtkPVTrackballMultiRotate_OnButtonUp, METH_VARARGS,
   "V.OnButtonUp(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnButtonUp(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVTrackballMultiRotate_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVTrackballMultiRotate", // tp_name
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
  PyvtkPVTrackballMultiRotate_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVTrackballMultiRotate_StaticNew()
{
  return vtkPVTrackballMultiRotate::New();
}

PyObject *PyvtkPVTrackballMultiRotate_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVTrackballMultiRotate_Type, PyvtkPVTrackballMultiRotate_Methods,
    "vtkPVTrackballMultiRotate",
 &PyvtkPVTrackballMultiRotate_StaticNew);

  PyTypeObject *pytype = &PyvtkPVTrackballMultiRotate_Type;

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

void PyVTKAddFile_vtkPVTrackballMultiRotate(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVTrackballMultiRotate_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVTrackballMultiRotate", o) != 0)
  {
    Py_DECREF(o);
  }

}

