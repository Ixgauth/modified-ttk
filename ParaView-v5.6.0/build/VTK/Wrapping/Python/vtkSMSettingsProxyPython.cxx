// python wrapper for vtkSMSettingsProxy
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
#include "vtkSMSettingsProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSettingsProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSettingsProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMSettingsProxy_Doc =
  "vtkSMSettingsProxy - proxy subclass responsible for linking settings\nproxies and settings classes on the VTK side.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkSMSettingsProxy is used as a proxy for settings objects. It\n"
  "listens for changes to the underlying VTK objects and updates the\n"
  "proxy properties whenever the VTK object settings change.\n\n";


static PyObject *
PyvtkSMSettingsProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSettingsProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettingsProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettingsProxy *op = static_cast<vtkSMSettingsProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSettingsProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettingsProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSettingsProxy *tempr = vtkSMSettingsProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSettingsProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettingsProxy *op = static_cast<vtkSMSettingsProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSettingsProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSettingsProxy::NewInstance());

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
PyvtkSMSettingsProxy_ReadXMLAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadXMLAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSettingsProxy *op = static_cast<vtkSMSettingsProxy *>(vp);

  vtkSMSessionProxyManager *temp0 = nullptr;
  vtkPVXMLElement *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager") &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadXMLAttributes(temp0, temp1) :
      op->vtkSMSettingsProxy::ReadXMLAttributes(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSettingsProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMSettingsProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSettingsProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSettingsProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSettingsProxy\nC++: static vtkSMSettingsProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSettingsProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSettingsProxy\nC++: vtkSMSettingsProxy *NewInstance()\n\n"},
  {"ReadXMLAttributes", PyvtkSMSettingsProxy_ReadXMLAttributes, METH_VARARGS,
   "V.ReadXMLAttributes(vtkSMSessionProxyManager, vtkPVXMLElement)\n    -> int\nC++: int ReadXMLAttributes(vtkSMSessionProxyManager *pm,\n    vtkPVXMLElement *element) override;\n\nOverridden to link information properties with their\ncorresponding \"setter\" properties.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSettingsProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSettingsProxy", // tp_name
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
  PyvtkSMSettingsProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSettingsProxy_StaticNew()
{
  return vtkSMSettingsProxy::New();
}

PyObject *PyvtkSMSettingsProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSettingsProxy_Type, PyvtkSMSettingsProxy_Methods,
    "vtkSMSettingsProxy",
 &PyvtkSMSettingsProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSettingsProxy_Type;

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

void PyVTKAddFile_vtkSMSettingsProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSettingsProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSettingsProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

