// python wrapper for vtkSpreadSheetRepresentation
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
#include "vtkSpreadSheetRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpreadSheetRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpreadSheetRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkSpreadSheetRepresentation_Doc =
  "vtkSpreadSheetRepresentation - Representation for showing data in a\nvtkSpreadSheetView.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "Unlike typical ParaView representations, this one does not do any\n"
  "data movement, it merely updates the input and provides access to the\n"
  "input data objects (rather clones of those). This filer has 3 input\n"
  "ports:\n"
  "\\li 0: Data (vtkDataObject)\n"
  "\\li 1: Extracted Data (vtkUnstructruedGrid or multi-block of it)\n"
  "\\li 2: Extracted vtkSelection (vtkSelection)\n"
  "@warning\n"
  "This representation doesn't support caching currently.\n\n";


static PyObject *
PyvtkSpreadSheetRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpreadSheetRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpreadSheetRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpreadSheetRepresentation *tempr = vtkSpreadSheetRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpreadSheetRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpreadSheetRepresentation::NewInstance());

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
PyvtkSpreadSheetRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkSpreadSheetRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkSpreadSheetRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_GetDataProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetDataProducer() :
      op->vtkSpreadSheetRepresentation::GetDataProducer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_GetExtractedDataProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractedDataProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetExtractedDataProducer() :
      op->vtkSpreadSheetRepresentation::GetExtractedDataProducer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_GetSelectionProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetSelectionProducer() :
      op->vtkSpreadSheetRepresentation::GetSelectionProducer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_AddCompositeDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCompositeDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

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
      op->vtkSpreadSheetRepresentation::AddCompositeDataSetIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpreadSheetRepresentation_RemoveAllCompositeDataSetIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCompositeDataSetIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpreadSheetRepresentation *op = static_cast<vtkSpreadSheetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllCompositeDataSetIndices();
    }
    else
    {
      op->vtkSpreadSheetRepresentation::RemoveAllCompositeDataSetIndices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpreadSheetRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkSpreadSheetRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpreadSheetRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpreadSheetRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSpreadSheetRepresentation\nC++: static vtkSpreadSheetRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpreadSheetRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSpreadSheetRepresentation\nC++: vtkSpreadSheetRepresentation *NewInstance()\n\n"},
  {"ProcessViewRequest", PyvtkSpreadSheetRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nOverridden to update state of `GenerateCellConnectivity` and\n`FieldAssociation` which is specified on the view.\n"},
  {"MarkModified", PyvtkSpreadSheetRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nSince this has no delivery, just mark ourselves modified.\n"},
  {"GetDataProducer", PyvtkSpreadSheetRepresentation_GetDataProducer, METH_VARARGS,
   "V.GetDataProducer() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetDataProducer()\n\n"},
  {"GetExtractedDataProducer", PyvtkSpreadSheetRepresentation_GetExtractedDataProducer, METH_VARARGS,
   "V.GetExtractedDataProducer() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetExtractedDataProducer()\n\n"},
  {"GetSelectionProducer", PyvtkSpreadSheetRepresentation_GetSelectionProducer, METH_VARARGS,
   "V.GetSelectionProducer() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetSelectionProducer()\n\n"},
  {"AddCompositeDataSetIndex", PyvtkSpreadSheetRepresentation_AddCompositeDataSetIndex, METH_VARARGS,
   "V.AddCompositeDataSetIndex(int)\nC++: void AddCompositeDataSetIndex(unsigned int index)\n\nSelect the block indices to extract. Each node in the multi-block\ntree is identified by an index. The index can be obtained by\nperforming a preorder traversal of the tree (including empty\nnodes). eg. A(B (D, E), C(F, G)). Inorder traversal yields: A, B,\nD, E, C, F, G Index of A is 0, while index of C is 4.\n"},
  {"RemoveAllCompositeDataSetIndices", PyvtkSpreadSheetRepresentation_RemoveAllCompositeDataSetIndices, METH_VARARGS,
   "V.RemoveAllCompositeDataSetIndices()\nC++: void RemoveAllCompositeDataSetIndices()\n\nSelect the block indices to extract. Each node in the multi-block\ntree is identified by an index. The index can be obtained by\nperforming a preorder traversal of the tree (including empty\nnodes). eg. A(B (D, E), C(F, G)). Inorder traversal yields: A, B,\nD, E, C, F, G Index of A is 0, while index of C is 4.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSpreadSheetRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkSpreadSheetRepresentation", // tp_name
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
  PyvtkSpreadSheetRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpreadSheetRepresentation_StaticNew()
{
  return vtkSpreadSheetRepresentation::New();
}

PyObject *PyvtkSpreadSheetRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSpreadSheetRepresentation_Type, PyvtkSpreadSheetRepresentation_Methods,
    "vtkSpreadSheetRepresentation",
 &PyvtkSpreadSheetRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkSpreadSheetRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpreadSheetRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpreadSheetRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpreadSheetRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

