// python wrapper for vtkCompositeDataProbeFilter
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
#include "vtkCompositeDataProbeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeDataProbeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeDataProbeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkProbeFilter_ClassNew
extern "C" { PyObject *PyvtkProbeFilter_ClassNew(); }
#define DECLARED_PyvtkProbeFilter_ClassNew
#endif

static const char *PyvtkCompositeDataProbeFilter_Doc =
  "vtkCompositeDataProbeFilter - subclass of vtkProbeFilter which\nsupports composite datasets in the input.\n\n"
  "Superclass: vtkProbeFilter\n\n"
  "vtkCompositeDataProbeFilter supports probing into multi-group\n"
  "datasets. It sequentially probes through each concrete dataset within\n"
  "the composite probing at only those locations at which there were no\n"
  "hits when probing earlier datasets. For Hierarchical datasets, this\n"
  "traversal through leaf datasets is done in reverse order of levels\n"
  "i.e. highest level first.\n\n"
  "When dealing with composite datasets, partial arrays are common i.e.\n"
  "data-arrays that are not available in all of the blocks. By default,\n"
  "this filter only passes those point and cell data-arrays that are\n"
  "available in all the blocks i.e. partial array are removed. When\n"
  "PassPartialArrays is turned on, this behavior is changed to take a\n"
  "union of all arrays present thus partial arrays are passed as well.\n"
  "However, for composite dataset input, this filter still produces a\n"
  "non-composite output. For all those locations in a block of where a\n"
  "particular data array is missing, this filter uses vtkMath::Nan() for\n"
  "double and float arrays, while 0 for all other types of arrays i.e\n"
  "int, char etc.\n\n";


static PyObject *
PyvtkCompositeDataProbeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeDataProbeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataProbeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeDataProbeFilter *tempr = vtkCompositeDataProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataProbeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataProbeFilter::NewInstance());

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
PyvtkCompositeDataProbeFilter_SetPassPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPartialArrays(temp0);
    }
    else
    {
      op->vtkCompositeDataProbeFilter::SetPassPartialArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_GetPassPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassPartialArrays() :
      op->vtkCompositeDataProbeFilter::GetPassPartialArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_PassPartialArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPartialArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPartialArraysOn();
    }
    else
    {
      op->vtkCompositeDataProbeFilter::PassPartialArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataProbeFilter_PassPartialArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPartialArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataProbeFilter *op = static_cast<vtkCompositeDataProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPartialArraysOff();
    }
    else
    {
      op->vtkCompositeDataProbeFilter::PassPartialArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataProbeFilter_Methods[] = {
  {"IsTypeOf", PyvtkCompositeDataProbeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeDataProbeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeDataProbeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeDataProbeFilter\nC++: static vtkCompositeDataProbeFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeDataProbeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeDataProbeFilter\nC++: vtkCompositeDataProbeFilter *NewInstance()\n\n"},
  {"SetPassPartialArrays", PyvtkCompositeDataProbeFilter_SetPassPartialArrays, METH_VARARGS,
   "V.SetPassPartialArrays(bool)\nC++: virtual void SetPassPartialArrays(bool _arg)\n\nWhen dealing with composite datasets, partial arrays are common\ni.e. data-arrays that are not available in all of the blocks. By\ndefault, this filter only passes those point and cell data-arrays\nthat are available in all the blocks i.e. partial array are\nremoved.  When PassPartialArrays is turned on, this behavior is\nchanged to take a union of all arrays present thus partial arrays\nare passed as well. However, for composite dataset input, this\nfilter still produces a non-composite output. For all those\nlocations in a block of where a particular data array is missing,\nthis filter uses vtkMath::Nan() for double and float arrays,\nwhile 0 for all other types of arrays i.e int, char etc.\n"},
  {"GetPassPartialArrays", PyvtkCompositeDataProbeFilter_GetPassPartialArrays, METH_VARARGS,
   "V.GetPassPartialArrays() -> bool\nC++: virtual bool GetPassPartialArrays()\n\nWhen dealing with composite datasets, partial arrays are common\ni.e. data-arrays that are not available in all of the blocks. By\ndefault, this filter only passes those point and cell data-arrays\nthat are available in all the blocks i.e. partial array are\nremoved.  When PassPartialArrays is turned on, this behavior is\nchanged to take a union of all arrays present thus partial arrays\nare passed as well. However, for composite dataset input, this\nfilter still produces a non-composite output. For all those\nlocations in a block of where a particular data array is missing,\nthis filter uses vtkMath::Nan() for double and float arrays,\nwhile 0 for all other types of arrays i.e int, char etc.\n"},
  {"PassPartialArraysOn", PyvtkCompositeDataProbeFilter_PassPartialArraysOn, METH_VARARGS,
   "V.PassPartialArraysOn()\nC++: virtual void PassPartialArraysOn()\n\nWhen dealing with composite datasets, partial arrays are common\ni.e. data-arrays that are not available in all of the blocks. By\ndefault, this filter only passes those point and cell data-arrays\nthat are available in all the blocks i.e. partial array are\nremoved.  When PassPartialArrays is turned on, this behavior is\nchanged to take a union of all arrays present thus partial arrays\nare passed as well. However, for composite dataset input, this\nfilter still produces a non-composite output. For all those\nlocations in a block of where a particular data array is missing,\nthis filter uses vtkMath::Nan() for double and float arrays,\nwhile 0 for all other types of arrays i.e int, char etc.\n"},
  {"PassPartialArraysOff", PyvtkCompositeDataProbeFilter_PassPartialArraysOff, METH_VARARGS,
   "V.PassPartialArraysOff()\nC++: virtual void PassPartialArraysOff()\n\nWhen dealing with composite datasets, partial arrays are common\ni.e. data-arrays that are not available in all of the blocks. By\ndefault, this filter only passes those point and cell data-arrays\nthat are available in all the blocks i.e. partial array are\nremoved.  When PassPartialArrays is turned on, this behavior is\nchanged to take a union of all arrays present thus partial arrays\nare passed as well. However, for composite dataset input, this\nfilter still produces a non-composite output. For all those\nlocations in a block of where a particular data array is missing,\nthis filter uses vtkMath::Nan() for double and float arrays,\nwhile 0 for all other types of arrays i.e int, char etc.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeDataProbeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkCompositeDataProbeFilter", // tp_name
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
  PyvtkCompositeDataProbeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeDataProbeFilter_StaticNew()
{
  return vtkCompositeDataProbeFilter::New();
}

PyObject *PyvtkCompositeDataProbeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeDataProbeFilter_Type, PyvtkCompositeDataProbeFilter_Methods,
    "vtkCompositeDataProbeFilter",
 &PyvtkCompositeDataProbeFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeDataProbeFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProbeFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeDataProbeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeDataProbeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeDataProbeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

