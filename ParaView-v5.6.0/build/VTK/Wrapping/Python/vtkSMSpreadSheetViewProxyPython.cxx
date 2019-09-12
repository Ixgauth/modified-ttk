// python wrapper for vtkSMSpreadSheetViewProxy
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
#include "vtkSMSpreadSheetViewProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSpreadSheetViewProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSpreadSheetViewProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMViewProxy_ClassNew
extern "C" { PyObject *PyvtkSMViewProxy_ClassNew(); }
#define DECLARED_PyvtkSMViewProxy_ClassNew
#endif

static const char *PyvtkSMSpreadSheetViewProxy_Doc =
  "vtkSMSpreadSheetViewProxy - proxy for \"SpreadSheetView\"\n\n"
  "Superclass: vtkSMViewProxy\n\n"
  "vtkSMSpreadSheetRepresentationProxy extends vtkSMViewProxy to\n"
  "override a few methods that add extra logic specific to this view.\n"
  "Namely, we override `RepresentationVisibilityChanged` to ensure that\n"
  "the view picks a default attribute type suitable for the visible\n"
  "representation.\n\n";


static PyObject *
PyvtkSMSpreadSheetViewProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSpreadSheetViewProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSpreadSheetViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSpreadSheetViewProxy *op = static_cast<vtkSMSpreadSheetViewProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSpreadSheetViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSpreadSheetViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSpreadSheetViewProxy *tempr = vtkSMSpreadSheetViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSpreadSheetViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSpreadSheetViewProxy *op = static_cast<vtkSMSpreadSheetViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSpreadSheetViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSpreadSheetViewProxy::NewInstance());

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
PyvtkSMSpreadSheetViewProxy_RepresentationVisibilityChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepresentationVisibilityChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSpreadSheetViewProxy *op = static_cast<vtkSMSpreadSheetViewProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RepresentationVisibilityChanged(temp0, temp1);
    }
    else
    {
      op->vtkSMSpreadSheetViewProxy::RepresentationVisibilityChanged(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSpreadSheetViewProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMSpreadSheetViewProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSpreadSheetViewProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSpreadSheetViewProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSpreadSheetViewProxy\nC++: static vtkSMSpreadSheetViewProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSpreadSheetViewProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSpreadSheetViewProxy\nC++: vtkSMSpreadSheetViewProxy *NewInstance()\n\n"},
  {"RepresentationVisibilityChanged", PyvtkSMSpreadSheetViewProxy_RepresentationVisibilityChanged, METH_VARARGS,
   "V.RepresentationVisibilityChanged(vtkSMProxy, bool)\nC++: void RepresentationVisibilityChanged(vtkSMProxy *repr,\n    bool new_visibility) override;\n\nOverridden to update `FieldAssociation` property on the view to\nmatch the data type being shown.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSpreadSheetViewProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMSpreadSheetViewProxy", // tp_name
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
  PyvtkSMSpreadSheetViewProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSpreadSheetViewProxy_StaticNew()
{
  return vtkSMSpreadSheetViewProxy::New();
}

PyObject *PyvtkSMSpreadSheetViewProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSpreadSheetViewProxy_Type, PyvtkSMSpreadSheetViewProxy_Methods,
    "vtkSMSpreadSheetViewProxy",
 &PyvtkSMSpreadSheetViewProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSpreadSheetViewProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMViewProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSpreadSheetViewProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSpreadSheetViewProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSpreadSheetViewProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

