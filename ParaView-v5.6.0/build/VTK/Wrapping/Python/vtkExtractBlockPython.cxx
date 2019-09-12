// python wrapper for vtkExtractBlock
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
#include "vtkExtractBlock.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractBlock(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractBlock_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkExtractBlock_Doc =
  "vtkExtractBlock - extracts blocks from a multiblock dataset.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkExtractBlock is a filter that extracts blocks from a multiblock\n"
  "dataset. Each node in the multi-block tree is identified by an index.\n"
  "The index can be obtained by performing a preorder traversal of the\n"
  "tree (including empty nodes). eg. A(B (D, E), C(F, G)). Inorder\n"
  "traversal yields: A, B, D, E, C, F, G Index of A is 0, while index of\n"
  "C is 4.\n\n";


static PyObject *
PyvtkExtractBlock_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractBlock::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractBlock::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractBlock *tempr = vtkExtractBlock::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractBlock *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractBlock::NewInstance());

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
PyvtkExtractBlock_AddIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddIndex(temp0);
    }
    else
    {
      op->vtkExtractBlock::AddIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_RemoveIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveIndex(temp0);
    }
    else
    {
      op->vtkExtractBlock::RemoveIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_RemoveAllIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllIndices();
    }
    else
    {
      op->vtkExtractBlock::RemoveAllIndices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_SetPruneOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPruneOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPruneOutput(temp0);
    }
    else
    {
      op->vtkExtractBlock::SetPruneOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_GetPruneOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPruneOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPruneOutput() :
      op->vtkExtractBlock::GetPruneOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_PruneOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PruneOutputOn();
    }
    else
    {
      op->vtkExtractBlock::PruneOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_PruneOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PruneOutputOff();
    }
    else
    {
      op->vtkExtractBlock::PruneOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_SetMaintainStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaintainStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaintainStructure(temp0);
    }
    else
    {
      op->vtkExtractBlock::SetMaintainStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_GetMaintainStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaintainStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaintainStructure() :
      op->vtkExtractBlock::GetMaintainStructure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_MaintainStructureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainStructureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaintainStructureOn();
    }
    else
    {
      op->vtkExtractBlock::MaintainStructureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_MaintainStructureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainStructureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaintainStructureOff();
    }
    else
    {
      op->vtkExtractBlock::MaintainStructureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractBlock_Methods[] = {
  {"IsTypeOf", PyvtkExtractBlock_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractBlock_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractBlock_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractBlock\nC++: static vtkExtractBlock *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractBlock_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractBlock\nC++: vtkExtractBlock *NewInstance()\n\n"},
  {"AddIndex", PyvtkExtractBlock_AddIndex, METH_VARARGS,
   "V.AddIndex(int)\nC++: void AddIndex(unsigned int index)\n\nSelect the block indices to extract. Each node in the multi-block\ntree is identified by an index. The index can be obtained by\nperforming a preorder traversal of the tree (including empty\nnodes). eg. A(B (D, E), C(F, G)). Inorder traversal yields: A, B,\nD, E, C, F, G Index of A is 0, while index of C is 4.\n"},
  {"RemoveIndex", PyvtkExtractBlock_RemoveIndex, METH_VARARGS,
   "V.RemoveIndex(int)\nC++: void RemoveIndex(unsigned int index)\n\nSelect the block indices to extract. Each node in the multi-block\ntree is identified by an index. The index can be obtained by\nperforming a preorder traversal of the tree (including empty\nnodes). eg. A(B (D, E), C(F, G)). Inorder traversal yields: A, B,\nD, E, C, F, G Index of A is 0, while index of C is 4.\n"},
  {"RemoveAllIndices", PyvtkExtractBlock_RemoveAllIndices, METH_VARARGS,
   "V.RemoveAllIndices()\nC++: void RemoveAllIndices()\n\nSelect the block indices to extract. Each node in the multi-block\ntree is identified by an index. The index can be obtained by\nperforming a preorder traversal of the tree (including empty\nnodes). eg. A(B (D, E), C(F, G)). Inorder traversal yields: A, B,\nD, E, C, F, G Index of A is 0, while index of C is 4.\n"},
  {"SetPruneOutput", PyvtkExtractBlock_SetPruneOutput, METH_VARARGS,
   "V.SetPruneOutput(int)\nC++: virtual void SetPruneOutput(vtkTypeBool _arg)\n\nWhen set, the output multiblock dataset will be pruned to remove\nempty nodes. On by default.\n"},
  {"GetPruneOutput", PyvtkExtractBlock_GetPruneOutput, METH_VARARGS,
   "V.GetPruneOutput() -> int\nC++: virtual vtkTypeBool GetPruneOutput()\n\nWhen set, the output multiblock dataset will be pruned to remove\nempty nodes. On by default.\n"},
  {"PruneOutputOn", PyvtkExtractBlock_PruneOutputOn, METH_VARARGS,
   "V.PruneOutputOn()\nC++: virtual void PruneOutputOn()\n\nWhen set, the output multiblock dataset will be pruned to remove\nempty nodes. On by default.\n"},
  {"PruneOutputOff", PyvtkExtractBlock_PruneOutputOff, METH_VARARGS,
   "V.PruneOutputOff()\nC++: virtual void PruneOutputOff()\n\nWhen set, the output multiblock dataset will be pruned to remove\nempty nodes. On by default.\n"},
  {"SetMaintainStructure", PyvtkExtractBlock_SetMaintainStructure, METH_VARARGS,
   "V.SetMaintainStructure(int)\nC++: virtual void SetMaintainStructure(vtkTypeBool _arg)\n\nThis is used only when PruneOutput is ON. By default, when\npruning the output i.e. remove empty blocks, if node has only 1\nnon-null child block, then that node is removed. To preserve\nthese parent nodes, set this flag to true. Off by default.\n"},
  {"GetMaintainStructure", PyvtkExtractBlock_GetMaintainStructure, METH_VARARGS,
   "V.GetMaintainStructure() -> int\nC++: virtual vtkTypeBool GetMaintainStructure()\n\nThis is used only when PruneOutput is ON. By default, when\npruning the output i.e. remove empty blocks, if node has only 1\nnon-null child block, then that node is removed. To preserve\nthese parent nodes, set this flag to true. Off by default.\n"},
  {"MaintainStructureOn", PyvtkExtractBlock_MaintainStructureOn, METH_VARARGS,
   "V.MaintainStructureOn()\nC++: virtual void MaintainStructureOn()\n\nThis is used only when PruneOutput is ON. By default, when\npruning the output i.e. remove empty blocks, if node has only 1\nnon-null child block, then that node is removed. To preserve\nthese parent nodes, set this flag to true. Off by default.\n"},
  {"MaintainStructureOff", PyvtkExtractBlock_MaintainStructureOff, METH_VARARGS,
   "V.MaintainStructureOff()\nC++: virtual void MaintainStructureOff()\n\nThis is used only when PruneOutput is ON. By default, when\npruning the output i.e. remove empty blocks, if node has only 1\nnon-null child block, then that node is removed. To preserve\nthese parent nodes, set this flag to true. Off by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractBlock_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractBlock", // tp_name
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
  PyvtkExtractBlock_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractBlock_StaticNew()
{
  return vtkExtractBlock::New();
}

PyObject *PyvtkExtractBlock_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractBlock_Type, PyvtkExtractBlock_Methods,
    "vtkExtractBlock",
 &PyvtkExtractBlock_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractBlock_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractBlock(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractBlock_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractBlock", o) != 0)
  {
    Py_DECREF(o);
  }

}

