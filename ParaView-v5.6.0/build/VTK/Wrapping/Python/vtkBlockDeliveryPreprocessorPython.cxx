// python wrapper for vtkBlockDeliveryPreprocessor
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
#include "vtkBlockDeliveryPreprocessor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBlockDeliveryPreprocessor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBlockDeliveryPreprocessor_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkBlockDeliveryPreprocessor_Doc =
  "vtkBlockDeliveryPreprocessor - filter used by block-delivery\nrepresentation for pre-processing data.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkBlockDeliveryPreprocessor is a filter used by block-delivery\n"
  "representation for pre-processing data. It internally uses\n"
  "vtkAttributeDataToTableFilter.\n\n";


static PyObject *
PyvtkBlockDeliveryPreprocessor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBlockDeliveryPreprocessor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlockDeliveryPreprocessor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBlockDeliveryPreprocessor *tempr = vtkBlockDeliveryPreprocessor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBlockDeliveryPreprocessor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlockDeliveryPreprocessor::NewInstance());

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
PyvtkBlockDeliveryPreprocessor_AddCompositeDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCompositeDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddCompositeDataSetIndex(temp0);
    }
    else
    {
      op->vtkBlockDeliveryPreprocessor::AddCompositeDataSetIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_RemoveAllCompositeDataSetIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCompositeDataSetIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllCompositeDataSetIndices();
    }
    else
    {
      op->vtkBlockDeliveryPreprocessor::RemoveAllCompositeDataSetIndices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_SetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

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
      op->vtkBlockDeliveryPreprocessor::SetGenerateCellConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_GetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateCellConnectivity() :
      op->vtkBlockDeliveryPreprocessor::GetGenerateCellConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

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
      op->vtkBlockDeliveryPreprocessor::SetFieldAssociation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkBlockDeliveryPreprocessor::GetFieldAssociation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_SetFlattenTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlattenTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlattenTable(temp0);
    }
    else
    {
      op->vtkBlockDeliveryPreprocessor::SetFlattenTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_GetFlattenTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlattenTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlattenTable() :
      op->vtkBlockDeliveryPreprocessor::GetFlattenTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_SetGenerateOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

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
      op->vtkBlockDeliveryPreprocessor::SetGenerateOriginalIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDeliveryPreprocessor_GetGenerateOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockDeliveryPreprocessor *op = static_cast<vtkBlockDeliveryPreprocessor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateOriginalIds() :
      op->vtkBlockDeliveryPreprocessor::GetGenerateOriginalIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBlockDeliveryPreprocessor_Methods[] = {
  {"IsTypeOf", PyvtkBlockDeliveryPreprocessor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBlockDeliveryPreprocessor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBlockDeliveryPreprocessor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBlockDeliveryPreprocessor\nC++: static vtkBlockDeliveryPreprocessor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBlockDeliveryPreprocessor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBlockDeliveryPreprocessor\nC++: vtkBlockDeliveryPreprocessor *NewInstance()\n\n"},
  {"AddCompositeDataSetIndex", PyvtkBlockDeliveryPreprocessor_AddCompositeDataSetIndex, METH_VARARGS,
   "V.AddCompositeDataSetIndex(int)\nC++: void AddCompositeDataSetIndex(unsigned int index)\n\nIn case of Composite datasets, set the flat index of the subtree\nto pass. Default or empty results in passing the entire composite\ntree.\n"},
  {"RemoveAllCompositeDataSetIndices", PyvtkBlockDeliveryPreprocessor_RemoveAllCompositeDataSetIndices, METH_VARARGS,
   "V.RemoveAllCompositeDataSetIndices()\nC++: void RemoveAllCompositeDataSetIndices()\n\nIn case of Composite datasets, set the flat index of the subtree\nto pass. Default or empty results in passing the entire composite\ntree.\n"},
  {"SetGenerateCellConnectivity", PyvtkBlockDeliveryPreprocessor_SetGenerateCellConnectivity, METH_VARARGS,
   "V.SetGenerateCellConnectivity(bool)\nC++: virtual void SetGenerateCellConnectivity(bool _arg)\n\nAllow user to enable/disable cell connectivity generation in the\ndatamodel\n"},
  {"GetGenerateCellConnectivity", PyvtkBlockDeliveryPreprocessor_GetGenerateCellConnectivity, METH_VARARGS,
   "V.GetGenerateCellConnectivity() -> bool\nC++: virtual bool GetGenerateCellConnectivity()\n\nAllow user to enable/disable cell connectivity generation in the\ndatamodel\n"},
  {"SetFieldAssociation", PyvtkBlockDeliveryPreprocessor_SetFieldAssociation, METH_VARARGS,
   "V.SetFieldAssociation(int)\nC++: virtual void SetFieldAssociation(int _arg)\n\nSelect the attribute type. Accepted values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS,\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS,\n\\li vtkDataObject::FIELD_ASSOCIATION_NONE,\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES,\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES,\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nIf value is vtkDataObject::FIELD_ASSOCIATION_NONE, then FieldData\nassociated with the input dataobject is extracted.\n"},
  {"GetFieldAssociation", PyvtkBlockDeliveryPreprocessor_GetFieldAssociation, METH_VARARGS,
   "V.GetFieldAssociation() -> int\nC++: virtual int GetFieldAssociation()\n\nSelect the attribute type. Accepted values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS,\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS,\n\\li vtkDataObject::FIELD_ASSOCIATION_NONE,\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES,\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES,\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nIf value is vtkDataObject::FIELD_ASSOCIATION_NONE, then FieldData\nassociated with the input dataobject is extracted.\n"},
  {"SetFlattenTable", PyvtkBlockDeliveryPreprocessor_SetFlattenTable, METH_VARARGS,
   "V.SetFlattenTable(int)\nC++: virtual void SetFlattenTable(int _arg)\n\nFlatten the table, i.e. split any multicomponent columns into\nseparate components, internally the vtkSplitColumnComponents\nfilter is used.\n"},
  {"GetFlattenTable", PyvtkBlockDeliveryPreprocessor_GetFlattenTable, METH_VARARGS,
   "V.GetFlattenTable() -> int\nC++: virtual int GetFlattenTable()\n\nFlatten the table, i.e. split any multicomponent columns into\nseparate components, internally the vtkSplitColumnComponents\nfilter is used.\n"},
  {"SetGenerateOriginalIds", PyvtkBlockDeliveryPreprocessor_SetGenerateOriginalIds, METH_VARARGS,
   "V.SetGenerateOriginalIds(bool)\nC++: virtual void SetGenerateOriginalIds(bool _arg)\n\nWhen set (default) the vtkOriginalIndices array will be added to\nthe output. Can be overridden by setting this flag to 0. This is\nonly respected when AddMetaData is true.\n"},
  {"GetGenerateOriginalIds", PyvtkBlockDeliveryPreprocessor_GetGenerateOriginalIds, METH_VARARGS,
   "V.GetGenerateOriginalIds() -> bool\nC++: virtual bool GetGenerateOriginalIds()\n\nWhen set (default) the vtkOriginalIndices array will be added to\nthe output. Can be overridden by setting this flag to 0. This is\nonly respected when AddMetaData is true.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBlockDeliveryPreprocessor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkBlockDeliveryPreprocessor", // tp_name
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
  PyvtkBlockDeliveryPreprocessor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBlockDeliveryPreprocessor_StaticNew()
{
  return vtkBlockDeliveryPreprocessor::New();
}

PyObject *PyvtkBlockDeliveryPreprocessor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBlockDeliveryPreprocessor_Type, PyvtkBlockDeliveryPreprocessor_Methods,
    "vtkBlockDeliveryPreprocessor",
 &PyvtkBlockDeliveryPreprocessor_StaticNew);

  PyTypeObject *pytype = &PyvtkBlockDeliveryPreprocessor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBlockDeliveryPreprocessor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBlockDeliveryPreprocessor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBlockDeliveryPreprocessor", o) != 0)
  {
    Py_DECREF(o);
  }

}

