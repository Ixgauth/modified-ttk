// python wrapper for vtkCompositeDataToUnstructuredGridFilter
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
#include "vtkCompositeDataToUnstructuredGridFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeDataToUnstructuredGridFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeDataToUnstructuredGridFilter_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkCompositeDataToUnstructuredGridFilter_Doc =
  "vtkCompositeDataToUnstructuredGridFilter - appends all\nvtkUnstructuredGrid leaves of the input composite dataset to a single\nvtkUnstructuredGrid.\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkCompositeDataToUnstructuredGridFilter appends all\n"
  "vtkUnstructuredGrid leaves of the input composite dataset to a single\n"
  "unstructure grid. The subtree to be combined can be chosen using the\n"
  "SubTreeCompositeIndex. If the SubTreeCompositeIndex is a leaf node,\n"
  "then no appending is required.\n\n";


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeDataToUnstructuredGridFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataToUnstructuredGridFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeDataToUnstructuredGridFilter *tempr = vtkCompositeDataToUnstructuredGridFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataToUnstructuredGridFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataToUnstructuredGridFilter::NewInstance());

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
PyvtkCompositeDataToUnstructuredGridFilter_SetSubTreeCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubTreeCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubTreeCompositeIndex(temp0);
    }
    else
    {
      op->vtkCompositeDataToUnstructuredGridFilter::SetSubTreeCompositeIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_GetSubTreeCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubTreeCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSubTreeCompositeIndex() :
      op->vtkCompositeDataToUnstructuredGridFilter::GetSubTreeCompositeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergePoints(temp0);
    }
    else
    {
      op->vtkCompositeDataToUnstructuredGridFilter::SetMergePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtkCompositeDataToUnstructuredGridFilter::GetMergePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOn();
    }
    else
    {
      op->vtkCompositeDataToUnstructuredGridFilter::MergePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataToUnstructuredGridFilter_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataToUnstructuredGridFilter *op = static_cast<vtkCompositeDataToUnstructuredGridFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOff();
    }
    else
    {
      op->vtkCompositeDataToUnstructuredGridFilter::MergePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataToUnstructuredGridFilter_Methods[] = {
  {"IsTypeOf", PyvtkCompositeDataToUnstructuredGridFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeDataToUnstructuredGridFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeDataToUnstructuredGridFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkCompositeDataToUnstructuredGridFilter\nC++: static vtkCompositeDataToUnstructuredGridFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeDataToUnstructuredGridFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeDataToUnstructuredGridFilter\nC++: vtkCompositeDataToUnstructuredGridFilter *NewInstance()\n\n"},
  {"SetSubTreeCompositeIndex", PyvtkCompositeDataToUnstructuredGridFilter_SetSubTreeCompositeIndex, METH_VARARGS,
   "V.SetSubTreeCompositeIndex(int)\nC++: virtual void SetSubTreeCompositeIndex(unsigned int _arg)\n\nGet/Set the composite index of the subtree to be merged. By\ndefault set to 0 i.e. root, hence entire input composite dataset\nis merged.\n"},
  {"GetSubTreeCompositeIndex", PyvtkCompositeDataToUnstructuredGridFilter_GetSubTreeCompositeIndex, METH_VARARGS,
   "V.GetSubTreeCompositeIndex() -> int\nC++: virtual unsigned int GetSubTreeCompositeIndex()\n\nGet/Set the composite index of the subtree to be merged. By\ndefault set to 0 i.e. root, hence entire input composite dataset\nis merged.\n"},
  {"SetMergePoints", PyvtkCompositeDataToUnstructuredGridFilter_SetMergePoints, METH_VARARGS,
   "V.SetMergePoints(bool)\nC++: virtual void SetMergePoints(bool _arg)\n\nTurn on/off merging of coincidental points.  Frontend to\nvtkAppendFilter::MergePoints. Default is on.\n"},
  {"GetMergePoints", PyvtkCompositeDataToUnstructuredGridFilter_GetMergePoints, METH_VARARGS,
   "V.GetMergePoints() -> bool\nC++: virtual bool GetMergePoints()\n\nTurn on/off merging of coincidental points.  Frontend to\nvtkAppendFilter::MergePoints. Default is on.\n"},
  {"MergePointsOn", PyvtkCompositeDataToUnstructuredGridFilter_MergePointsOn, METH_VARARGS,
   "V.MergePointsOn()\nC++: virtual void MergePointsOn()\n\nTurn on/off merging of coincidental points.  Frontend to\nvtkAppendFilter::MergePoints. Default is on.\n"},
  {"MergePointsOff", PyvtkCompositeDataToUnstructuredGridFilter_MergePointsOff, METH_VARARGS,
   "V.MergePointsOff()\nC++: virtual void MergePointsOff()\n\nTurn on/off merging of coincidental points.  Frontend to\nvtkAppendFilter::MergePoints. Default is on.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeDataToUnstructuredGridFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkCompositeDataToUnstructuredGridFilter", // tp_name
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
  PyvtkCompositeDataToUnstructuredGridFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeDataToUnstructuredGridFilter_StaticNew()
{
  return vtkCompositeDataToUnstructuredGridFilter::New();
}

PyObject *PyvtkCompositeDataToUnstructuredGridFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeDataToUnstructuredGridFilter_Type, PyvtkCompositeDataToUnstructuredGridFilter_Methods,
    "vtkCompositeDataToUnstructuredGridFilter",
 &PyvtkCompositeDataToUnstructuredGridFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeDataToUnstructuredGridFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeDataToUnstructuredGridFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeDataToUnstructuredGridFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeDataToUnstructuredGridFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

