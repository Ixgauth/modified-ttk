// python wrapper for vtkCameraManipulatorGUIHelper
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
#include "vtkCameraManipulatorGUIHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCameraManipulatorGUIHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCameraManipulatorGUIHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCameraManipulatorGUIHelper_Doc =
  "vtkCameraManipulatorGUIHelper - Helper class for Camera\n\n"
  "Superclass: vtkObject\n\n"
  "Manipulators.\n\n"
  "This class is the interaface that defines API for a helper class used\n"
  "by some specialized camera manipulators that needed access to GUI.\n"
  "GUI implementations subclass this. vtkPVInteractorStyle sets the\n"
  "helper on every manipulator, if available so that the manipulator can\n"
  "use it.\n"
  "@sa\n"
  "vtkPVInteractorStyle\n\n";


static PyObject *
PyvtkCameraManipulatorGUIHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCameraManipulatorGUIHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraManipulatorGUIHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCameraManipulatorGUIHelper *tempr = vtkCameraManipulatorGUIHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraManipulatorGUIHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraManipulatorGUIHelper::NewInstance());

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
PyvtkCameraManipulatorGUIHelper_UpdateGUI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGUI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->UpdateGUI();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_GetActiveSourceBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveSourceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->GetActiveSourceBounds(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_GetActiveActorTranslate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveActorTranslate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->GetActiveActorTranslate(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_SetActiveActorTranslate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveActorTranslate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->SetActiveActorTranslate(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraManipulatorGUIHelper_GetCenterOfRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraManipulatorGUIHelper *op = static_cast<vtkCameraManipulatorGUIHelper *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = op->GetCenterOfRotation(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraManipulatorGUIHelper_Methods[] = {
  {"IsTypeOf", PyvtkCameraManipulatorGUIHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCameraManipulatorGUIHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCameraManipulatorGUIHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCameraManipulatorGUIHelper\nC++: static vtkCameraManipulatorGUIHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCameraManipulatorGUIHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCameraManipulatorGUIHelper\nC++: vtkCameraManipulatorGUIHelper *NewInstance()\n\n"},
  {"UpdateGUI", PyvtkCameraManipulatorGUIHelper_UpdateGUI, METH_VARARGS,
   "V.UpdateGUI()\nC++: virtual void UpdateGUI()\n\nCalled by the manipulator to update the GUI. This typically\ninvolves calling processing pending events on the GUI.\n"},
  {"GetActiveSourceBounds", PyvtkCameraManipulatorGUIHelper_GetActiveSourceBounds, METH_VARARGS,
   "V.GetActiveSourceBounds([float, float, float, float, float,\n    float]) -> int\nC++: virtual int GetActiveSourceBounds(double bounds[6])\n\nSome interactors use the bounds of the active source. The method\nreturns 0 is no active source is present or not supported by GUI,\notherwise returns 1 and the bounds are filled into the passed\nargument array.\n"},
  {"GetActiveActorTranslate", PyvtkCameraManipulatorGUIHelper_GetActiveActorTranslate, METH_VARARGS,
   "V.GetActiveActorTranslate([float, float, float]) -> int\nC++: virtual int GetActiveActorTranslate(double translate[3])\n\nCalled to get/set the translation for the actor for the active\nsource in the active view. If applicable returns 1, otherwise\nreturns 0.\n"},
  {"SetActiveActorTranslate", PyvtkCameraManipulatorGUIHelper_SetActiveActorTranslate, METH_VARARGS,
   "V.SetActiveActorTranslate([float, float, float]) -> int\nC++: virtual int SetActiveActorTranslate(double translate[3])\n\nCalled to get/set the translation for the actor for the active\nsource in the active view. If applicable returns 1, otherwise\nreturns 0.\n"},
  {"GetCenterOfRotation", PyvtkCameraManipulatorGUIHelper_GetCenterOfRotation, METH_VARARGS,
   "V.GetCenterOfRotation([float, float, float]) -> int\nC++: virtual int GetCenterOfRotation(double center[3])\n\nGet the center of rotation. Returns 0 if not applicable.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCameraManipulatorGUIHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkCameraManipulatorGUIHelper", // tp_name
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
  PyvtkCameraManipulatorGUIHelper_Doc, // tp_doc
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

PyObject *PyvtkCameraManipulatorGUIHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCameraManipulatorGUIHelper_Type, PyvtkCameraManipulatorGUIHelper_Methods,
    "vtkCameraManipulatorGUIHelper",
 nullptr);

  PyTypeObject *pytype = &PyvtkCameraManipulatorGUIHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCameraManipulatorGUIHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCameraManipulatorGUIHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCameraManipulatorGUIHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

