// python wrapper for vtkSMPlotMatrixViewProxy
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
#include "vtkSMPlotMatrixViewProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPlotMatrixViewProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMPlotMatrixViewProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMContextViewProxy_ClassNew
extern "C" { PyObject *PyvtkSMContextViewProxy_ClassNew(); }
#define DECLARED_PyvtkSMContextViewProxy_ClassNew
#endif

static const char *PyvtkSMPlotMatrixViewProxy_Doc =
  "vtkSMPlotMatrixViewProxy - Proxy class for plot matrix view\n\n"
  "Superclass: vtkSMContextViewProxy\n\n"
;


static PyObject *
PyvtkSMPlotMatrixViewProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPlotMatrixViewProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPlotMatrixViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPlotMatrixViewProxy *op = static_cast<vtkSMPlotMatrixViewProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPlotMatrixViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPlotMatrixViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPlotMatrixViewProxy *tempr = vtkSMPlotMatrixViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPlotMatrixViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPlotMatrixViewProxy *op = static_cast<vtkSMPlotMatrixViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPlotMatrixViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPlotMatrixViewProxy::NewInstance());

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
PyvtkSMPlotMatrixViewProxy_GetContextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPlotMatrixViewProxy *op = static_cast<vtkSMPlotMatrixViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractContextItem *tempr = (ap.IsBound() ?
      op->GetContextItem() :
      op->vtkSMPlotMatrixViewProxy::GetContextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPlotMatrixViewProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMPlotMatrixViewProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPlotMatrixViewProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPlotMatrixViewProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMPlotMatrixViewProxy\nC++: static vtkSMPlotMatrixViewProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPlotMatrixViewProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMPlotMatrixViewProxy\nC++: vtkSMPlotMatrixViewProxy *NewInstance()\n\n"},
  {"GetContextItem", PyvtkSMPlotMatrixViewProxy_GetContextItem, METH_VARARGS,
   "V.GetContextItem() -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetContextItem() override;\n\nProvides access to the vtk plot matrix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMPlotMatrixViewProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMPlotMatrixViewProxy", // tp_name
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
  PyvtkSMPlotMatrixViewProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMPlotMatrixViewProxy_StaticNew()
{
  return vtkSMPlotMatrixViewProxy::New();
}

PyObject *PyvtkSMPlotMatrixViewProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMPlotMatrixViewProxy_Type, PyvtkSMPlotMatrixViewProxy_Methods,
    "vtkSMPlotMatrixViewProxy",
 &PyvtkSMPlotMatrixViewProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMPlotMatrixViewProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMContextViewProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPlotMatrixViewProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPlotMatrixViewProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPlotMatrixViewProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

