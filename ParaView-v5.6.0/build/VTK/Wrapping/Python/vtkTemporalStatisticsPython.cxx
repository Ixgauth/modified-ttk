// python wrapper for vtkTemporalStatistics
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
#include "vtkTemporalStatistics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalStatistics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTemporalStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkTemporalStatistics_Doc =
  "vtkTemporalStatistics - Compute statistics of point or cell data as\nit changes over time\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "Given an input that changes over time, vtkTemporalStatistics looks at\n"
  "the data for each time step and computes some statistical information\n"
  "of how a point or cell variable changes over time.  For example,\n"
  "vtkTemporalStatistics can compute the average value of \"pressure\"\n"
  "over time of each point.\n\n"
  "Note that this filter will require the upstream filter to be run on\n"
  "every time step that it reports that it can compute.  This may be a\n"
  "time consuming operation.\n\n"
  "vtkTemporalStatistics ignores the temporal spacing.  Each timestep\n"
  "will be weighted the same regardless of how long of an interval it is\n"
  "to the next timestep.  Thus, the average statistic may be quite\n"
  "different from an integration of the variable if the time spacing\n"
  "varies.\n\n"
  "@par Thanks: This class was originally written by Kenneth Moreland\n"
  "(kmorel@sandia.gov) from Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTemporalStatistics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalStatistics *tempr = vtkTemporalStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalStatistics::NewInstance());

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
PyvtkTemporalStatistics_GetComputeAverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeAverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeAverage() :
      op->vtkTemporalStatistics::GetComputeAverage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeAverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeAverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeAverage(temp0);
    }
    else
    {
      op->vtkTemporalStatistics::SetComputeAverage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeAverageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAverageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAverageOn();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeAverageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeAverageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAverageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAverageOff();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeAverageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetComputeMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeMinimum() :
      op->vtkTemporalStatistics::GetComputeMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeMinimum(temp0);
    }
    else
    {
      op->vtkTemporalStatistics::SetComputeMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMinimumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinimumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMinimumOn();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeMinimumOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMinimumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinimumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMinimumOff();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeMinimumOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetComputeMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeMaximum() :
      op->vtkTemporalStatistics::GetComputeMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeMaximum(temp0);
    }
    else
    {
      op->vtkTemporalStatistics::SetComputeMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMaximumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaximumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMaximumOn();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeMaximumOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMaximumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaximumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMaximumOff();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeMaximumOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetComputeStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeStandardDeviation() :
      op->vtkTemporalStatistics::GetComputeStandardDeviation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeStandardDeviation(temp0);
    }
    else
    {
      op->vtkTemporalStatistics::SetComputeStandardDeviation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeStandardDeviationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStandardDeviationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeStandardDeviationOn();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeStandardDeviationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeStandardDeviationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStandardDeviationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeStandardDeviationOff();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeStandardDeviationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalStatistics_Methods[] = {
  {"IsTypeOf", PyvtkTemporalStatistics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"IsA", PyvtkTemporalStatistics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SafeDownCast", PyvtkTemporalStatistics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTemporalStatistics\nC++: static vtkTemporalStatistics *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"NewInstance", PyvtkTemporalStatistics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTemporalStatistics\nC++: vtkTemporalStatistics *NewInstance()\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"GetComputeAverage", PyvtkTemporalStatistics_GetComputeAverage, METH_VARARGS,
   "V.GetComputeAverage() -> int\nC++: virtual vtkTypeBool GetComputeAverage()\n\nTurn on/off the computation of the average values over time.  On\nby default.  The resulting array names have \"_average\" appended\nto them.\n"},
  {"SetComputeAverage", PyvtkTemporalStatistics_SetComputeAverage, METH_VARARGS,
   "V.SetComputeAverage(int)\nC++: virtual void SetComputeAverage(vtkTypeBool _arg)\n\nTurn on/off the computation of the average values over time.  On\nby default.  The resulting array names have \"_average\" appended\nto them.\n"},
  {"ComputeAverageOn", PyvtkTemporalStatistics_ComputeAverageOn, METH_VARARGS,
   "V.ComputeAverageOn()\nC++: virtual void ComputeAverageOn()\n\nTurn on/off the computation of the average values over time.  On\nby default.  The resulting array names have \"_average\" appended\nto them.\n"},
  {"ComputeAverageOff", PyvtkTemporalStatistics_ComputeAverageOff, METH_VARARGS,
   "V.ComputeAverageOff()\nC++: virtual void ComputeAverageOff()\n\nTurn on/off the computation of the average values over time.  On\nby default.  The resulting array names have \"_average\" appended\nto them.\n"},
  {"GetComputeMinimum", PyvtkTemporalStatistics_GetComputeMinimum, METH_VARARGS,
   "V.GetComputeMinimum() -> int\nC++: virtual vtkTypeBool GetComputeMinimum()\n\nTurn on/off the computation of the minimum values over time.  On\nby default.  The resulting array names have \"_minimum\" appended\nto them.\n"},
  {"SetComputeMinimum", PyvtkTemporalStatistics_SetComputeMinimum, METH_VARARGS,
   "V.SetComputeMinimum(int)\nC++: virtual void SetComputeMinimum(vtkTypeBool _arg)\n\nTurn on/off the computation of the minimum values over time.  On\nby default.  The resulting array names have \"_minimum\" appended\nto them.\n"},
  {"ComputeMinimumOn", PyvtkTemporalStatistics_ComputeMinimumOn, METH_VARARGS,
   "V.ComputeMinimumOn()\nC++: virtual void ComputeMinimumOn()\n\nTurn on/off the computation of the minimum values over time.  On\nby default.  The resulting array names have \"_minimum\" appended\nto them.\n"},
  {"ComputeMinimumOff", PyvtkTemporalStatistics_ComputeMinimumOff, METH_VARARGS,
   "V.ComputeMinimumOff()\nC++: virtual void ComputeMinimumOff()\n\nTurn on/off the computation of the minimum values over time.  On\nby default.  The resulting array names have \"_minimum\" appended\nto them.\n"},
  {"GetComputeMaximum", PyvtkTemporalStatistics_GetComputeMaximum, METH_VARARGS,
   "V.GetComputeMaximum() -> int\nC++: virtual vtkTypeBool GetComputeMaximum()\n\nTurn on/off the computation of the maximum values over time.  On\nby default.  The resulting array names have \"_maximum\" appended\nto them.\n"},
  {"SetComputeMaximum", PyvtkTemporalStatistics_SetComputeMaximum, METH_VARARGS,
   "V.SetComputeMaximum(int)\nC++: virtual void SetComputeMaximum(vtkTypeBool _arg)\n\nTurn on/off the computation of the maximum values over time.  On\nby default.  The resulting array names have \"_maximum\" appended\nto them.\n"},
  {"ComputeMaximumOn", PyvtkTemporalStatistics_ComputeMaximumOn, METH_VARARGS,
   "V.ComputeMaximumOn()\nC++: virtual void ComputeMaximumOn()\n\nTurn on/off the computation of the maximum values over time.  On\nby default.  The resulting array names have \"_maximum\" appended\nto them.\n"},
  {"ComputeMaximumOff", PyvtkTemporalStatistics_ComputeMaximumOff, METH_VARARGS,
   "V.ComputeMaximumOff()\nC++: virtual void ComputeMaximumOff()\n\nTurn on/off the computation of the maximum values over time.  On\nby default.  The resulting array names have \"_maximum\" appended\nto them.\n"},
  {"GetComputeStandardDeviation", PyvtkTemporalStatistics_GetComputeStandardDeviation, METH_VARARGS,
   "V.GetComputeStandardDeviation() -> int\nC++: virtual vtkTypeBool GetComputeStandardDeviation()\n\n"},
  {"SetComputeStandardDeviation", PyvtkTemporalStatistics_SetComputeStandardDeviation, METH_VARARGS,
   "V.SetComputeStandardDeviation(int)\nC++: virtual void SetComputeStandardDeviation(vtkTypeBool _arg)\n\n"},
  {"ComputeStandardDeviationOn", PyvtkTemporalStatistics_ComputeStandardDeviationOn, METH_VARARGS,
   "V.ComputeStandardDeviationOn()\nC++: virtual void ComputeStandardDeviationOn()\n\n"},
  {"ComputeStandardDeviationOff", PyvtkTemporalStatistics_ComputeStandardDeviationOff, METH_VARARGS,
   "V.ComputeStandardDeviationOff()\nC++: virtual void ComputeStandardDeviationOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTemporalStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkTemporalStatistics", // tp_name
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
  PyvtkTemporalStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalStatistics_StaticNew()
{
  return vtkTemporalStatistics::New();
}

PyObject *PyvtkTemporalStatistics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTemporalStatistics_Type, PyvtkTemporalStatistics_Methods,
    "vtkTemporalStatistics",
 &PyvtkTemporalStatistics_StaticNew);

  PyTypeObject *pytype = &PyvtkTemporalStatistics_Type;

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

void PyVTKAddFile_vtkTemporalStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

