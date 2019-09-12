// python wrapper for vtkSMEnsembleDataReaderProxy
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
#include "vtkSMEnsembleDataReaderProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMEnsembleDataReaderProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMEnsembleDataReaderProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMSourceProxy_ClassNew
extern "C" { PyObject *PyvtkSMSourceProxy_ClassNew(); }
#define DECLARED_PyvtkSMSourceProxy_ClassNew
#endif

static const char *PyvtkSMEnsembleDataReaderProxy_Doc =
  "vtkSMEnsembleDataReaderProxy - Examines file paths found in ensemble\ndata files (.pve) and creates readers that can read those files.\n\n"
  "Superclass: vtkSMSourceProxy\n\n"
  "Sets the correct reader for each file on the corresponding VTK\n"
  "object.\n\n";


static PyObject *
PyvtkSMEnsembleDataReaderProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMEnsembleDataReaderProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnsembleDataReaderProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnsembleDataReaderProxy *op = static_cast<vtkSMEnsembleDataReaderProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMEnsembleDataReaderProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnsembleDataReaderProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMEnsembleDataReaderProxy *tempr = vtkSMEnsembleDataReaderProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMEnsembleDataReaderProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnsembleDataReaderProxy *op = static_cast<vtkSMEnsembleDataReaderProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMEnsembleDataReaderProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMEnsembleDataReaderProxy::NewInstance());

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
PyvtkSMEnsembleDataReaderProxy_UpdateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMEnsembleDataReaderProxy *op = static_cast<vtkSMEnsembleDataReaderProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateVTKObjects();
    }
    else
    {
      op->vtkSMEnsembleDataReaderProxy::UpdateVTKObjects();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMEnsembleDataReaderProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMEnsembleDataReaderProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMEnsembleDataReaderProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMEnsembleDataReaderProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMEnsembleDataReaderProxy\nC++: static vtkSMEnsembleDataReaderProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMEnsembleDataReaderProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMEnsembleDataReaderProxy\nC++: vtkSMEnsembleDataReaderProxy *NewInstance()\n\n"},
  {"UpdateVTKObjects", PyvtkSMEnsembleDataReaderProxy_UpdateVTKObjects, METH_VARARGS,
   "V.UpdateVTKObjects()\nC++: void UpdateVTKObjects() override;\n\nUpdate the VTK object on the server by pushing the values of all\nmodified properties (un-modified properties are ignored). If the\nobject has not been created, it will be created first.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMEnsembleDataReaderProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMEnsembleDataReaderProxy", // tp_name
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
  PyvtkSMEnsembleDataReaderProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMEnsembleDataReaderProxy_StaticNew()
{
  return vtkSMEnsembleDataReaderProxy::New();
}

PyObject *PyvtkSMEnsembleDataReaderProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMEnsembleDataReaderProxy_Type, PyvtkSMEnsembleDataReaderProxy_Methods,
    "vtkSMEnsembleDataReaderProxy",
 &PyvtkSMEnsembleDataReaderProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMEnsembleDataReaderProxy_Type;

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

void PyVTKAddFile_vtkSMEnsembleDataReaderProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMEnsembleDataReaderProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMEnsembleDataReaderProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

