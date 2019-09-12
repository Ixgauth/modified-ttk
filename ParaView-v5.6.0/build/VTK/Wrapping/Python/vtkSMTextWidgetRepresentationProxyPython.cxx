// python wrapper for vtkSMTextWidgetRepresentationProxy
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
#include "vtkSMTextWidgetRepresentationProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMTextWidgetRepresentationProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMTextWidgetRepresentationProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMNewWidgetRepresentationProxy_ClassNew
extern "C" { PyObject *PyvtkSMNewWidgetRepresentationProxy_ClassNew(); }
#define DECLARED_PyvtkSMNewWidgetRepresentationProxy_ClassNew
#endif

static const char *PyvtkSMTextWidgetRepresentationProxy_Doc =
  "vtkSMTextWidgetRepresentationProxy - \n\n"
  "Superclass: vtkSMNewWidgetRepresentationProxy\n\n"
;


static PyObject *
PyvtkSMTextWidgetRepresentationProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMTextWidgetRepresentationProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTextWidgetRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTextWidgetRepresentationProxy *op = static_cast<vtkSMTextWidgetRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTextWidgetRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTextWidgetRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMTextWidgetRepresentationProxy *tempr = vtkSMTextWidgetRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTextWidgetRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTextWidgetRepresentationProxy *op = static_cast<vtkSMTextWidgetRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMTextWidgetRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTextWidgetRepresentationProxy::NewInstance());

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

static PyMethodDef PyvtkSMTextWidgetRepresentationProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMTextWidgetRepresentationProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMTextWidgetRepresentationProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMTextWidgetRepresentationProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMTextWidgetRepresentationProxy\nC++: static vtkSMTextWidgetRepresentationProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMTextWidgetRepresentationProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMTextWidgetRepresentationProxy\nC++: vtkSMTextWidgetRepresentationProxy *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMTextWidgetRepresentationProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMTextWidgetRepresentationProxy", // tp_name
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
  PyvtkSMTextWidgetRepresentationProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMTextWidgetRepresentationProxy_StaticNew()
{
  return vtkSMTextWidgetRepresentationProxy::New();
}

PyObject *PyvtkSMTextWidgetRepresentationProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMTextWidgetRepresentationProxy_Type, PyvtkSMTextWidgetRepresentationProxy_Methods,
    "vtkSMTextWidgetRepresentationProxy",
 &PyvtkSMTextWidgetRepresentationProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMTextWidgetRepresentationProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMNewWidgetRepresentationProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMTextWidgetRepresentationProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMTextWidgetRepresentationProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMTextWidgetRepresentationProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

