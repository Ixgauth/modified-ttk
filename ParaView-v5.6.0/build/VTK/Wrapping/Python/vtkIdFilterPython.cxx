// python wrapper for vtkIdFilter
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
#include "vtkIdFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIdFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIdFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkIdFilter_Doc =
  "vtkIdFilter - generate scalars or field data from point and cell ids\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkIdFilter is a filter to that generates scalars or field data using\n"
  "cell and point ids. That is, the point attribute data scalars or\n"
  "field data are generated from the point ids, and the cell attribute\n"
  "data scalars or field data are generated from the cell ids.\n\n"
  "Typically this filter is used with vtkLabeledDataMapper (and possibly\n"
  "vtkSelectVisiblePoints) to create labels for points and cells, or\n"
  "labels for the point or cell data scalar values.\n\n";


static PyObject *
PyvtkIdFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIdFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIdFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIdFilter *tempr = vtkIdFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIdFilter::NewInstance());

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
PyvtkIdFilter_SetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIds(temp0);
    }
    else
    {
      op->vtkIdFilter::SetPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_GetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointIds() :
      op->vtkIdFilter::GetPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_PointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointIdsOn();
    }
    else
    {
      op->vtkIdFilter::PointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_PointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointIdsOff();
    }
    else
    {
      op->vtkIdFilter::PointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_SetCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellIds(temp0);
    }
    else
    {
      op->vtkIdFilter::SetCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_GetCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellIds() :
      op->vtkIdFilter::GetCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_CellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellIdsOn();
    }
    else
    {
      op->vtkIdFilter::CellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_CellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellIdsOff();
    }
    else
    {
      op->vtkIdFilter::CellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldData(temp0);
    }
    else
    {
      op->vtkIdFilter::SetFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldData() :
      op->vtkIdFilter::GetFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_FieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOn();
    }
    else
    {
      op->vtkIdFilter::FieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_FieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOff();
    }
    else
    {
      op->vtkIdFilter::FieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_SetIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIdsArrayName(temp0);
    }
    else
    {
      op->vtkIdFilter::SetIdsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_GetIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetIdsArrayName() :
      op->vtkIdFilter::GetIdsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIdFilter_Methods[] = {
  {"IsTypeOf", PyvtkIdFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIdFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIdFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIdFilter\nC++: static vtkIdFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIdFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIdFilter\nC++: vtkIdFilter *NewInstance()\n\n"},
  {"SetPointIds", PyvtkIdFilter_SetPointIds, METH_VARARGS,
   "V.SetPointIds(int)\nC++: virtual void SetPointIds(vtkTypeBool _arg)\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {"GetPointIds", PyvtkIdFilter_GetPointIds, METH_VARARGS,
   "V.GetPointIds() -> int\nC++: virtual vtkTypeBool GetPointIds()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {"PointIdsOn", PyvtkIdFilter_PointIdsOn, METH_VARARGS,
   "V.PointIdsOn()\nC++: virtual void PointIdsOn()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {"PointIdsOff", PyvtkIdFilter_PointIdsOff, METH_VARARGS,
   "V.PointIdsOff()\nC++: virtual void PointIdsOff()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {"SetCellIds", PyvtkIdFilter_SetCellIds, METH_VARARGS,
   "V.SetCellIds(int)\nC++: virtual void SetCellIds(vtkTypeBool _arg)\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {"GetCellIds", PyvtkIdFilter_GetCellIds, METH_VARARGS,
   "V.GetCellIds() -> int\nC++: virtual vtkTypeBool GetCellIds()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {"CellIdsOn", PyvtkIdFilter_CellIdsOn, METH_VARARGS,
   "V.CellIdsOn()\nC++: virtual void CellIdsOn()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {"CellIdsOff", PyvtkIdFilter_CellIdsOff, METH_VARARGS,
   "V.CellIdsOff()\nC++: virtual void CellIdsOff()\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {"SetFieldData", PyvtkIdFilter_SetFieldData, METH_VARARGS,
   "V.SetFieldData(int)\nC++: virtual void SetFieldData(vtkTypeBool _arg)\n\nSet/Get the flag which controls whether to generate scalar data\nor field data. If this flag is off, scalar data is generated.\nOtherwise, field data is generated. Default is off.\n"},
  {"GetFieldData", PyvtkIdFilter_GetFieldData, METH_VARARGS,
   "V.GetFieldData() -> int\nC++: virtual vtkTypeBool GetFieldData()\n\nSet/Get the flag which controls whether to generate scalar data\nor field data. If this flag is off, scalar data is generated.\nOtherwise, field data is generated. Default is off.\n"},
  {"FieldDataOn", PyvtkIdFilter_FieldDataOn, METH_VARARGS,
   "V.FieldDataOn()\nC++: virtual void FieldDataOn()\n\nSet/Get the flag which controls whether to generate scalar data\nor field data. If this flag is off, scalar data is generated.\nOtherwise, field data is generated. Default is off.\n"},
  {"FieldDataOff", PyvtkIdFilter_FieldDataOff, METH_VARARGS,
   "V.FieldDataOff()\nC++: virtual void FieldDataOff()\n\nSet/Get the flag which controls whether to generate scalar data\nor field data. If this flag is off, scalar data is generated.\nOtherwise, field data is generated. Default is off.\n"},
  {"SetIdsArrayName", PyvtkIdFilter_SetIdsArrayName, METH_VARARGS,
   "V.SetIdsArrayName(string)\nC++: virtual void SetIdsArrayName(const char *_arg)\n\nSet/Get the name of the Ids array if generated. By default the\nIds are named \"vtkIdFilter_Ids\", but this can be changed with\nthis function.\n"},
  {"GetIdsArrayName", PyvtkIdFilter_GetIdsArrayName, METH_VARARGS,
   "V.GetIdsArrayName() -> string\nC++: virtual char *GetIdsArrayName()\n\nSet/Get the name of the Ids array if generated. By default the\nIds are named \"vtkIdFilter_Ids\", but this can be changed with\nthis function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIdFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkIdFilter", // tp_name
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
  PyvtkIdFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIdFilter_StaticNew()
{
  return vtkIdFilter::New();
}

PyObject *PyvtkIdFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIdFilter_Type, PyvtkIdFilter_Methods,
    "vtkIdFilter",
 &PyvtkIdFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkIdFilter_Type;

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

void PyVTKAddFile_vtkIdFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIdFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIdFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

