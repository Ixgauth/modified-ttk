// python wrapper for vtkSMProxyClipboard
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
#include "vtkSMProxyClipboard.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxyClipboard(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxyClipboard_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMProxyClipboard_Doc =
  "vtkSMProxyClipboard - helper class to help copy/paste properties on\nproxies.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMProxyClipboard is a helper class used to enable copy/paste for\n"
  "properties on proxies. Copy/Paste is more that simply copying values\n"
  "from a proxy to another (for which one should simply use\n"
  "vtkSMProxy::Copy()). This has several extra smarts including the\n"
  "following:\n"
  "\\li Skips input properties.\n"
  "\\li Skips properties that are hidden by setting\n"
  "vtkSMProperty::PanelVisibility to \"never\".\n"
  "\\li Specially handles properties with vtkSMProxyListDomain to select\n"
  "    the same\n"
  "type of proxy from the target domain when pasting and then loading\n"
  "the state for the value proxy separately.\n"
  "\\li For other vtkSMProxyProperty instances (e.g. LookupTable,\n"
  "ScalarOpacityFunction, etc.) on Paste, it tries to locate the\n"
  "requested proxy value on the session.\n\n";


static PyObject *
PyvtkSMProxyClipboard_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxyClipboard::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyClipboard_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyClipboard *op = static_cast<vtkSMProxyClipboard *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyClipboard::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyClipboard_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxyClipboard *tempr = vtkSMProxyClipboard::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyClipboard_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyClipboard *op = static_cast<vtkSMProxyClipboard *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyClipboard *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyClipboard::NewInstance());

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
PyvtkSMProxyClipboard_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyClipboard *op = static_cast<vtkSMProxyClipboard *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->Copy(temp0) :
      op->vtkSMProxyClipboard::Copy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyClipboard_CanPaste(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanPaste");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyClipboard *op = static_cast<vtkSMProxyClipboard *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanPaste(temp0) :
      op->vtkSMProxyClipboard::CanPaste(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyClipboard_Paste(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paste");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyClipboard *op = static_cast<vtkSMProxyClipboard *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paste(temp0) :
      op->vtkSMProxyClipboard::Paste(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyClipboard_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyClipboard *op = static_cast<vtkSMProxyClipboard *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSMProxyClipboard::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyClipboard_Methods[] = {
  {"IsTypeOf", PyvtkSMProxyClipboard_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxyClipboard_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxyClipboard_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxyClipboard\nC++: static vtkSMProxyClipboard *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxyClipboard_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxyClipboard\nC++: vtkSMProxyClipboard *NewInstance()\n\n"},
  {"Copy", PyvtkSMProxyClipboard_Copy, METH_VARARGS,
   "V.Copy(vtkSMProxy) -> bool\nC++: bool Copy(vtkSMProxy *source)\n\nPut a proxy's state on the clipboard. Return true if the\noperation was successful.\n"},
  {"CanPaste", PyvtkSMProxyClipboard_CanPaste, METH_VARARGS,
   "V.CanPaste(vtkSMProxy) -> bool\nC++: bool CanPaste(vtkSMProxy *target)\n\nReturns true of the proxy state on the clipboard can be pasted on\nto the specified target. Current implementation doesn't check for\nthe types of the proxies. In future, we can make this type-aware\nor add other criteria.\n"},
  {"Paste", PyvtkSMProxyClipboard_Paste, METH_VARARGS,
   "V.Paste(vtkSMProxy) -> bool\nC++: bool Paste(vtkSMProxy *target)\n\nPaste the state on the clipboard on to the target proxy.\n"},
  {"Clear", PyvtkSMProxyClipboard_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nClears the clipboard. Same as calling Copy(NULL).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxyClipboard_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMProxyClipboard", // tp_name
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
  PyvtkSMProxyClipboard_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxyClipboard_StaticNew()
{
  return vtkSMProxyClipboard::New();
}

PyObject *PyvtkSMProxyClipboard_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxyClipboard_Type, PyvtkSMProxyClipboard_Methods,
    "vtkSMProxyClipboard",
 &PyvtkSMProxyClipboard_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxyClipboard_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMProxyClipboard(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxyClipboard_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxyClipboard", o) != 0)
  {
    Py_DECREF(o);
  }

}

