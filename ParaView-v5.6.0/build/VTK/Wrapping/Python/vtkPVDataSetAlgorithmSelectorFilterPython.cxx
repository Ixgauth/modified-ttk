// python wrapper for vtkPVDataSetAlgorithmSelectorFilter
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
#include "vtkInformationVector.h"
#include "vtkPVDataSetAlgorithmSelectorFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVDataSetAlgorithmSelectorFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVDataSetAlgorithmSelectorFilter_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkPVDataSetAlgorithmSelectorFilter_Doc =
  "vtkPVDataSetAlgorithmSelectorFilter - is a generic vtkAlgorithm that\nallow the user to register several vtkAlgorithm to it and be able to\nswitch the active one on the fly.\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "The idea behind that filter is to merge the usage of any number of\n"
  "existing vtk filter and allow to easily switch from one\n"
  "implementation to another without changing anything in your pipeline.\n\n";


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVDataSetAlgorithmSelectorFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVDataSetAlgorithmSelectorFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVDataSetAlgorithmSelectorFilter *tempr = vtkPVDataSetAlgorithmSelectorFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataSetAlgorithmSelectorFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVDataSetAlgorithmSelectorFilter::NewInstance());

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
PyvtkPVDataSetAlgorithmSelectorFilter_RegisterFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    int tempr = (ap.IsBound() ?
      op->RegisterFilter(temp0) :
      op->vtkPVDataSetAlgorithmSelectorFilter::RegisterFilter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_UnRegisterFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterFilter(temp0);
    }
    else
    {
      op->vtkPVDataSetAlgorithmSelectorFilter::UnRegisterFilter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_ClearFilters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFilters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFilters();
    }
    else
    {
      op->vtkPVDataSetAlgorithmSelectorFilter::ClearFilters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_GetNumberOfFilters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFilters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFilters() :
      op->vtkPVDataSetAlgorithmSelectorFilter::GetNumberOfFilters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_GetFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetFilter(temp0) :
      op->vtkPVDataSetAlgorithmSelectorFilter::GetFilter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_GetActiveFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetActiveFilter() :
      op->vtkPVDataSetAlgorithmSelectorFilter::GetActiveFilter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_SetActiveFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->SetActiveFilter(temp0) :
      op->vtkPVDataSetAlgorithmSelectorFilter::SetActiveFilter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPVDataSetAlgorithmSelectorFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVDataSetAlgorithmSelectorFilter_ProcessRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVDataSetAlgorithmSelectorFilter *op = static_cast<vtkPVDataSetAlgorithmSelectorFilter *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  vtkInformationVector *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkInformationVector"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessRequest(temp0, temp1, temp2) :
      op->vtkPVDataSetAlgorithmSelectorFilter::ProcessRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVDataSetAlgorithmSelectorFilter_Methods[] = {
  {"IsTypeOf", PyvtkPVDataSetAlgorithmSelectorFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVDataSetAlgorithmSelectorFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVDataSetAlgorithmSelectorFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVDataSetAlgorithmSelectorFilter\nC++: static vtkPVDataSetAlgorithmSelectorFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVDataSetAlgorithmSelectorFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVDataSetAlgorithmSelectorFilter\nC++: vtkPVDataSetAlgorithmSelectorFilter *NewInstance()\n\n"},
  {"RegisterFilter", PyvtkPVDataSetAlgorithmSelectorFilter_RegisterFilter, METH_VARARGS,
   "V.RegisterFilter(vtkAlgorithm) -> int\nC++: int RegisterFilter(vtkAlgorithm *filter)\n\nRegister a new filter that can be used underneath in the\nrequestData call. The return value is the index of that\nregistered filter that should be use to activate it later on.\n(This number can became wrong in case you remove some previous\nregistered filter)\n"},
  {"UnRegisterFilter", PyvtkPVDataSetAlgorithmSelectorFilter_UnRegisterFilter, METH_VARARGS,
   "V.UnRegisterFilter(int)\nC++: void UnRegisterFilter(int index)\n\nUnRegister an existing filter that was previously registered\n"},
  {"ClearFilters", PyvtkPVDataSetAlgorithmSelectorFilter_ClearFilters, METH_VARARGS,
   "V.ClearFilters()\nC++: void ClearFilters()\n\nRemove all the registered filters.\n"},
  {"GetNumberOfFilters", PyvtkPVDataSetAlgorithmSelectorFilter_GetNumberOfFilters, METH_VARARGS,
   "V.GetNumberOfFilters() -> int\nC++: int GetNumberOfFilters()\n\nReturn the current number of registered filters\n"},
  {"GetFilter", PyvtkPVDataSetAlgorithmSelectorFilter_GetFilter, METH_VARARGS,
   "V.GetFilter(int) -> vtkAlgorithm\nC++: vtkAlgorithm *GetFilter(int index)\n\nReturn the filter that lies at the given index of the filters\nregistration queue.\n"},
  {"GetActiveFilter", PyvtkPVDataSetAlgorithmSelectorFilter_GetActiveFilter, METH_VARARGS,
   "V.GetActiveFilter() -> vtkAlgorithm\nC++: vtkAlgorithm *GetActiveFilter()\n\nReturn the current active filter if any otherwise return NULL\n"},
  {"SetActiveFilter", PyvtkPVDataSetAlgorithmSelectorFilter_SetActiveFilter, METH_VARARGS,
   "V.SetActiveFilter(int) -> vtkAlgorithm\nC++: virtual vtkAlgorithm *SetActiveFilter(int index)\n\nSet the active filter based on the given index of the filters\nregistration queue. And return the corresponding active filter.\n"},
  {"GetMTime", PyvtkPVDataSetAlgorithmSelectorFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime because we delegate to other filters to do the\nreal work\n"},
  {"ProcessRequest", PyvtkPVDataSetAlgorithmSelectorFilter_ProcessRequest, METH_VARARGS,
   "V.ProcessRequest(vtkInformation, vtkCollection,\n    vtkInformationVector) -> int\nC++: virtual int ProcessRequest(vtkInformation *request,\n    vtkCollection *inInfo, vtkInformationVector *outInfo)\n\nForward those methods to the underneath filters\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVDataSetAlgorithmSelectorFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVDataSetAlgorithmSelectorFilter", // tp_name
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
  PyvtkPVDataSetAlgorithmSelectorFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVDataSetAlgorithmSelectorFilter_StaticNew()
{
  return vtkPVDataSetAlgorithmSelectorFilter::New();
}

PyObject *PyvtkPVDataSetAlgorithmSelectorFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVDataSetAlgorithmSelectorFilter_Type, PyvtkPVDataSetAlgorithmSelectorFilter_Methods,
    "vtkPVDataSetAlgorithmSelectorFilter",
 &PyvtkPVDataSetAlgorithmSelectorFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPVDataSetAlgorithmSelectorFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVDataSetAlgorithmSelectorFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVDataSetAlgorithmSelectorFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVDataSetAlgorithmSelectorFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

