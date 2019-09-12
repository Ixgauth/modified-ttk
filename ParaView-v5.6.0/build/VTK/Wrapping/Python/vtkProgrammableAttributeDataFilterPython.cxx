// python wrapper for vtkProgrammableAttributeDataFilter
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
#include "vtkProgrammableAttributeDataFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProgrammableAttributeDataFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProgrammableAttributeDataFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkProgrammableAttributeDataFilter_Doc =
  "vtkProgrammableAttributeDataFilter - manipulate attribute (cell and\npoint) data via a user-specified function\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkProgrammableAttributeDataFilter is a filter that allows you to\n"
  "write a custom procedure to manipulate attribute data - either point\n"
  "or cell data. For example, you could generate scalars based on a\n"
  "complex formula; convert vectors to normals; compute scalar values as\n"
  "a function of vectors, texture coords, and/or any other point data\n"
  "attribute; and so on. The filter takes multiple inputs (input plus an\n"
  "auxiliary input list), so you can write procedures that combine\n"
  "several dataset point attributes. Note that the output of the filter\n"
  "is the same type (topology/geometry) as the input.\n\n"
  "The filter works as follows. It operates like any other filter (i.e.,\n"
  "checking and managing modified and execution times, processing\n"
  "Update() and Execute() methods, managing release of data, etc.), but\n"
  "the difference is that the Execute() method simply invokes a\n"
  "user-specified function with an optional (void *) argument (typically\n"
  "the \"this\" pointer in C++). It is also possible to specify a function\n"
  "to delete the argument via ExecuteMethodArgDelete().\n\n"
  "To use the filter, you write a procedure to process the input\n"
  "datasets, process the data, and generate output data. Typically, this\n"
  "means grabbing the input point or cell data (using GetInput() and\n"
  "maybe GetInputList()), operating on it (creating new point and cell\n"
  "attributes such as scalars, vectors, etc.), and then setting the\n"
  "point and/or cell attributes in the output dataset (you'll need to\n"
  "use GetOutput() to access the output). (Note: besides C++, it is\n"
  "possible to do the same thing in Java or other languages that wrap\n"
  "the C++ core.) Remember, proper filter protocol requires that you\n"
  "don't modify the input data - you create new output data from the\n"
  "input.\n\n"
  "@warning\n"
  "This filter operates on any combination of the filter input plus a\n"
  "list of additional inputs (at a minimum you must set the filter input\n"
  "via SetInput()).  It is up to you check whether the input is valid,\n"
  "and to insure that the output is valid. Also, you have to write the\n"
  "control structure for the traversal and operation on the point and\n"
  "cell attribute data.\n\n"
  "@warning\n"
  "By default the output point and cell data will be copied through from\n"
  "the input point data (using reference counting).  You can control\n"
  "this using the output's CopyAllOff() flag, or by using individual\n"
  "flags for each point data field (i.e., scalars, vectors, etc.)\n\n"
  "@warning\n"
  "The output of this filter is the abstract type vtkDataSet, even if\n"
  "your input is a concrete type like vtkPolyData. Thus you may need to\n"
  "use vtkCastToConcrete to obtain the output as a particular concrete\n"
  "type, or one of the special methods of the superclass (e.g.,\n"
  "vtkDataSetAlgorithm::GetPolyDataOutput) to retrieve output of the\n"
  "correct type.\n\n"
  "@warning\n"
  "The filter correctly manages modified time and network execution in\n"
  "most cases. However, if you change the definition of the filter\n"
  "function, you'll want to send a manual Modified() method to the\n"
  "filter to force it to reexecute.\n\n";


static PyObject *
PyvtkProgrammableAttributeDataFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProgrammableAttributeDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgrammableAttributeDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProgrammableAttributeDataFilter *tempr = vtkProgrammableAttributeDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgrammableAttributeDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgrammableAttributeDataFilter::NewInstance());

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
PyvtkProgrammableAttributeDataFilter_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->AddInput(temp0);
    }
    else
    {
      op->vtkProgrammableAttributeDataFilter::AddInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_RemoveInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->RemoveInput(temp0);
    }
    else
    {
      op->vtkProgrammableAttributeDataFilter::RemoveInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_GetInputList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetCollection *tempr = (ap.IsBound() ?
      op->GetInputList() :
      op->vtkProgrammableAttributeDataFilter::GetInputList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableAttributeDataFilter_SetExecuteMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecuteMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableAttributeDataFilter *op = static_cast<vtkProgrammableAttributeDataFilter *>(vp);

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
      op->vtkProgrammableAttributeDataFilter::SetExecuteMethod(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->vtkProgrammableAttributeDataFilter::SetExecuteMethodArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProgrammableAttributeDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkProgrammableAttributeDataFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProgrammableAttributeDataFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProgrammableAttributeDataFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkProgrammableAttributeDataFilter\nC++: static vtkProgrammableAttributeDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProgrammableAttributeDataFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProgrammableAttributeDataFilter\nC++: vtkProgrammableAttributeDataFilter *NewInstance()\n\n"},
  {"AddInput", PyvtkProgrammableAttributeDataFilter_AddInput, METH_VARARGS,
   "V.AddInput(vtkDataSet)\nC++: void AddInput(vtkDataSet *in)\n\nAdd a dataset to the list of data to process.\n"},
  {"RemoveInput", PyvtkProgrammableAttributeDataFilter_RemoveInput, METH_VARARGS,
   "V.RemoveInput(vtkDataSet)\nC++: void RemoveInput(vtkDataSet *in)\n\nRemove a dataset from the list of data to process.\n"},
  {"GetInputList", PyvtkProgrammableAttributeDataFilter_GetInputList, METH_VARARGS,
   "V.GetInputList() -> vtkDataSetCollection\nC++: vtkDataSetCollection *GetInputList()\n\nReturn the list of inputs.\n"},
  {"SetExecuteMethod", PyvtkProgrammableAttributeDataFilter_SetExecuteMethod, METH_VARARGS,
   "V.SetExecuteMethod(function)\nC++: void SetExecuteMethod(void (*f)(void *), void *arg)\n\nSpecify the function to use to operate on the point attribute\ndata. Note that the function takes a single (void *) argument.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProgrammableAttributeDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersProgrammablePython.vtkProgrammableAttributeDataFilter", // tp_name
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
  PyvtkProgrammableAttributeDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProgrammableAttributeDataFilter_StaticNew()
{
  return vtkProgrammableAttributeDataFilter::New();
}

PyObject *PyvtkProgrammableAttributeDataFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProgrammableAttributeDataFilter_Type, PyvtkProgrammableAttributeDataFilter_Methods,
    "vtkProgrammableAttributeDataFilter",
 &PyvtkProgrammableAttributeDataFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkProgrammableAttributeDataFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProgrammableAttributeDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProgrammableAttributeDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProgrammableAttributeDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

