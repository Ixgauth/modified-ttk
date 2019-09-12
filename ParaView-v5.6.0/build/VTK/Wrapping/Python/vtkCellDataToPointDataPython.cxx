// python wrapper for vtkCellDataToPointData
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
#include "vtkCellDataToPointData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellDataToPointData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellDataToPointData_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkCellDataToPointData_Doc =
  "vtkCellDataToPointData - map cell data to point data\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkCellDataToPointData is a filter that transforms cell data (i.e.,\n"
  "data specified per cell) into point data (i.e., data specified at\n"
  "cell points). The method of transformation is based on averaging the\n"
  "data values of all cells using a particular point. Optionally, the\n"
  "input cell data can be passed through to the output as well.\n"
  "Unstructured grids and polydata can have cells of different\n"
  "dimensions. To handle different use cases in this situation, the user\n"
  "can specify which cells contribute to the computation. The options\n"
  "for this are All (default), Patch and DataSetMax. Patch uses only the\n"
  "highest dimension cells attached to a point. DataSetMax uses the\n"
  "highest cell dimension in the entire data set.\n\n"
  "@warning\n"
  "This filter is an abstract filter, that is, the output is an abstract\n"
  "type (i.e., vtkDataSet). Use the convenience methods (e.g.,\n"
  "GetPolyDataOutput(), GetStructuredPointsOutput(), etc.) to get the\n"
  "type of output you want.\n\n"
  "@sa\n"
  "vtkPointData vtkCellData vtkPointDataToCellData\n\n";

static PyTypeObject PyvtkCellDataToPointData_ContributingCellEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkCellDataToPointData.ContributingCellEnum", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkCellDataToPointData_ContributingCellEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCellDataToPointData_ContributingCellEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCellDataToPointData_ContributingCellEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCellDataToPointData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellDataToPointData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellDataToPointData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellDataToPointData *tempr = vtkCellDataToPointData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellDataToPointData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellDataToPointData::NewInstance());

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
PyvtkCellDataToPointData_SetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCellData(temp0);
    }
    else
    {
      op->vtkCellDataToPointData::SetPassCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassCellData() :
      op->vtkCellDataToPointData::GetPassCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_PassCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataOn();
    }
    else
    {
      op->vtkCellDataToPointData::PassCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_PassCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataOff();
    }
    else
    {
      op->vtkCellDataToPointData::PassCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_SetContributingCellOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContributingCellOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContributingCellOption(temp0);
    }
    else
    {
      op->vtkCellDataToPointData::SetContributingCellOption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetContributingCellOptionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOptionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOptionMinValue() :
      op->vtkCellDataToPointData::GetContributingCellOptionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetContributingCellOptionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOptionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOptionMaxValue() :
      op->vtkCellDataToPointData::GetContributingCellOptionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetContributingCellOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOption() :
      op->vtkCellDataToPointData::GetContributingCellOption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellDataToPointData_Methods[] = {
  {"IsTypeOf", PyvtkCellDataToPointData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellDataToPointData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellDataToPointData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCellDataToPointData\nC++: static vtkCellDataToPointData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellDataToPointData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellDataToPointData\nC++: vtkCellDataToPointData *NewInstance()\n\n"},
  {"SetPassCellData", PyvtkCellDataToPointData_SetPassCellData, METH_VARARGS,
   "V.SetPassCellData(int)\nC++: virtual void SetPassCellData(vtkTypeBool _arg)\n\nControl whether the input cell data is to be passed to the\noutput. If on, then the input cell data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {"GetPassCellData", PyvtkCellDataToPointData_GetPassCellData, METH_VARARGS,
   "V.GetPassCellData() -> int\nC++: virtual vtkTypeBool GetPassCellData()\n\nControl whether the input cell data is to be passed to the\noutput. If on, then the input cell data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {"PassCellDataOn", PyvtkCellDataToPointData_PassCellDataOn, METH_VARARGS,
   "V.PassCellDataOn()\nC++: virtual void PassCellDataOn()\n\nControl whether the input cell data is to be passed to the\noutput. If on, then the input cell data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {"PassCellDataOff", PyvtkCellDataToPointData_PassCellDataOff, METH_VARARGS,
   "V.PassCellDataOff()\nC++: virtual void PassCellDataOff()\n\nControl whether the input cell data is to be passed to the\noutput. If on, then the input cell data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput.\n"},
  {"SetContributingCellOption", PyvtkCellDataToPointData_SetContributingCellOption, METH_VARARGS,
   "V.SetContributingCellOption(int)\nC++: virtual void SetContributingCellOption(int _arg)\n\nOption to specify what cells to include in the gradient\ncomputation. Options are all cells (All, Patch and DataSetMax).\nThe default is All.\n"},
  {"GetContributingCellOptionMinValue", PyvtkCellDataToPointData_GetContributingCellOptionMinValue, METH_VARARGS,
   "V.GetContributingCellOptionMinValue() -> int\nC++: virtual int GetContributingCellOptionMinValue()\n\nOption to specify what cells to include in the gradient\ncomputation. Options are all cells (All, Patch and DataSetMax).\nThe default is All.\n"},
  {"GetContributingCellOptionMaxValue", PyvtkCellDataToPointData_GetContributingCellOptionMaxValue, METH_VARARGS,
   "V.GetContributingCellOptionMaxValue() -> int\nC++: virtual int GetContributingCellOptionMaxValue()\n\nOption to specify what cells to include in the gradient\ncomputation. Options are all cells (All, Patch and DataSetMax).\nThe default is All.\n"},
  {"GetContributingCellOption", PyvtkCellDataToPointData_GetContributingCellOption, METH_VARARGS,
   "V.GetContributingCellOption() -> int\nC++: virtual int GetContributingCellOption()\n\nOption to specify what cells to include in the gradient\ncomputation. Options are all cells (All, Patch and DataSetMax).\nThe default is All.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellDataToPointData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkCellDataToPointData", // tp_name
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
  PyvtkCellDataToPointData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellDataToPointData_StaticNew()
{
  return vtkCellDataToPointData::New();
}

PyObject *PyvtkCellDataToPointData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellDataToPointData_Type, PyvtkCellDataToPointData_Methods,
    "vtkCellDataToPointData",
 &PyvtkCellDataToPointData_StaticNew);

  PyTypeObject *pytype = &PyvtkCellDataToPointData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCellDataToPointData_ContributingCellEnum_Type);
  PyvtkCellDataToPointData_ContributingCellEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCellDataToPointData_ContributingCellEnum_Type);

  o = (PyObject *)&PyvtkCellDataToPointData_ContributingCellEnum_Type;
  if (PyDict_SetItemString(d, "ContributingCellEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCellDataToPointData::ContributingCellEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "All", vtkCellDataToPointData::All },
        { "Patch", vtkCellDataToPointData::Patch },
        { "DataSetMax", vtkCellDataToPointData::DataSetMax },
      };

    o = PyvtkCellDataToPointData_ContributingCellEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellDataToPointData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellDataToPointData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellDataToPointData", o) != 0)
  {
    Py_DECREF(o);
  }

}

