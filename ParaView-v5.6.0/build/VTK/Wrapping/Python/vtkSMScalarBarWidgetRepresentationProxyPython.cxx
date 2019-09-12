// python wrapper for vtkSMScalarBarWidgetRepresentationProxy
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
#include "vtkSMScalarBarWidgetRepresentationProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMScalarBarWidgetRepresentationProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMScalarBarWidgetRepresentationProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMNewWidgetRepresentationProxy_ClassNew
extern "C" { PyObject *PyvtkSMNewWidgetRepresentationProxy_ClassNew(); }
#define DECLARED_PyvtkSMNewWidgetRepresentationProxy_ClassNew
#endif

static const char *PyvtkSMScalarBarWidgetRepresentationProxy_Doc =
  "vtkSMScalarBarWidgetRepresentationProxy - is the representation\ncorresponding to a scalar bar or color legend in a Render View.\n\n"
  "Superclass: vtkSMNewWidgetRepresentationProxy\n\n"
;


static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMScalarBarWidgetRepresentationProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMScalarBarWidgetRepresentationProxy *op = static_cast<vtkSMScalarBarWidgetRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMScalarBarWidgetRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMScalarBarWidgetRepresentationProxy *tempr = vtkSMScalarBarWidgetRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMScalarBarWidgetRepresentationProxy *op = static_cast<vtkSMScalarBarWidgetRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMScalarBarWidgetRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMScalarBarWidgetRepresentationProxy::NewInstance());

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
PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMScalarBarWidgetRepresentationProxy *op = static_cast<vtkSMScalarBarWidgetRepresentationProxy *>(vp);

  vtkPVArrayInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateComponentTitle(temp0) :
      op->vtkSMScalarBarWidgetRepresentationProxy::UpdateComponentTitle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UpdateComponentTitle");

  vtkSMProxy *temp0 = nullptr;
  vtkPVArrayInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkPVArrayInformation"))
  {
    bool tempr = vtkSMScalarBarWidgetRepresentationProxy::UpdateComponentTitle(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle_s1(self, args);
    case 2:
      return PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateComponentTitle");
  return nullptr;
}



static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceInView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMScalarBarWidgetRepresentationProxy *op = static_cast<vtkSMScalarBarWidgetRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->PlaceInView(temp0) :
      op->vtkSMScalarBarWidgetRepresentationProxy::PlaceInView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PlaceInView");

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = vtkSMScalarBarWidgetRepresentationProxy::PlaceInView(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView_s1(self, args);
    case 2:
      return PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceInView");
  return nullptr;
}


static PyMethodDef PyvtkSMScalarBarWidgetRepresentationProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMScalarBarWidgetRepresentationProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMScalarBarWidgetRepresentationProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMScalarBarWidgetRepresentationProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMScalarBarWidgetRepresentationProxy\nC++: static vtkSMScalarBarWidgetRepresentationProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMScalarBarWidgetRepresentationProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMScalarBarWidgetRepresentationProxy\nC++: vtkSMScalarBarWidgetRepresentationProxy *NewInstance()\n\n"},
  {"UpdateComponentTitle", PyvtkSMScalarBarWidgetRepresentationProxy_UpdateComponentTitle, METH_VARARGS,
   "V.UpdateComponentTitle(vtkPVArrayInformation) -> bool\nC++: virtual bool UpdateComponentTitle(\n    vtkPVArrayInformation *dataInfo)\nV.UpdateComponentTitle(vtkSMProxy, vtkPVArrayInformation) -> bool\nC++: static bool UpdateComponentTitle(vtkSMProxy *proxy,\n    vtkPVArrayInformation *dataInfo)\n\nUpdates the scalar bar's component title using the data\ninformation to determine component names if possible.\n"},
  {"PlaceInView", PyvtkSMScalarBarWidgetRepresentationProxy_PlaceInView, METH_VARARGS,
   "V.PlaceInView(vtkSMProxy) -> bool\nC++: virtual bool PlaceInView(vtkSMProxy *view)\nV.PlaceInView(vtkSMProxy, vtkSMProxy) -> bool\nC++: static bool PlaceInView(vtkSMProxy *proxy, vtkSMProxy *view)\n\nAttempt to place the scalar bar in the view based on the\nplacement of other currently shown and visible scalar bars.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMScalarBarWidgetRepresentationProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMScalarBarWidgetRepresentationProxy", // tp_name
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
  PyvtkSMScalarBarWidgetRepresentationProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMScalarBarWidgetRepresentationProxy_StaticNew()
{
  return vtkSMScalarBarWidgetRepresentationProxy::New();
}

PyObject *PyvtkSMScalarBarWidgetRepresentationProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMScalarBarWidgetRepresentationProxy_Type, PyvtkSMScalarBarWidgetRepresentationProxy_Methods,
    "vtkSMScalarBarWidgetRepresentationProxy",
 &PyvtkSMScalarBarWidgetRepresentationProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMScalarBarWidgetRepresentationProxy_Type;

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

void PyVTKAddFile_vtkSMScalarBarWidgetRepresentationProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMScalarBarWidgetRepresentationProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMScalarBarWidgetRepresentationProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

