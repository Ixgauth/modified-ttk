// python wrapper for vtkPVRepresentationAnimationHelper
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
#include "vtkPVRepresentationAnimationHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVRepresentationAnimationHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVRepresentationAnimationHelper_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkPVRepresentationAnimationHelper_Doc =
  "vtkPVRepresentationAnimationHelper - helper proxy used to animate\nproperties on the representations for any source.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkPVRepresentationAnimationHelper is helper proxy used to animate\n"
  "properties on the representations for any source. This makes is\n"
  "possible to set up an animation cue that will affect properties on\n"
  "all representations for a source without directly referring to the\n"
  "representation proxies.\n\n";


static PyObject *
PyvtkPVRepresentationAnimationHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVRepresentationAnimationHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentationAnimationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentationAnimationHelper *op = static_cast<vtkPVRepresentationAnimationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVRepresentationAnimationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentationAnimationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVRepresentationAnimationHelper *tempr = vtkPVRepresentationAnimationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentationAnimationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentationAnimationHelper *op = static_cast<vtkPVRepresentationAnimationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVRepresentationAnimationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVRepresentationAnimationHelper::NewInstance());

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
PyvtkPVRepresentationAnimationHelper_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentationAnimationHelper *op = static_cast<vtkPVRepresentationAnimationHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkPVRepresentationAnimationHelper::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentationAnimationHelper_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentationAnimationHelper *op = static_cast<vtkPVRepresentationAnimationHelper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkPVRepresentationAnimationHelper::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVRepresentationAnimationHelper_SetSourceProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVRepresentationAnimationHelper *op = static_cast<vtkPVRepresentationAnimationHelper *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetSourceProxy(temp0);
    }
    else
    {
      op->vtkPVRepresentationAnimationHelper::SetSourceProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVRepresentationAnimationHelper_Methods[] = {
  {"IsTypeOf", PyvtkPVRepresentationAnimationHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVRepresentationAnimationHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVRepresentationAnimationHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVRepresentationAnimationHelper\nC++: static vtkPVRepresentationAnimationHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVRepresentationAnimationHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVRepresentationAnimationHelper\nC++: vtkPVRepresentationAnimationHelper *NewInstance()\n\n"},
  {"SetVisibility", PyvtkPVRepresentationAnimationHelper_SetVisibility, METH_VARARGS,
   "V.SetVisibility(int)\nC++: void SetVisibility(int)\n\nDon't use directly. Use the corresponding properties instead.\n"},
  {"SetOpacity", PyvtkPVRepresentationAnimationHelper_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: void SetOpacity(double)\n\nDon't use directly. Use the corresponding properties instead.\n"},
  {"SetSourceProxy", PyvtkPVRepresentationAnimationHelper_SetSourceProxy, METH_VARARGS,
   "V.SetSourceProxy(vtkSMProxy)\nC++: void SetSourceProxy(vtkSMProxy *proxy)\n\nDon't use directly. Use the corresponding properties instead.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVRepresentationAnimationHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVRepresentationAnimationHelper", // tp_name
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
  PyvtkPVRepresentationAnimationHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVRepresentationAnimationHelper_StaticNew()
{
  return vtkPVRepresentationAnimationHelper::New();
}

PyObject *PyvtkPVRepresentationAnimationHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVRepresentationAnimationHelper_Type, PyvtkPVRepresentationAnimationHelper_Methods,
    "vtkPVRepresentationAnimationHelper",
 &PyvtkPVRepresentationAnimationHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkPVRepresentationAnimationHelper_Type;

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

void PyVTKAddFile_vtkPVRepresentationAnimationHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVRepresentationAnimationHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVRepresentationAnimationHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

