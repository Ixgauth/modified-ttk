// python wrapper for vtkProgrammableDataObjectSource
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
#include "vtkProgrammableDataObjectSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProgrammableDataObjectSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProgrammableDataObjectSource_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkProgrammableDataObjectSource_Doc =
  "vtkProgrammableDataObjectSource - generate source data object via a\nuser-specified function\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkProgrammableDataObjectSource is a source object that is\n"
  "programmable by the user. The output of the filter is a data object\n"
  "(vtkDataObject) which represents data via an instance of field data.\n"
  "To use this object, you must specify a function that creates the\n"
  "output.\n\n"
  "Example use of this filter includes reading tabular data and encoding\n"
  "it as vtkFieldData. You can then use filters like\n"
  "vtkDataObjectToDataSetFilter to convert the data object to a dataset\n"
  "and then visualize it.  Another important use of this class is that\n"
  "it allows users of interpreters (e.g., Java) the ability to write\n"
  "source objects without having to recompile C++ code or generate new\n"
  "libraries.\n\n"
  "@sa\n"
  "vtkProgrammableFilter vtkProgrammableAttributeDataFilter\n"
  "vtkProgrammableSource vtkDataObjectToDataSetFilter\n\n";


static PyObject *
PyvtkProgrammableDataObjectSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProgrammableDataObjectSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableDataObjectSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableDataObjectSource *op = static_cast<vtkProgrammableDataObjectSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgrammableDataObjectSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableDataObjectSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProgrammableDataObjectSource *tempr = vtkProgrammableDataObjectSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableDataObjectSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableDataObjectSource *op = static_cast<vtkProgrammableDataObjectSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgrammableDataObjectSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgrammableDataObjectSource::NewInstance());

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
PyvtkProgrammableDataObjectSource_SetExecuteMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecuteMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableDataObjectSource *op = static_cast<vtkProgrammableDataObjectSource *>(vp);

  PyObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExecuteMethod(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->SetExecuteMethodArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }
    else
    {
      op->vtkProgrammableDataObjectSource::SetExecuteMethod(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->vtkProgrammableDataObjectSource::SetExecuteMethodArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProgrammableDataObjectSource_Methods[] = {
  {"IsTypeOf", PyvtkProgrammableDataObjectSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProgrammableDataObjectSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProgrammableDataObjectSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProgrammableDataObjectSource\nC++: static vtkProgrammableDataObjectSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProgrammableDataObjectSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProgrammableDataObjectSource\nC++: vtkProgrammableDataObjectSource *NewInstance()\n\n"},
  {"SetExecuteMethod", PyvtkProgrammableDataObjectSource_SetExecuteMethod, METH_VARARGS,
   "V.SetExecuteMethod(function)\nC++: void SetExecuteMethod(void (*f)(void *), void *arg)\n\nSpecify the function to use to generate the output data object.\nNote that the function takes a single (void *) argument.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProgrammableDataObjectSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkProgrammableDataObjectSource", // tp_name
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
  PyvtkProgrammableDataObjectSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProgrammableDataObjectSource_StaticNew()
{
  return vtkProgrammableDataObjectSource::New();
}

PyObject *PyvtkProgrammableDataObjectSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProgrammableDataObjectSource_Type, PyvtkProgrammableDataObjectSource_Methods,
    "vtkProgrammableDataObjectSource",
 &PyvtkProgrammableDataObjectSource_StaticNew);

  PyTypeObject *pytype = &PyvtkProgrammableDataObjectSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProgrammableDataObjectSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProgrammableDataObjectSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProgrammableDataObjectSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

