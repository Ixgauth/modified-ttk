// python wrapper for vtkMergeDataObjectFilter
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
#include "vtkMergeDataObjectFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMergeDataObjectFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMergeDataObjectFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkMergeDataObjectFilter_Doc =
  "vtkMergeDataObjectFilter - merge dataset and data object field to\ncreate dataset with attribute data\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkMergeDataObjectFilter is a filter that merges the field from a\n"
  "vtkDataObject with a vtkDataSet. The resulting combined dataset can\n"
  "then be processed by other filters (e.g.,\n"
  "vtkFieldDataToAttributeDataFilter) to create attribute data like\n"
  "scalars, vectors, etc.\n\n"
  "The filter operates as follows. The field data from the vtkDataObject\n"
  "is merged with the input's vtkDataSet and then placed in the output.\n"
  "You can choose to place the field data into the cell data field, the\n"
  "point data field, or the datasets field (i.e., the one inherited from\n"
  "vtkDataSet's superclass vtkDataObject). All this data shuffling\n"
  "occurs via reference counting, therefore memory is not copied.\n\n"
  "One of the uses of this filter is to allow you to read/generate the\n"
  "structure of a dataset independent of the attributes. So, for\n"
  "example, you could store the dataset geometry/topology in one file,\n"
  "and field data in another. Then use this filter in combination with\n"
  "vtkFieldDataToAttributeData to create a dataset ready for processing\n"
  "in the visualization pipeline.\n\n";


static PyObject *
PyvtkMergeDataObjectFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergeDataObjectFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeDataObjectFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergeDataObjectFilter *tempr = vtkMergeDataObjectFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergeDataObjectFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeDataObjectFilter::NewInstance());

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
PyvtkMergeDataObjectFilter_SetDataObjectInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetDataObjectInputData(temp0);
    }
    else
    {
      op->vtkMergeDataObjectFilter::SetDataObjectInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_GetDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataObject() :
      op->vtkMergeDataObjectFilter::GetDataObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_SetOutputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputField(temp0);
    }
    else
    {
      op->vtkMergeDataObjectFilter::SetOutputField(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_GetOutputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputField() :
      op->vtkMergeDataObjectFilter::GetOutputField());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_SetOutputFieldToDataObjectField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFieldToDataObjectField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFieldToDataObjectField();
    }
    else
    {
      op->vtkMergeDataObjectFilter::SetOutputFieldToDataObjectField();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_SetOutputFieldToPointDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFieldToPointDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFieldToPointDataField();
    }
    else
    {
      op->vtkMergeDataObjectFilter::SetOutputFieldToPointDataField();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeDataObjectFilter_SetOutputFieldToCellDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFieldToCellDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeDataObjectFilter *op = static_cast<vtkMergeDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFieldToCellDataField();
    }
    else
    {
      op->vtkMergeDataObjectFilter::SetOutputFieldToCellDataField();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeDataObjectFilter_Methods[] = {
  {"IsTypeOf", PyvtkMergeDataObjectFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMergeDataObjectFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMergeDataObjectFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMergeDataObjectFilter\nC++: static vtkMergeDataObjectFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMergeDataObjectFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMergeDataObjectFilter\nC++: vtkMergeDataObjectFilter *NewInstance()\n\n"},
  {"SetDataObjectInputData", PyvtkMergeDataObjectFilter_SetDataObjectInputData, METH_VARARGS,
   "V.SetDataObjectInputData(vtkDataObject)\nC++: void SetDataObjectInputData(vtkDataObject *object)\n\nSpecify the data object to merge with the input dataset.\n"},
  {"GetDataObject", PyvtkMergeDataObjectFilter_GetDataObject, METH_VARARGS,
   "V.GetDataObject() -> vtkDataObject\nC++: vtkDataObject *GetDataObject()\n\nSpecify the data object to merge with the input dataset.\n"},
  {"SetOutputField", PyvtkMergeDataObjectFilter_SetOutputField, METH_VARARGS,
   "V.SetOutputField(int)\nC++: virtual void SetOutputField(int _arg)\n\nSpecify where to place the field data during the merge process. \nThere are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {"GetOutputField", PyvtkMergeDataObjectFilter_GetOutputField, METH_VARARGS,
   "V.GetOutputField() -> int\nC++: virtual int GetOutputField()\n\nSpecify where to place the field data during the merge process. \nThere are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {"SetOutputFieldToDataObjectField", PyvtkMergeDataObjectFilter_SetOutputFieldToDataObjectField, METH_VARARGS,
   "V.SetOutputFieldToDataObjectField()\nC++: void SetOutputFieldToDataObjectField()\n\nSpecify where to place the field data during the merge process. \nThere are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {"SetOutputFieldToPointDataField", PyvtkMergeDataObjectFilter_SetOutputFieldToPointDataField, METH_VARARGS,
   "V.SetOutputFieldToPointDataField()\nC++: void SetOutputFieldToPointDataField()\n\nSpecify where to place the field data during the merge process. \nThere are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {"SetOutputFieldToCellDataField", PyvtkMergeDataObjectFilter_SetOutputFieldToCellDataField, METH_VARARGS,
   "V.SetOutputFieldToCellDataField()\nC++: void SetOutputFieldToCellDataField()\n\nSpecify where to place the field data during the merge process. \nThere are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMergeDataObjectFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkMergeDataObjectFilter", // tp_name
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
  PyvtkMergeDataObjectFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergeDataObjectFilter_StaticNew()
{
  return vtkMergeDataObjectFilter::New();
}

PyObject *PyvtkMergeDataObjectFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMergeDataObjectFilter_Type, PyvtkMergeDataObjectFilter_Methods,
    "vtkMergeDataObjectFilter",
 &PyvtkMergeDataObjectFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkMergeDataObjectFilter_Type;

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

void PyVTKAddFile_vtkMergeDataObjectFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergeDataObjectFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergeDataObjectFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

