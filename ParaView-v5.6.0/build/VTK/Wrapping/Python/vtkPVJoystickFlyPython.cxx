// python wrapper for vtkPVJoystickFly
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
#include "vtkPVJoystickFly.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVJoystickFly(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVJoystickFly_ClassNew(); }

#ifndef DECLARED_PyvtkCameraManipulator_ClassNew
extern "C" { PyObject *PyvtkCameraManipulator_ClassNew(); }
#define DECLARED_PyvtkCameraManipulator_ClassNew
#endif

static const char *PyvtkPVJoystickFly_Doc =
  "vtkPVJoystickFly - Fly camera towards or away from the object\n\n"
  "Superclass: vtkCameraManipulator\n\n"
  "vtkPVJoystickFly allows the user to interactively manipulate the\n"
  "camera, the viewpoint of the scene.\n\n";


static PyObject *
PyvtkPVJoystickFly_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVJoystickFly::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVJoystickFly::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVJoystickFly *tempr = vtkPVJoystickFly::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVJoystickFly *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVJoystickFly::NewInstance());

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
PyvtkPVJoystickFly_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

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
      op->vtkPVJoystickFly::OnMouseMove(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_OnButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

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
      op->vtkPVJoystickFly::OnButtonDown(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_OnButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

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
      op->vtkPVJoystickFly::OnButtonUp(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_SetFlySpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlySpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlySpeed(temp0);
    }
    else
    {
      op->vtkPVJoystickFly::SetFlySpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_GetFlySpeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlySpeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFlySpeedMinValue() :
      op->vtkPVJoystickFly::GetFlySpeedMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_GetFlySpeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlySpeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFlySpeedMaxValue() :
      op->vtkPVJoystickFly::GetFlySpeedMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVJoystickFly_GetFlySpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlySpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVJoystickFly *op = static_cast<vtkPVJoystickFly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFlySpeed() :
      op->vtkPVJoystickFly::GetFlySpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVJoystickFly_Methods[] = {
  {"IsTypeOf", PyvtkPVJoystickFly_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVJoystickFly_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVJoystickFly_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVJoystickFly\nC++: static vtkPVJoystickFly *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVJoystickFly_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVJoystickFly\nC++: vtkPVJoystickFly *NewInstance()\n\n"},
  {"OnMouseMove", PyvtkPVJoystickFly_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnMouseMove(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnButtonDown", PyvtkPVJoystickFly_OnButtonDown, METH_VARARGS,
   "V.OnButtonDown(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnButtonDown(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnButtonUp", PyvtkPVJoystickFly_OnButtonUp, METH_VARARGS,
   "V.OnButtonUp(int, int, vtkRenderer, vtkRenderWindowInteractor)\nC++: void OnButtonUp(int x, int y, vtkRenderer *ren,\n    vtkRenderWindowInteractor *rwi) override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"SetFlySpeed", PyvtkPVJoystickFly_SetFlySpeed, METH_VARARGS,
   "V.SetFlySpeed(float)\nC++: virtual void SetFlySpeed(double _arg)\n\nSet and get the speed of flying.\n"},
  {"GetFlySpeedMinValue", PyvtkPVJoystickFly_GetFlySpeedMinValue, METH_VARARGS,
   "V.GetFlySpeedMinValue() -> float\nC++: virtual double GetFlySpeedMinValue()\n\nSet and get the speed of flying.\n"},
  {"GetFlySpeedMaxValue", PyvtkPVJoystickFly_GetFlySpeedMaxValue, METH_VARARGS,
   "V.GetFlySpeedMaxValue() -> float\nC++: virtual double GetFlySpeedMaxValue()\n\nSet and get the speed of flying.\n"},
  {"GetFlySpeed", PyvtkPVJoystickFly_GetFlySpeed, METH_VARARGS,
   "V.GetFlySpeed() -> float\nC++: virtual double GetFlySpeed()\n\nSet and get the speed of flying.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVJoystickFly_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVJoystickFly", // tp_name
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
  PyvtkPVJoystickFly_Doc, // tp_doc
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

PyObject *PyvtkPVJoystickFly_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVJoystickFly_Type, PyvtkPVJoystickFly_Methods,
    "vtkPVJoystickFly",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVJoystickFly_Type;

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

void PyVTKAddFile_vtkPVJoystickFly(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVJoystickFly_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVJoystickFly", o) != 0)
  {
    Py_DECREF(o);
  }

}

