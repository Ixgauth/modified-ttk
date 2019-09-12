// python wrapper for vtkPythonAnimationCue
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
#include "vtkPythonAnimationCue.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPythonAnimationCue(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPythonAnimationCue_ClassNew(); }

#ifndef DECLARED_PyvtkAnimationCue_ClassNew
extern "C" { PyObject *PyvtkAnimationCue_ClassNew(); }
#define DECLARED_PyvtkAnimationCue_ClassNew
#endif

static const char *PyvtkPythonAnimationCue_Doc =
  "vtkPythonAnimationCue - vtkPythonAnimationCue is an animation cue\nthat can execute arbitrary Python scripts.\n\n"
  "Superclass: vtkAnimationCue\n\n"
;


static PyObject *
PyvtkPythonAnimationCue_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPythonAnimationCue::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPythonAnimationCue *tempr = vtkPythonAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPythonAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonAnimationCue::NewInstance());

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
PyvtkPythonAnimationCue_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  bool temp0 = false;
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
      op->vtkPythonAnimationCue::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPythonAnimationCue::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtkPythonAnimationCue::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtkPythonAnimationCue::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_SetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScript(temp0);
    }
    else
    {
      op->vtkPythonAnimationCue::SetScript(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnimationCue_GetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnimationCue *op = static_cast<vtkPythonAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScript() :
      op->vtkPythonAnimationCue::GetScript());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPythonAnimationCue_Methods[] = {
  {"IsTypeOf", PyvtkPythonAnimationCue_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPythonAnimationCue_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPythonAnimationCue_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPythonAnimationCue\nC++: static vtkPythonAnimationCue *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPythonAnimationCue_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPythonAnimationCue\nC++: vtkPythonAnimationCue *NewInstance()\n\n"},
  {"SetEnabled", PyvtkPythonAnimationCue_SetEnabled, METH_VARARGS,
   "V.SetEnabled(bool)\nC++: virtual void SetEnabled(bool _arg)\n\nEnable/Disable this cue.\n"},
  {"GetEnabled", PyvtkPythonAnimationCue_GetEnabled, METH_VARARGS,
   "V.GetEnabled() -> bool\nC++: virtual bool GetEnabled()\n\nEnable/Disable this cue.\n"},
  {"EnabledOn", PyvtkPythonAnimationCue_EnabledOn, METH_VARARGS,
   "V.EnabledOn()\nC++: virtual void EnabledOn()\n\nEnable/Disable this cue.\n"},
  {"EnabledOff", PyvtkPythonAnimationCue_EnabledOff, METH_VARARGS,
   "V.EnabledOff()\nC++: virtual void EnabledOff()\n\nEnable/Disable this cue.\n"},
  {"SetScript", PyvtkPythonAnimationCue_SetScript, METH_VARARGS,
   "V.SetScript(string)\nC++: virtual void SetScript(const char *_arg)\n\nGet/Set the python script to execute. The script must have the\nfollowing functions:\n\\li start_cue(cue): (optional) if present, called when the cue\n    starts.\n\\li tick(cue) : (required) called on every tick.\n\\li end_cue(cue): (optional) if present, called when the cue\n    ends.\n"},
  {"GetScript", PyvtkPythonAnimationCue_GetScript, METH_VARARGS,
   "V.GetScript() -> string\nC++: virtual char *GetScript()\n\nGet/Set the python script to execute. The script must have the\nfollowing functions:\n\\li start_cue(cue): (optional) if present, called when the cue\n    starts.\n\\li tick(cue) : (required) called on every tick.\n\\li end_cue(cue): (optional) if present, called when the cue\n    ends.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPythonAnimationCue_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPythonAnimationCue", // tp_name
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
  PyvtkPythonAnimationCue_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPythonAnimationCue_StaticNew()
{
  return vtkPythonAnimationCue::New();
}

PyObject *PyvtkPythonAnimationCue_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPythonAnimationCue_Type, PyvtkPythonAnimationCue_Methods,
    "vtkPythonAnimationCue",
 &PyvtkPythonAnimationCue_StaticNew);

  PyTypeObject *pytype = &PyvtkPythonAnimationCue_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAnimationCue_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPythonAnimationCue(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPythonAnimationCue_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPythonAnimationCue", o) != 0)
  {
    Py_DECREF(o);
  }

}

