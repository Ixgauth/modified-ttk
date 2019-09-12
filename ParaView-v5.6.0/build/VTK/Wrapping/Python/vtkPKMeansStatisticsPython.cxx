// python wrapper for vtkPKMeansStatistics
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
#include "vtkPKMeansStatistics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPKMeansStatistics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPKMeansStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkKMeansStatistics_ClassNew
extern "C" { PyObject *PyvtkKMeansStatistics_ClassNew(); }
#define DECLARED_PyvtkKMeansStatistics_ClassNew
#endif

static const char *PyvtkPKMeansStatistics_Doc =
  "vtkPKMeansStatistics - no description provided.\n\n"
  "Superclass: vtkKMeansStatistics\n\n"
;


static PyObject *
PyvtkPKMeansStatistics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPKMeansStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPKMeansStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPKMeansStatistics *tempr = vtkPKMeansStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPKMeansStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPKMeansStatistics::NewInstance());

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
PyvtkPKMeansStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

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
      op->vtkPKMeansStatistics::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPKMeansStatistics::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_UpdateClusterCenters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateClusterCenters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  vtkTable *temp0 = nullptr;
  vtkTable *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  vtkIdTypeArray *temp3 = nullptr;
  vtkDoubleArray *temp4 = nullptr;
  vtkIdTypeArray *temp5 = nullptr;
  vtkIdTypeArray *temp6 = nullptr;
  vtkIntArray *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp4, "vtkDoubleArray") &&
      ap.GetVTKObject(temp5, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp6, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp7, "vtkIntArray"))
  {
    if (ap.IsBound())
    {
      op->UpdateClusterCenters(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkPKMeansStatistics::UpdateClusterCenters(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_GetTotalNumberOfObservations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfObservations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfObservations(temp0) :
      op->vtkPKMeansStatistics::GetTotalNumberOfObservations(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKMeansStatistics_CreateInitialClusterCenters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateInitialClusterCenters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKMeansStatistics *op = static_cast<vtkPKMeansStatistics *>(vp);

  vtkIdType temp0;
  vtkIdTypeArray *temp1 = nullptr;
  vtkTable *temp2 = nullptr;
  vtkTable *temp3 = nullptr;
  vtkTable *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkTable") &&
      ap.GetVTKObject(temp3, "vtkTable") &&
      ap.GetVTKObject(temp4, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->CreateInitialClusterCenters(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPKMeansStatistics::CreateInitialClusterCenters(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPKMeansStatistics_Methods[] = {
  {"IsTypeOf", PyvtkPKMeansStatistics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPKMeansStatistics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPKMeansStatistics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPKMeansStatistics\nC++: static vtkPKMeansStatistics *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPKMeansStatistics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPKMeansStatistics\nC++: vtkPKMeansStatistics *NewInstance()\n\n"},
  {"SetController", PyvtkPKMeansStatistics_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {"GetController", PyvtkPKMeansStatistics_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {"UpdateClusterCenters", PyvtkPKMeansStatistics_UpdateClusterCenters, METH_VARARGS,
   "V.UpdateClusterCenters(vtkTable, vtkTable, vtkIdTypeArray,\n    vtkIdTypeArray, vtkDoubleArray, vtkIdTypeArray,\n    vtkIdTypeArray, vtkIntArray)\nC++: void UpdateClusterCenters(vtkTable *newClusterElements,\n    vtkTable *curClusterElements,\n    vtkIdTypeArray *numMembershipChanges,\n    vtkIdTypeArray *numElementsInCluster, vtkDoubleArray *error,\n    vtkIdTypeArray *startRunID, vtkIdTypeArray *endRunID,\n    vtkIntArray *computeRun) override;\n\nSubroutine to update new cluster centers from the old centers.\n"},
  {"GetTotalNumberOfObservations", PyvtkPKMeansStatistics_GetTotalNumberOfObservations, METH_VARARGS,
   "V.GetTotalNumberOfObservations(int) -> int\nC++: vtkIdType GetTotalNumberOfObservations(\n    vtkIdType numObservations) override;\n\nSubroutine to get the total number of data objects.\n"},
  {"CreateInitialClusterCenters", PyvtkPKMeansStatistics_CreateInitialClusterCenters, METH_VARARGS,
   "V.CreateInitialClusterCenters(int, vtkIdTypeArray, vtkTable,\n    vtkTable, vtkTable)\nC++: void CreateInitialClusterCenters(vtkIdType numToAllocate,\n    vtkIdTypeArray *numberOfClusters, vtkTable *inData,\n    vtkTable *curClusterElements, vtkTable *newClusterElements)\n    override;\n\nSubroutine to initialize cluster centerss if not provided by the\nuser.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPKMeansStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelStatisticsPython.vtkPKMeansStatistics", // tp_name
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
  PyvtkPKMeansStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPKMeansStatistics_StaticNew()
{
  return vtkPKMeansStatistics::New();
}

PyObject *PyvtkPKMeansStatistics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPKMeansStatistics_Type, PyvtkPKMeansStatistics_Methods,
    "vtkPKMeansStatistics",
 &PyvtkPKMeansStatistics_StaticNew);

  PyTypeObject *pytype = &PyvtkPKMeansStatistics_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkKMeansStatistics_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPKMeansStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPKMeansStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPKMeansStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

