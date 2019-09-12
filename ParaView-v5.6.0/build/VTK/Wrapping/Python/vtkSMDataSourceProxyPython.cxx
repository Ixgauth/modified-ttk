// python wrapper for vtkSMDataSourceProxy
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
#include "vtkSMDataSourceProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDataSourceProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDataSourceProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMSourceProxy_ClassNew
extern "C" { PyObject *PyvtkSMSourceProxy_ClassNew(); }
#define DECLARED_PyvtkSMSourceProxy_ClassNew
#endif

static const char *PyvtkSMDataSourceProxy_Doc =
  "vtkSMDataSourceProxy - \"data-centric\" proxy for VTK source on a server\n\n"
  "Superclass: vtkSMSourceProxy\n\n"
  "vtkSMDataSourceProxy adds a CopyData method to the vtkSMSourceProxy\n"
  "API to give a \"data-centric\" behaviour; the output data of the input\n"
  "vtkSMSourceProxy (to CopyData) is copied by the VTK object managed by\n"
  "the vtkSMDataSourceProxy.\n"
  "@sa\n"
  "vtkSMSourceProxy\n\n";


static PyObject *
PyvtkSMDataSourceProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDataSourceProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataSourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataSourceProxy *op = static_cast<vtkSMDataSourceProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDataSourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataSourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDataSourceProxy *tempr = vtkSMDataSourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataSourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataSourceProxy *op = static_cast<vtkSMDataSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDataSourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDataSourceProxy::NewInstance());

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
PyvtkSMDataSourceProxy_CopyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataSourceProxy *op = static_cast<vtkSMDataSourceProxy *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
  {
    if (ap.IsBound())
    {
      op->CopyData(temp0);
    }
    else
    {
      op->vtkSMDataSourceProxy::CopyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDataSourceProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMDataSourceProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDataSourceProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDataSourceProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDataSourceProxy\nC++: static vtkSMDataSourceProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDataSourceProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDataSourceProxy\nC++: vtkSMDataSourceProxy *NewInstance()\n\n"},
  {"CopyData", PyvtkSMDataSourceProxy_CopyData, METH_VARARGS,
   "V.CopyData(vtkSMSourceProxy)\nC++: void CopyData(vtkSMSourceProxy *sourceProxy)\n\nCopies data from source proxy object to object represented by\nthis source proxy object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDataSourceProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDataSourceProxy", // tp_name
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
  PyvtkSMDataSourceProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMDataSourceProxy_StaticNew()
{
  return vtkSMDataSourceProxy::New();
}

PyObject *PyvtkSMDataSourceProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDataSourceProxy_Type, PyvtkSMDataSourceProxy_Methods,
    "vtkSMDataSourceProxy",
 &PyvtkSMDataSourceProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMDataSourceProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMSourceProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMDataSourceProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDataSourceProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDataSourceProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

