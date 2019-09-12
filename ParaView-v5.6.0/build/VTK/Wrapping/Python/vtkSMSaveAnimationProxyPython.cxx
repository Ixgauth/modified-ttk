// python wrapper for vtkSMSaveAnimationProxy
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
#include "vtkSMSaveAnimationProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSaveAnimationProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSaveAnimationProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMSaveScreenshotProxy_ClassNew
extern "C" { PyObject *PyvtkSMSaveScreenshotProxy_ClassNew(); }
#define DECLARED_PyvtkSMSaveScreenshotProxy_ClassNew
#endif

static const char *PyvtkSMSaveAnimationProxy_Doc =
  "vtkSMSaveAnimationProxy - proxy to save animation to images/video.\n\n"
  "Superclass: vtkSMSaveScreenshotProxy\n\n"
  "vtkSMSaveAnimationProxy is a proxy that helps with saving animation\n"
  "to images or video. The properties on this proxy provide various\n"
  "options that user can configure when saving animations. Once those\n"
  "properties are setup, one calls\n"
  "vtkSMSaveAnimationProxy::WriteAnimation` to save out the animation.\n\n";


static PyObject *
PyvtkSMSaveAnimationProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSaveAnimationProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSaveAnimationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSaveAnimationProxy *op = static_cast<vtkSMSaveAnimationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSaveAnimationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSaveAnimationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSaveAnimationProxy *tempr = vtkSMSaveAnimationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSaveAnimationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSaveAnimationProxy *op = static_cast<vtkSMSaveAnimationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSaveAnimationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSaveAnimationProxy::NewInstance());

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
PyvtkSMSaveAnimationProxy_WriteAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSaveAnimationProxy *op = static_cast<vtkSMSaveAnimationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->WriteAnimation(temp0) :
      op->vtkSMSaveAnimationProxy::WriteAnimation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkSMSaveAnimationProxy_SupportsDisconnectAndSave(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SupportsDisconnectAndSave");

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    bool tempr = vtkSMSaveAnimationProxy::SupportsDisconnectAndSave(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkSMSaveAnimationProxy_SupportsAVI(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SupportsAVI");

  vtkSMSession *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMSession") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = vtkSMSaveAnimationProxy::SupportsAVI(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkSMSaveAnimationProxy_SupportsOGV(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SupportsOGV");

  vtkSMSession *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMSession") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = vtkSMSaveAnimationProxy::SupportsOGV(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkSMSaveAnimationProxy_UpdateDefaultsAndVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDefaultsAndVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSaveAnimationProxy *op = static_cast<vtkSMSaveAnimationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateDefaultsAndVisibilities(temp0);
    }
    else
    {
      op->vtkSMSaveAnimationProxy::UpdateDefaultsAndVisibilities(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSaveAnimationProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMSaveAnimationProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSaveAnimationProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSaveAnimationProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSaveAnimationProxy\nC++: static vtkSMSaveAnimationProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSaveAnimationProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSaveAnimationProxy\nC++: vtkSMSaveAnimationProxy *NewInstance()\n\n"},
  {"WriteAnimation", PyvtkSMSaveAnimationProxy_WriteAnimation, METH_VARARGS,
   "V.WriteAnimation(string) -> bool\nC++: virtual bool WriteAnimation(const char *filename)\n\nSave animation as images/video. The properties on this proxy\nprovide all the necessary information to save the animation.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"SupportsDisconnectAndSave", PyvtkSMSaveAnimationProxy_SupportsDisconnectAndSave, METH_VARARGS,
   "V.SupportsDisconnectAndSave(vtkSMSession) -> bool\nC++: static bool SupportsDisconnectAndSave(vtkSMSession *session)\n\nReturns true if the session can support disconnecting and saving\nanimations.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"SupportsAVI", PyvtkSMSaveAnimationProxy_SupportsAVI, METH_VARARGS,
   "V.SupportsAVI(vtkSMSession, bool) -> bool\nC++: static bool SupportsAVI(vtkSMSession *session,\n    bool remote=false)\n\nReturns true if the session supports AVI file writing.@deprecated\nin ParaView 5.5\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"SupportsOGV", PyvtkSMSaveAnimationProxy_SupportsOGV, METH_VARARGS,
   "V.SupportsOGV(vtkSMSession, bool) -> bool\nC++: static bool SupportsOGV(vtkSMSession *session,\n    bool remote=false)\n\nReturns true if the session supports OGV file writing.@deprecated\nin ParaView 5.5\n"},
#endif
  {"UpdateDefaultsAndVisibilities", PyvtkSMSaveAnimationProxy_UpdateDefaultsAndVisibilities, METH_VARARGS,
   "V.UpdateDefaultsAndVisibilities(string)\nC++: void UpdateDefaultsAndVisibilities(const char *filename)\n    override;\n\nOverridden to update visibility state of \"FrameRate\" property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSaveAnimationProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkSMSaveAnimationProxy", // tp_name
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
  PyvtkSMSaveAnimationProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSaveAnimationProxy_StaticNew()
{
  return vtkSMSaveAnimationProxy::New();
}

PyObject *PyvtkSMSaveAnimationProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSaveAnimationProxy_Type, PyvtkSMSaveAnimationProxy_Methods,
    "vtkSMSaveAnimationProxy",
 &PyvtkSMSaveAnimationProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSaveAnimationProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMSaveScreenshotProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSaveAnimationProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSaveAnimationProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSaveAnimationProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

