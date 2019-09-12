// python wrapper for vtkThreeSliceFilter
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
#include "vtkThreeSliceFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThreeSliceFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkThreeSliceFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkThreeSliceFilter_Doc =
  "vtkThreeSliceFilter - Cut vtkDataSet along 3 planes\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkThreeSliceFilter is a filter that slice the input data using 3\n"
  "plane cut. Each axis cut could embed several slices by providing\n"
  "several values. As output you will find 4 output ports. The output\n"
  "ports are defined as follow:\n"
  "- 0: Merge of all the cutter output\n"
  "- 1: Output of the first internal vtkCutter filter\n"
  "- 2: Output of the second internal vtkCutter filter\n"
  "- 3: Output of the third internal vtkCutter filter\n\n";


static PyObject *
PyvtkThreeSliceFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkThreeSliceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThreeSliceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkThreeSliceFilter *tempr = vtkThreeSliceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkThreeSliceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThreeSliceFilter::NewInstance());

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
PyvtkThreeSliceFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkThreeSliceFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_SetCutNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetCutNormal(temp0, temp1);
    }
    else
    {
      op->vtkThreeSliceFilter::SetCutNormal(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_SetCutOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetCutOrigin(temp0, temp1);
    }
    else
    {
      op->vtkThreeSliceFilter::SetCutOrigin(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_SetCutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCutValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkThreeSliceFilter::SetCutValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_SetNumberOfSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSlice(temp0, temp1);
    }
    else
    {
      op->vtkThreeSliceFilter::SetNumberOfSlice(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_SetToDefaultSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToDefaultSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetToDefaultSettings();
    }
    else
    {
      op->vtkThreeSliceFilter::SetToDefaultSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_SetCutOrigins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOrigins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCutOrigins(temp0);
    }
    else
    {
      op->vtkThreeSliceFilter::SetCutOrigins(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkThreeSliceFilter_SetCutOrigins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOrigins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCutOrigins(temp0, temp1, temp2);
    }
    else
    {
      op->vtkThreeSliceFilter::SetCutOrigins(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkThreeSliceFilter_SetCutOrigins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkThreeSliceFilter_SetCutOrigins_s1(self, args);
    case 3:
      return PyvtkThreeSliceFilter_SetCutOrigins_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCutOrigins");
  return nullptr;
}



static PyObject *
PyvtkThreeSliceFilter_EnableProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableProbe(temp0);
    }
    else
    {
      op->vtkThreeSliceFilter::EnableProbe(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreeSliceFilter_GetProbedPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbedPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreeSliceFilter *op = static_cast<vtkThreeSliceFilter *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProbedPointData(temp0, temp1) :
      op->vtkThreeSliceFilter::GetProbedPointData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkThreeSliceFilter_Methods[] = {
  {"IsTypeOf", PyvtkThreeSliceFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkThreeSliceFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkThreeSliceFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkThreeSliceFilter\nC++: static vtkThreeSliceFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkThreeSliceFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkThreeSliceFilter\nC++: vtkThreeSliceFilter *NewInstance()\n\n"},
  {"GetMTime", PyvtkThreeSliceFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime because we rely on internal filters that have\ntheir own MTime\n"},
  {"SetCutNormal", PyvtkThreeSliceFilter_SetCutNormal, METH_VARARGS,
   "V.SetCutNormal(int, [float, float, float])\nC++: void SetCutNormal(int cutIndex, double normal[3])\n\nSet a Slice Normal for a given cutter\n"},
  {"SetCutOrigin", PyvtkThreeSliceFilter_SetCutOrigin, METH_VARARGS,
   "V.SetCutOrigin(int, [float, float, float])\nC++: void SetCutOrigin(int cutIndex, double origin[3])\n\nSet a slice Origin for a given cutter\n"},
  {"SetCutValue", PyvtkThreeSliceFilter_SetCutValue, METH_VARARGS,
   "V.SetCutValue(int, int, float)\nC++: void SetCutValue(int cutIndex, int index, double value)\n\nSet a slice value for a given cutter\n"},
  {"SetNumberOfSlice", PyvtkThreeSliceFilter_SetNumberOfSlice, METH_VARARGS,
   "V.SetNumberOfSlice(int, int)\nC++: void SetNumberOfSlice(int cutIndex, int size)\n\nSet number of slices for a given cutter\n"},
  {"SetToDefaultSettings", PyvtkThreeSliceFilter_SetToDefaultSettings, METH_VARARGS,
   "V.SetToDefaultSettings()\nC++: void SetToDefaultSettings()\n\nDefault settings:\n- reset the plan origin to be (0,0,0)\n- number of slice for X, Y and Z to be 0\n- Normal for SliceX=[1,0,0], SliceY=[0,1,0], SliceZ=[0,0,1]\n"},
  {"SetCutOrigins", PyvtkThreeSliceFilter_SetCutOrigins, METH_VARARGS,
   "V.SetCutOrigins([float, float, float])\nC++: void SetCutOrigins(double origin[3])\nV.SetCutOrigins(float, float, float)\nC++: void SetCutOrigins(double x, double y, double z)\n\nSet slice Origin for all cutter\n"},
  {"EnableProbe", PyvtkThreeSliceFilter_EnableProbe, METH_VARARGS,
   "V.EnableProbe(int)\nC++: void EnableProbe(int enable)\n\nEnable to probe the dataset at the given cut origin.\n"},
  {"GetProbedPointData", PyvtkThreeSliceFilter_GetProbedPointData, METH_VARARGS,
   "V.GetProbedPointData(string, float) -> bool\nC++: bool GetProbedPointData(const char *arrayName, double &value)\n\nReturn true if any data is available and provide the value as\nargument\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkThreeSliceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkThreeSliceFilter", // tp_name
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
  PyvtkThreeSliceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkThreeSliceFilter_StaticNew()
{
  return vtkThreeSliceFilter::New();
}

PyObject *PyvtkThreeSliceFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkThreeSliceFilter_Type, PyvtkThreeSliceFilter_Methods,
    "vtkThreeSliceFilter",
 &PyvtkThreeSliceFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkThreeSliceFilter_Type;

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

void PyVTKAddFile_vtkThreeSliceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkThreeSliceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkThreeSliceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

