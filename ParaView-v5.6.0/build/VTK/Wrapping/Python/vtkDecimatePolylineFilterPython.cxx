// python wrapper for vtkDecimatePolylineFilter
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
#include "vtkDecimatePolylineFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDecimatePolylineFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDecimatePolylineFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkDecimatePolylineFilter_Doc =
  "vtkDecimatePolylineFilter - reduce the number of lines in a polyline\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDecimatePolylineFilter is a filter to reduce the number of lines\n"
  "in a polyline. The algorithm functions by evaluating an error metric\n"
  "for each vertex (i.e., the distance of the vertex to a line defined\n"
  "from the two vertices on either side of the vertex). Then, these\n"
  "vertices are placed into a priority queue, and those with smaller\n"
  "errors are deleted first. The decimation continues until the target\n"
  "reduction is reached. While the filter will not delete end points, it\n"
  "will decimate closed loops down to a single line, thereby changing\n"
  "topology.\n\n"
  "Note that a maximum error value (expressed in world coordinates) can\n"
  "also be specified. This may limit the amount of decimation so the\n"
  "target reduction may not be met. By setting the maximum error value\n"
  "to a very small number, colinear points can be eliminated.\n\n"
  "@warning\n"
  "This algorithm is a very simple implementation that overlooks some\n"
  "potential complexities. For example, if a vertex is multiply\n"
  "connected, meaning that it is used by multiple distinct polylines,\n"
  "then the extra topological constraints are ignored. This can produce\n"
  "less than optimal results.\n\n"
  "@sa\n"
  "vtkDecimate vtkDecimateProp vtkQuadricClustering vtkQuadricDecimation\n\n";


static PyObject *
PyvtkDecimatePolylineFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDecimatePolylineFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDecimatePolylineFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDecimatePolylineFilter *tempr = vtkDecimatePolylineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDecimatePolylineFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDecimatePolylineFilter::NewInstance());

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
PyvtkDecimatePolylineFilter_SetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetReduction(temp0);
    }
    else
    {
      op->vtkDecimatePolylineFilter::SetTargetReduction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReductionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMinValue() :
      op->vtkDecimatePolylineFilter::GetTargetReductionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReductionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMaxValue() :
      op->vtkDecimatePolylineFilter::GetTargetReductionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReduction() :
      op->vtkDecimatePolylineFilter::GetTargetReduction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_SetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumError(temp0);
    }
    else
    {
      op->vtkDecimatePolylineFilter::SetMaximumError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetMaximumErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumErrorMinValue() :
      op->vtkDecimatePolylineFilter::GetMaximumErrorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetMaximumErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumErrorMaxValue() :
      op->vtkDecimatePolylineFilter::GetMaximumErrorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumError() :
      op->vtkDecimatePolylineFilter::GetMaximumError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkDecimatePolylineFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkDecimatePolylineFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDecimatePolylineFilter_Methods[] = {
  {"IsTypeOf", PyvtkDecimatePolylineFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type information and printing.\n"},
  {"IsA", PyvtkDecimatePolylineFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type information and printing.\n"},
  {"SafeDownCast", PyvtkDecimatePolylineFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDecimatePolylineFilter\nC++: static vtkDecimatePolylineFilter *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for type information and printing.\n"},
  {"NewInstance", PyvtkDecimatePolylineFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDecimatePolylineFilter\nC++: vtkDecimatePolylineFilter *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {"SetTargetReduction", PyvtkDecimatePolylineFilter_SetTargetReduction, METH_VARARGS,
   "V.SetTargetReduction(float)\nC++: virtual void SetTargetReduction(double _arg)\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {"GetTargetReductionMinValue", PyvtkDecimatePolylineFilter_GetTargetReductionMinValue, METH_VARARGS,
   "V.GetTargetReductionMinValue() -> float\nC++: virtual double GetTargetReductionMinValue()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {"GetTargetReductionMaxValue", PyvtkDecimatePolylineFilter_GetTargetReductionMaxValue, METH_VARARGS,
   "V.GetTargetReductionMaxValue() -> float\nC++: virtual double GetTargetReductionMaxValue()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {"GetTargetReduction", PyvtkDecimatePolylineFilter_GetTargetReduction, METH_VARARGS,
   "V.GetTargetReduction() -> float\nC++: virtual double GetTargetReduction()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {"SetMaximumError", PyvtkDecimatePolylineFilter_SetMaximumError, METH_VARARGS,
   "V.SetMaximumError(float)\nC++: virtual void SetMaximumError(double _arg)\n\nSet the largest decimation error that is allowed during the\ndecimation process. This may limit the maximum reduction that may\nbe achieved. The maximum error is specified as a fraction of the\nmaximum length of the input data bounding box.\n"},
  {"GetMaximumErrorMinValue", PyvtkDecimatePolylineFilter_GetMaximumErrorMinValue, METH_VARARGS,
   "V.GetMaximumErrorMinValue() -> float\nC++: virtual double GetMaximumErrorMinValue()\n\nSet the largest decimation error that is allowed during the\ndecimation process. This may limit the maximum reduction that may\nbe achieved. The maximum error is specified as a fraction of the\nmaximum length of the input data bounding box.\n"},
  {"GetMaximumErrorMaxValue", PyvtkDecimatePolylineFilter_GetMaximumErrorMaxValue, METH_VARARGS,
   "V.GetMaximumErrorMaxValue() -> float\nC++: virtual double GetMaximumErrorMaxValue()\n\nSet the largest decimation error that is allowed during the\ndecimation process. This may limit the maximum reduction that may\nbe achieved. The maximum error is specified as a fraction of the\nmaximum length of the input data bounding box.\n"},
  {"GetMaximumError", PyvtkDecimatePolylineFilter_GetMaximumError, METH_VARARGS,
   "V.GetMaximumError() -> float\nC++: virtual double GetMaximumError()\n\nSet the largest decimation error that is allowed during the\ndecimation process. This may limit the maximum reduction that may\nbe achieved. The maximum error is specified as a fraction of the\nmaximum length of the input data bounding box.\n"},
  {"SetOutputPointsPrecision", PyvtkDecimatePolylineFilter_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkDecimatePolylineFilter_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDecimatePolylineFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkDecimatePolylineFilter", // tp_name
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
  PyvtkDecimatePolylineFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDecimatePolylineFilter_StaticNew()
{
  return vtkDecimatePolylineFilter::New();
}

PyObject *PyvtkDecimatePolylineFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDecimatePolylineFilter_Type, PyvtkDecimatePolylineFilter_Methods,
    "vtkDecimatePolylineFilter",
 &PyvtkDecimatePolylineFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkDecimatePolylineFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDecimatePolylineFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDecimatePolylineFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDecimatePolylineFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

