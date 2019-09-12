// python wrapper for vtkProgrammableFilter
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
#include "vtkProgrammableFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProgrammableFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProgrammableFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkProgrammableFilter_Doc =
  "vtkProgrammableFilter - a user-programmable filter\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkProgrammableFilter is a filter that can be programmed by the user.\n"
  " To use the filter you define a function that retrieves input of the\n"
  "correct type, creates data, and then manipulates the output of the\n"
  "filter.  Using this filter avoids the need for subclassing - and the\n"
  "function can be defined in an interpreter wrapper language such as\n"
  "Java.\n\n"
  "The trickiest part of using this filter is that the input and output\n"
  "methods are unusual and cannot be compile-time type checked. Instead,\n"
  "as a user of this filter it is your responsibility to set and get the\n"
  "correct input and output types.\n\n"
  "@warning\n"
  "The filter correctly manages modified time and network execution in\n"
  "most cases. However, if you change the definition of the filter\n"
  "function, you'll want to send a manual Modified() method to the\n"
  "filter to force it to reexecute.\n\n"
  "@sa\n"
  "vtkProgrammablePointDataFilter vtkProgrammableSource\n\n";


static PyObject *
PyvtkProgrammableFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProgrammableFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgrammableFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProgrammableFilter *tempr = vtkProgrammableFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgrammableFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgrammableFilter::NewInstance());

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
PyvtkProgrammableFilter_SetExecuteMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecuteMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

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
      op->vtkProgrammableFilter::SetExecuteMethod(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->vtkProgrammableFilter::SetExecuteMethodArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetPolyDataInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataInput() :
      op->vtkProgrammableFilter::GetPolyDataInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetStructuredPointsInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetStructuredPointsInput() :
      op->vtkProgrammableFilter::GetStructuredPointsInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetStructuredGridInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetStructuredGridInput() :
      op->vtkProgrammableFilter::GetStructuredGridInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetUnstructuredGridInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridInput() :
      op->vtkProgrammableFilter::GetUnstructuredGridInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetRectilinearGridInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetRectilinearGridInput() :
      op->vtkProgrammableFilter::GetRectilinearGridInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetGraphInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraphInput() :
      op->vtkProgrammableFilter::GetGraphInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetMoleculeInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoleculeInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->GetMoleculeInput() :
      op->vtkProgrammableFilter::GetMoleculeInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetTableInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetTableInput() :
      op->vtkProgrammableFilter::GetTableInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_SetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyArrays(temp0);
    }
    else
    {
      op->vtkProgrammableFilter::SetCopyArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCopyArrays() :
      op->vtkProgrammableFilter::GetCopyArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_CopyArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyArraysOn();
    }
    else
    {
      op->vtkProgrammableFilter::CopyArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_CopyArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyArraysOff();
    }
    else
    {
      op->vtkProgrammableFilter::CopyArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProgrammableFilter_Methods[] = {
  {"IsTypeOf", PyvtkProgrammableFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProgrammableFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProgrammableFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProgrammableFilter\nC++: static vtkProgrammableFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProgrammableFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProgrammableFilter\nC++: vtkProgrammableFilter *NewInstance()\n\n"},
  {"SetExecuteMethod", PyvtkProgrammableFilter_SetExecuteMethod, METH_VARARGS,
   "V.SetExecuteMethod(function)\nC++: void SetExecuteMethod(void (*f)(void *), void *arg)\n\nSpecify the function to use to operate on the point attribute\ndata. Note that the function takes a single (void *) argument.\n"},
  {"GetPolyDataInput", PyvtkProgrammableFilter_GetPolyDataInput, METH_VARARGS,
   "V.GetPolyDataInput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataInput()\n\nGet the input as a concrete type. This method is typically used\nby the writer of the filter function to get the input as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the input\ndata.\n"},
  {"GetStructuredPointsInput", PyvtkProgrammableFilter_GetStructuredPointsInput, METH_VARARGS,
   "V.GetStructuredPointsInput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsInput()\n\nGet the input as a concrete type. This method is typically used\nby the writer of the filter function to get the input as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the input\ndata.\n"},
  {"GetStructuredGridInput", PyvtkProgrammableFilter_GetStructuredGridInput, METH_VARARGS,
   "V.GetStructuredGridInput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridInput()\n\nGet the input as a concrete type. This method is typically used\nby the writer of the filter function to get the input as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the input\ndata.\n"},
  {"GetUnstructuredGridInput", PyvtkProgrammableFilter_GetUnstructuredGridInput, METH_VARARGS,
   "V.GetUnstructuredGridInput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridInput()\n\nGet the input as a concrete type. This method is typically used\nby the writer of the filter function to get the input as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the input\ndata.\n"},
  {"GetRectilinearGridInput", PyvtkProgrammableFilter_GetRectilinearGridInput, METH_VARARGS,
   "V.GetRectilinearGridInput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridInput()\n\nGet the input as a concrete type. This method is typically used\nby the writer of the filter function to get the input as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the input\ndata.\n"},
  {"GetGraphInput", PyvtkProgrammableFilter_GetGraphInput, METH_VARARGS,
   "V.GetGraphInput() -> vtkGraph\nC++: vtkGraph *GetGraphInput()\n\nGet the input as a concrete type. This method is typically used\nby the writer of the filter function to get the input as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the input\ndata.\n"},
  {"GetMoleculeInput", PyvtkProgrammableFilter_GetMoleculeInput, METH_VARARGS,
   "V.GetMoleculeInput() -> vtkMolecule\nC++: vtkMolecule *GetMoleculeInput()\n\nGet the input as a concrete type. This method is typically used\nby the writer of the filter function to get the input as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the input\ndata.\n"},
  {"GetTableInput", PyvtkProgrammableFilter_GetTableInput, METH_VARARGS,
   "V.GetTableInput() -> vtkTable\nC++: vtkTable *GetTableInput()\n\nGet the input as a concrete type. This method is typically used\nby the writer of the filter function to get the input as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the input\ndata.\n"},
  {"SetCopyArrays", PyvtkProgrammableFilter_SetCopyArrays, METH_VARARGS,
   "V.SetCopyArrays(bool)\nC++: virtual void SetCopyArrays(bool _arg)\n\nWhen CopyArrays is true, all arrays are copied to the output iff\ninput and output are of the same type. False by default.\n"},
  {"GetCopyArrays", PyvtkProgrammableFilter_GetCopyArrays, METH_VARARGS,
   "V.GetCopyArrays() -> bool\nC++: virtual bool GetCopyArrays()\n\nWhen CopyArrays is true, all arrays are copied to the output iff\ninput and output are of the same type. False by default.\n"},
  {"CopyArraysOn", PyvtkProgrammableFilter_CopyArraysOn, METH_VARARGS,
   "V.CopyArraysOn()\nC++: virtual void CopyArraysOn()\n\nWhen CopyArrays is true, all arrays are copied to the output iff\ninput and output are of the same type. False by default.\n"},
  {"CopyArraysOff", PyvtkProgrammableFilter_CopyArraysOff, METH_VARARGS,
   "V.CopyArraysOff()\nC++: virtual void CopyArraysOff()\n\nWhen CopyArrays is true, all arrays are copied to the output iff\ninput and output are of the same type. False by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProgrammableFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersProgrammablePython.vtkProgrammableFilter", // tp_name
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
  PyvtkProgrammableFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProgrammableFilter_StaticNew()
{
  return vtkProgrammableFilter::New();
}

PyObject *PyvtkProgrammableFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProgrammableFilter_Type, PyvtkProgrammableFilter_Methods,
    "vtkProgrammableFilter",
 &PyvtkProgrammableFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkProgrammableFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProgrammableFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProgrammableFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProgrammableFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

