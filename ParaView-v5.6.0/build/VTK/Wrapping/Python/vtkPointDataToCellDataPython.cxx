// python wrapper for vtkPointDataToCellData
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
#include "vtkPointDataToCellData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointDataToCellData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointDataToCellData_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkPointDataToCellData_Doc =
  "vtkPointDataToCellData - map point data to cell data\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkPointDataToCellData is a filter that transforms point data (i.e.,\n"
  "data specified per point) into cell data (i.e., data specified per\n"
  "cell). The method of transformation is based on averaging the data\n"
  "values of all points defining a particular cell. Optionally, the\n"
  "input point data can be passed through to the output as well.\n\n"
  "@warning\n"
  "This filter is an abstract filter, that is, the output is an abstract\n"
  "type (i.e., vtkDataSet). Use the convenience methods (e.g.,\n"
  "GetPolyDataOutput(), GetStructuredPointsOutput(), etc.) to get the\n"
  "type of output you want.\n\n"
  "@sa\n"
  "vtkPointData vtkCellData vtkCellDataToPointData\n\n";


static PyObject *
PyvtkPointDataToCellData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointDataToCellData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointDataToCellData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointDataToCellData *tempr = vtkPointDataToCellData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointDataToCellData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointDataToCellData::NewInstance());

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
PyvtkPointDataToCellData_SetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointData(temp0);
    }
    else
    {
      op->vtkPointDataToCellData::SetPassPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_GetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassPointData() :
      op->vtkPointDataToCellData::GetPassPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_PassPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOn();
    }
    else
    {
      op->vtkPointDataToCellData::PassPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_PassPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOff();
    }
    else
    {
      op->vtkPointDataToCellData::PassPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_SetCategoricalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCategoricalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCategoricalData(temp0);
    }
    else
    {
      op->vtkPointDataToCellData::SetCategoricalData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_GetCategoricalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCategoricalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCategoricalData() :
      op->vtkPointDataToCellData::GetCategoricalData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_CategoricalDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CategoricalDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CategoricalDataOn();
    }
    else
    {
      op->vtkPointDataToCellData::CategoricalDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_CategoricalDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CategoricalDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CategoricalDataOff();
    }
    else
    {
      op->vtkPointDataToCellData::CategoricalDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointDataToCellData_Methods[] = {
  {"IsTypeOf", PyvtkPointDataToCellData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointDataToCellData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointDataToCellData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointDataToCellData\nC++: static vtkPointDataToCellData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointDataToCellData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointDataToCellData\nC++: vtkPointDataToCellData *NewInstance()\n\n"},
  {"SetPassPointData", PyvtkPointDataToCellData_SetPassPointData, METH_VARARGS,
   "V.SetPassPointData(int)\nC++: virtual void SetPassPointData(vtkTypeBool _arg)\n\nControl whether the input point data is to be passed to the\noutput. If on, then the input point data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {"GetPassPointData", PyvtkPointDataToCellData_GetPassPointData, METH_VARARGS,
   "V.GetPassPointData() -> int\nC++: virtual vtkTypeBool GetPassPointData()\n\nControl whether the input point data is to be passed to the\noutput. If on, then the input point data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {"PassPointDataOn", PyvtkPointDataToCellData_PassPointDataOn, METH_VARARGS,
   "V.PassPointDataOn()\nC++: virtual void PassPointDataOn()\n\nControl whether the input point data is to be passed to the\noutput. If on, then the input point data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {"PassPointDataOff", PyvtkPointDataToCellData_PassPointDataOff, METH_VARARGS,
   "V.PassPointDataOff()\nC++: virtual void PassPointDataOff()\n\nControl whether the input point data is to be passed to the\noutput. If on, then the input point data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {"SetCategoricalData", PyvtkPointDataToCellData_SetCategoricalData, METH_VARARGS,
   "V.SetCategoricalData(int)\nC++: virtual void SetCategoricalData(vtkTypeBool _arg)\n\nControl whether the input point data is to be treated as\ncategorical. If the data is categorical, then the resultant cell\ndata will be determined by a \"majority rules\" vote, with ties\ngoing to the smaller value.\n"},
  {"GetCategoricalData", PyvtkPointDataToCellData_GetCategoricalData, METH_VARARGS,
   "V.GetCategoricalData() -> int\nC++: virtual vtkTypeBool GetCategoricalData()\n\nControl whether the input point data is to be treated as\ncategorical. If the data is categorical, then the resultant cell\ndata will be determined by a \"majority rules\" vote, with ties\ngoing to the smaller value.\n"},
  {"CategoricalDataOn", PyvtkPointDataToCellData_CategoricalDataOn, METH_VARARGS,
   "V.CategoricalDataOn()\nC++: virtual void CategoricalDataOn()\n\nControl whether the input point data is to be treated as\ncategorical. If the data is categorical, then the resultant cell\ndata will be determined by a \"majority rules\" vote, with ties\ngoing to the smaller value.\n"},
  {"CategoricalDataOff", PyvtkPointDataToCellData_CategoricalDataOff, METH_VARARGS,
   "V.CategoricalDataOff()\nC++: virtual void CategoricalDataOff()\n\nControl whether the input point data is to be treated as\ncategorical. If the data is categorical, then the resultant cell\ndata will be determined by a \"majority rules\" vote, with ties\ngoing to the smaller value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointDataToCellData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkPointDataToCellData", // tp_name
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
  PyvtkPointDataToCellData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointDataToCellData_StaticNew()
{
  return vtkPointDataToCellData::New();
}

PyObject *PyvtkPointDataToCellData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointDataToCellData_Type, PyvtkPointDataToCellData_Methods,
    "vtkPointDataToCellData",
 &PyvtkPointDataToCellData_StaticNew);

  PyTypeObject *pytype = &PyvtkPointDataToCellData_Type;

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

void PyVTKAddFile_vtkPointDataToCellData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointDataToCellData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointDataToCellData", o) != 0)
  {
    Py_DECREF(o);
  }

}

