// python wrapper for vtkSMAnimationSceneProxy
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
#include "vtkSMAnimationSceneProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMAnimationSceneProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMAnimationSceneProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMAnimationSceneProxy_Doc =
  "vtkSMAnimationSceneProxy - vtkSMAnimationSceneProxy observe\nvtkCommand::ModifiedEvent on the client-side VTK-object to call\nUpdatePropertyInformation() every time that happens.\n\n"
  "Superclass: vtkSMProxy\n\n"
;


static PyObject *
PyvtkSMAnimationSceneProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMAnimationSceneProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneProxy *op = static_cast<vtkSMAnimationSceneProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMAnimationSceneProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMAnimationSceneProxy *tempr = vtkSMAnimationSceneProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationSceneProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneProxy *op = static_cast<vtkSMAnimationSceneProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMAnimationSceneProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMAnimationSceneProxy::NewInstance());

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
PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAnimationUsingDataTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneProxy *op = static_cast<vtkSMAnimationSceneProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateAnimationUsingDataTimeSteps() :
      op->vtkSMAnimationSceneProxy::UpdateAnimationUsingDataTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UpdateAnimationUsingDataTimeSteps");

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = vtkSMAnimationSceneProxy::UpdateAnimationUsingDataTimeSteps(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps_s1(self, args);
    case 1:
      return PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateAnimationUsingDataTimeSteps");
  return nullptr;
}



static PyObject *
PyvtkSMAnimationSceneProxy_FindAnimationCue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAnimationCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationSceneProxy *op = static_cast<vtkSMAnimationSceneProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindAnimationCue(temp0, temp1) :
      op->vtkSMAnimationSceneProxy::FindAnimationCue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneProxy_FindAnimationCue_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FindAnimationCue");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    vtkSMProxy *tempr = vtkSMAnimationSceneProxy::FindAnimationCue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMAnimationSceneProxy_FindAnimationCue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMAnimationSceneProxy_FindAnimationCue_s1(self, args);
    case 3:
      return PyvtkSMAnimationSceneProxy_FindAnimationCue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindAnimationCue");
  return nullptr;
}


static PyMethodDef PyvtkSMAnimationSceneProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMAnimationSceneProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMAnimationSceneProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMAnimationSceneProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMAnimationSceneProxy\nC++: static vtkSMAnimationSceneProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMAnimationSceneProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMAnimationSceneProxy\nC++: vtkSMAnimationSceneProxy *NewInstance()\n\n"},
  {"UpdateAnimationUsingDataTimeSteps", PyvtkSMAnimationSceneProxy_UpdateAnimationUsingDataTimeSteps, METH_VARARGS,
   "V.UpdateAnimationUsingDataTimeSteps() -> bool\nC++: virtual bool UpdateAnimationUsingDataTimeSteps()\nV.UpdateAnimationUsingDataTimeSteps(vtkSMProxy) -> bool\nC++: static bool UpdateAnimationUsingDataTimeSteps(\n    vtkSMProxy *scene)\n\nSetups the animation scene's playback mode and time-ranges based\non the timesteps available on the time-keeper proxy set on the\nanimation scene.\n"},
  {"FindAnimationCue", PyvtkSMAnimationSceneProxy_FindAnimationCue, METH_VARARGS,
   "V.FindAnimationCue(vtkSMProxy, string) -> vtkSMProxy\nC++: virtual vtkSMProxy *FindAnimationCue(\n    vtkSMProxy *animatedProxy, const char *animatedPropertyName)\nV.FindAnimationCue(vtkSMProxy, vtkSMProxy, string) -> vtkSMProxy\nC++: static vtkSMProxy *FindAnimationCue(vtkSMProxy *scene,\n    vtkSMProxy *animatedProxy, const char *animatedPropertyName)\n\nReturns the first animation cue (enabled or otherwise) that\nanimates the given property on the proxy. This will return NULL\nif none such cue exists.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMAnimationSceneProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkSMAnimationSceneProxy", // tp_name
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
  PyvtkSMAnimationSceneProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMAnimationSceneProxy_StaticNew()
{
  return vtkSMAnimationSceneProxy::New();
}

PyObject *PyvtkSMAnimationSceneProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMAnimationSceneProxy_Type, PyvtkSMAnimationSceneProxy_Methods,
    "vtkSMAnimationSceneProxy",
 &PyvtkSMAnimationSceneProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMAnimationSceneProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMAnimationSceneProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMAnimationSceneProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMAnimationSceneProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

