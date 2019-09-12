// python wrapper for vtkExtractDataOverTime
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
#include "vtkExtractDataOverTime.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractDataOverTime(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractDataOverTime_ClassNew(); }

#ifndef DECLARED_PyvtkPointSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPointSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPointSetAlgorithm_ClassNew
#endif

static const char *PyvtkExtractDataOverTime_Doc =
  "vtkExtractDataOverTime - extract point data from a time sequence for\na specified point id.\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "This filter extracts the point data from a time sequence and\n"
  "specified index and creates an output of the same type as the input\n"
  "but with Points containing \"number of time steps\" points; the point\n"
  "and PointData corresponding to the PointIndex are extracted at each\n"
  "time step and added to the output.  A PointData array is added called\n"
  "\"Time\" (or \"TimeData\" if there is already an array called \"Time\"),\n"
  "which is the time at each index.\n\n";


static PyObject *
PyvtkExtractDataOverTime_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractDataOverTime::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractDataOverTime::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractDataOverTime *tempr = vtkExtractDataOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractDataOverTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractDataOverTime::NewInstance());

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
PyvtkExtractDataOverTime_SetPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIndex(temp0);
    }
    else
    {
      op->vtkExtractDataOverTime::SetPointIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_GetPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointIndex() :
      op->vtkExtractDataOverTime::GetPointIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkExtractDataOverTime::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractDataOverTime_Methods[] = {
  {"IsTypeOf", PyvtkExtractDataOverTime_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractDataOverTime_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractDataOverTime_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractDataOverTime\nC++: static vtkExtractDataOverTime *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractDataOverTime_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractDataOverTime\nC++: vtkExtractDataOverTime *NewInstance()\n\n"},
  {"SetPointIndex", PyvtkExtractDataOverTime_SetPointIndex, METH_VARARGS,
   "V.SetPointIndex(int)\nC++: virtual void SetPointIndex(int _arg)\n\nIndex of point to extract at each time step\n"},
  {"GetPointIndex", PyvtkExtractDataOverTime_GetPointIndex, METH_VARARGS,
   "V.GetPointIndex() -> int\nC++: virtual int GetPointIndex()\n\nIndex of point to extract at each time step\n"},
  {"GetNumberOfTimeSteps", PyvtkExtractDataOverTime_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: virtual int GetNumberOfTimeSteps()\n\nGet the number of time steps\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractDataOverTime_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractDataOverTime", // tp_name
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
  PyvtkExtractDataOverTime_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractDataOverTime_StaticNew()
{
  return vtkExtractDataOverTime::New();
}

PyObject *PyvtkExtractDataOverTime_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractDataOverTime_Type, PyvtkExtractDataOverTime_Methods,
    "vtkExtractDataOverTime",
 &PyvtkExtractDataOverTime_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractDataOverTime_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractDataOverTime(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractDataOverTime_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractDataOverTime", o) != 0)
  {
    Py_DECREF(o);
  }

}

