// python wrapper for vtkProcessModuleAutoMPI
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
#include "vtkProcessModuleAutoMPI.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProcessModuleAutoMPI(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProcessModuleAutoMPI_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkProcessModuleAutoMPI_Doc =
  "vtkProcessModuleAutoMPI - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkProcessModuleAutoMPI_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProcessModuleAutoMPI::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModuleAutoMPI_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModuleAutoMPI *op = static_cast<vtkProcessModuleAutoMPI *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProcessModuleAutoMPI::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModuleAutoMPI_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProcessModuleAutoMPI *tempr = vtkProcessModuleAutoMPI::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModuleAutoMPI_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModuleAutoMPI *op = static_cast<vtkProcessModuleAutoMPI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProcessModuleAutoMPI *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProcessModuleAutoMPI::NewInstance());

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
PyvtkProcessModuleAutoMPI_SetEnableAutoMPI(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetEnableAutoMPI");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProcessModuleAutoMPI::SetEnableAutoMPI(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModuleAutoMPI_SetNumberOfCores(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetNumberOfCores");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProcessModuleAutoMPI::SetNumberOfCores(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModuleAutoMPI_IsPossible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPossible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModuleAutoMPI *op = static_cast<vtkProcessModuleAutoMPI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsPossible() :
      op->vtkProcessModuleAutoMPI::IsPossible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModuleAutoMPI_ConnectToRemoteBuiltInSelf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectToRemoteBuiltInSelf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModuleAutoMPI *op = static_cast<vtkProcessModuleAutoMPI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ConnectToRemoteBuiltInSelf() :
      op->vtkProcessModuleAutoMPI::ConnectToRemoteBuiltInSelf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProcessModuleAutoMPI_Methods[] = {
  {"IsTypeOf", PyvtkProcessModuleAutoMPI_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProcessModuleAutoMPI_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProcessModuleAutoMPI_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProcessModuleAutoMPI\nC++: static vtkProcessModuleAutoMPI *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProcessModuleAutoMPI_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProcessModuleAutoMPI\nC++: vtkProcessModuleAutoMPI *NewInstance()\n\n"},
  {"SetEnableAutoMPI", PyvtkProcessModuleAutoMPI_SetEnableAutoMPI, METH_VARARGS,
   "V.SetEnableAutoMPI(bool)\nC++: static void SetEnableAutoMPI(bool val)\n\n"},
  {"SetNumberOfCores", PyvtkProcessModuleAutoMPI_SetNumberOfCores, METH_VARARGS,
   "V.SetNumberOfCores(int)\nC++: static void SetNumberOfCores(int val)\n\n"},
  {"IsPossible", PyvtkProcessModuleAutoMPI_IsPossible, METH_VARARGS,
   "V.IsPossible() -> int\nC++: int IsPossible()\n\nTo determine if it is possible to use multi-core on the system.\nIt returns 1 if possible and 0 if not.\n"},
  {"ConnectToRemoteBuiltInSelf", PyvtkProcessModuleAutoMPI_ConnectToRemoteBuiltInSelf, METH_VARARGS,
   "V.ConnectToRemoteBuiltInSelf() -> int\nC++: int ConnectToRemoteBuiltInSelf()\n\nThis method is called if the system running paraview has\nmulticores. When called the systems starts N pvservers on MPI\nwhere N is the total number of cores available. The method first\nscans for an available free port and starts the server on that\nport. The port over which the connection is made is returned for\nthe client to consequently connect to it. Returns 0 on failure.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProcessModuleAutoMPI_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkProcessModuleAutoMPI", // tp_name
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
  PyvtkProcessModuleAutoMPI_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProcessModuleAutoMPI_StaticNew()
{
  return vtkProcessModuleAutoMPI::New();
}

PyObject *PyvtkProcessModuleAutoMPI_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProcessModuleAutoMPI_Type, PyvtkProcessModuleAutoMPI_Methods,
    "vtkProcessModuleAutoMPI",
 &PyvtkProcessModuleAutoMPI_StaticNew);

  PyTypeObject *pytype = &PyvtkProcessModuleAutoMPI_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProcessModuleAutoMPI(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProcessModuleAutoMPI_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProcessModuleAutoMPI", o) != 0)
  {
    Py_DECREF(o);
  }

}

