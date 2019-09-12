// python wrapper for vtkPChacoReader
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
#include "vtkPChacoReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPChacoReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPChacoReader_ClassNew(); }

#ifndef DECLARED_PyvtkChacoReader_ClassNew
extern "C" { PyObject *PyvtkChacoReader_ClassNew(); }
#define DECLARED_PyvtkChacoReader_ClassNew
#endif

static const char *PyvtkPChacoReader_Doc =
  "vtkPChacoReader - Read Chaco files\n\n"
  "Superclass: vtkChacoReader\n\n"
  "vtkPChacoReader is a unstructured grid source object that reads Chaco\n"
  "files.  The file is read by process 0 and converted into a\n"
  "vtkUnstructuredGrid.  The vtkDistributedDataFilter is invoked to\n"
  "divide the grid among the processes.\n\n";


static PyObject *
PyvtkPChacoReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPChacoReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPChacoReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPChacoReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPChacoReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPChacoReader *tempr = vtkPChacoReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPChacoReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPChacoReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPChacoReader::NewInstance());

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
PyvtkPChacoReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkPChacoReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPChacoReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPChacoReader *op = static_cast<vtkPChacoReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPChacoReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPChacoReader_Methods[] = {
  {"IsTypeOf", PyvtkPChacoReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPChacoReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPChacoReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPChacoReader\nC++: static vtkPChacoReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPChacoReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPChacoReader\nC++: vtkPChacoReader *NewInstance()\n\n"},
  {"SetController", PyvtkPChacoReader_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object (we'll use global World\ncontroller if you don't set a different one).\n"},
  {"GetController", PyvtkPChacoReader_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPChacoReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelPython.vtkPChacoReader", // tp_name
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
  PyvtkPChacoReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPChacoReader_StaticNew()
{
  return vtkPChacoReader::New();
}

PyObject *PyvtkPChacoReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPChacoReader_Type, PyvtkPChacoReader_Methods,
    "vtkPChacoReader",
 &PyvtkPChacoReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPChacoReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkChacoReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPChacoReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPChacoReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPChacoReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

