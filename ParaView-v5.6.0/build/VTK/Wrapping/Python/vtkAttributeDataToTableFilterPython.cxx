// python wrapper for vtkAttributeDataToTableFilter
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
#include "vtkAttributeDataToTableFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAttributeDataToTableFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAttributeDataToTableFilter_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkAttributeDataToTableFilter_Doc =
  "vtkAttributeDataToTableFilter - this filter produces a vtkTable from\nthe chosen attribute in the input data object.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkAttributeDataToTableFilter is a filter that produces a vtkTable\n"
  "from the chosen attribute in the input dataobject. This filter can\n"
  "accept composite datasets. If the input is a composite dataset, the\n"
  "output is a multiblock with vtkTable leaves.\n\n";


static PyObject *
PyvtkAttributeDataToTableFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAttributeDataToTableFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAttributeDataToTableFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAttributeDataToTableFilter *tempr = vtkAttributeDataToTableFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAttributeDataToTableFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAttributeDataToTableFilter::NewInstance());

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
PyvtkAttributeDataToTableFilter_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldAssociation(temp0);
    }
    else
    {
      op->vtkAttributeDataToTableFilter::SetFieldAssociation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkAttributeDataToTableFilter::GetFieldAssociation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SetAddMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddMetaData(temp0);
    }
    else
    {
      op->vtkAttributeDataToTableFilter::SetAddMetaData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetAddMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAddMetaData() :
      op->vtkAttributeDataToTableFilter::GetAddMetaData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_AddMetaDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMetaDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddMetaDataOn();
    }
    else
    {
      op->vtkAttributeDataToTableFilter::AddMetaDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_AddMetaDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMetaDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddMetaDataOff();
    }
    else
    {
      op->vtkAttributeDataToTableFilter::AddMetaDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SetGenerateOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateOriginalIds(temp0);
    }
    else
    {
      op->vtkAttributeDataToTableFilter::SetGenerateOriginalIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetGenerateOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateOriginalIds() :
      op->vtkAttributeDataToTableFilter::GetGenerateOriginalIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCellConnectivity(temp0);
    }
    else
    {
      op->vtkAttributeDataToTableFilter::SetGenerateCellConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateCellConnectivity() :
      op->vtkAttributeDataToTableFilter::GetGenerateCellConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAttributeDataToTableFilter_Methods[] = {
  {"IsTypeOf", PyvtkAttributeDataToTableFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAttributeDataToTableFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAttributeDataToTableFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAttributeDataToTableFilter\nC++: static vtkAttributeDataToTableFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAttributeDataToTableFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAttributeDataToTableFilter\nC++: vtkAttributeDataToTableFilter *NewInstance()\n\n"},
  {"SetFieldAssociation", PyvtkAttributeDataToTableFilter_SetFieldAssociation, METH_VARARGS,
   "V.SetFieldAssociation(int)\nC++: virtual void SetFieldAssociation(int _arg)\n\nSelect the attribute type. Accepted values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS,\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS,\n\\li vtkDataObject::FIELD_ASSOCIATION_NONE,\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES,\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES,\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nIf value is vtkDataObject::FIELD_ASSOCIATION_NONE, then FieldData\nassociated with the input dataobject is extracted.\n"},
  {"GetFieldAssociation", PyvtkAttributeDataToTableFilter_GetFieldAssociation, METH_VARARGS,
   "V.GetFieldAssociation() -> int\nC++: virtual int GetFieldAssociation()\n\nSelect the attribute type. Accepted values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS,\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS,\n\\li vtkDataObject::FIELD_ASSOCIATION_NONE,\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES,\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES,\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nIf value is vtkDataObject::FIELD_ASSOCIATION_NONE, then FieldData\nassociated with the input dataobject is extracted.\n"},
  {"SetAddMetaData", PyvtkAttributeDataToTableFilter_SetAddMetaData, METH_VARARGS,
   "V.SetAddMetaData(bool)\nC++: virtual void SetAddMetaData(bool _arg)\n\nIt is possible for this filter to add additional meta-data to the\nfield data such as point coordinates (when point attributes are\nselected and input is pointset) or structured coordinates etc. To\nenable this addition of extra information, turn this flag on. Off\nby default.\n"},
  {"GetAddMetaData", PyvtkAttributeDataToTableFilter_GetAddMetaData, METH_VARARGS,
   "V.GetAddMetaData() -> bool\nC++: virtual bool GetAddMetaData()\n\nIt is possible for this filter to add additional meta-data to the\nfield data such as point coordinates (when point attributes are\nselected and input is pointset) or structured coordinates etc. To\nenable this addition of extra information, turn this flag on. Off\nby default.\n"},
  {"AddMetaDataOn", PyvtkAttributeDataToTableFilter_AddMetaDataOn, METH_VARARGS,
   "V.AddMetaDataOn()\nC++: virtual void AddMetaDataOn()\n\nIt is possible for this filter to add additional meta-data to the\nfield data such as point coordinates (when point attributes are\nselected and input is pointset) or structured coordinates etc. To\nenable this addition of extra information, turn this flag on. Off\nby default.\n"},
  {"AddMetaDataOff", PyvtkAttributeDataToTableFilter_AddMetaDataOff, METH_VARARGS,
   "V.AddMetaDataOff()\nC++: virtual void AddMetaDataOff()\n\nIt is possible for this filter to add additional meta-data to the\nfield data such as point coordinates (when point attributes are\nselected and input is pointset) or structured coordinates etc. To\nenable this addition of extra information, turn this flag on. Off\nby default.\n"},
  {"SetGenerateOriginalIds", PyvtkAttributeDataToTableFilter_SetGenerateOriginalIds, METH_VARARGS,
   "V.SetGenerateOriginalIds(bool)\nC++: virtual void SetGenerateOriginalIds(bool _arg)\n\nWhen set (default) the vtkOriginalIndices array will be added to\nthe output. Can be overridden by setting this flag to 0. This is\nonly respected when AddMetaData is true.\n"},
  {"GetGenerateOriginalIds", PyvtkAttributeDataToTableFilter_GetGenerateOriginalIds, METH_VARARGS,
   "V.GetGenerateOriginalIds() -> bool\nC++: virtual bool GetGenerateOriginalIds()\n\nWhen set (default) the vtkOriginalIndices array will be added to\nthe output. Can be overridden by setting this flag to 0. This is\nonly respected when AddMetaData is true.\n"},
  {"SetGenerateCellConnectivity", PyvtkAttributeDataToTableFilter_SetGenerateCellConnectivity, METH_VARARGS,
   "V.SetGenerateCellConnectivity(bool)\nC++: virtual void SetGenerateCellConnectivity(bool _arg)\n\nWhen set (not the default) the connectivity of each cell will be\nadded by adding a new column for each point.\n"},
  {"GetGenerateCellConnectivity", PyvtkAttributeDataToTableFilter_GetGenerateCellConnectivity, METH_VARARGS,
   "V.GetGenerateCellConnectivity() -> bool\nC++: virtual bool GetGenerateCellConnectivity()\n\nWhen set (not the default) the connectivity of each cell will be\nadded by adding a new column for each point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAttributeDataToTableFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkAttributeDataToTableFilter", // tp_name
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
  PyvtkAttributeDataToTableFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAttributeDataToTableFilter_StaticNew()
{
  return vtkAttributeDataToTableFilter::New();
}

PyObject *PyvtkAttributeDataToTableFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAttributeDataToTableFilter_Type, PyvtkAttributeDataToTableFilter_Methods,
    "vtkAttributeDataToTableFilter",
 &PyvtkAttributeDataToTableFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAttributeDataToTableFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAttributeDataToTableFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAttributeDataToTableFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAttributeDataToTableFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

