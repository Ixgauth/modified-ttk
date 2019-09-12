// python wrapper for vtkAMRDataSetCache
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
#include "vtkAMRDataSetCache.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRDataSetCache(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRDataSetCache_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAMRDataSetCache_Doc =
  "vtkAMRDataSetCache -  A concrete implementation of vtkObject that\nprovides functionality for\n caching AMR blocks.\n\n"
  "Superclass: vtkObject\n\n"
  "The primary intent of this class is to be used by the\n"
  " AMR reader infrastructure for caching blocks/data in memory to\n"
  "minimize\n"
  " out-of-core operations.\n\n";


static PyObject *
PyvtkAMRDataSetCache_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRDataSetCache::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRDataSetCache::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRDataSetCache *tempr = vtkAMRDataSetCache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRDataSetCache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRDataSetCache::NewInstance());

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
PyvtkAMRDataSetCache_InsertAMRBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertAMRBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  vtkUniformGrid *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUniformGrid"))
  {
    if (ap.IsBound())
    {
      op->InsertAMRBlock(temp0, temp1);
    }
    else
    {
      op->vtkAMRDataSetCache::InsertAMRBlock(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_InsertAMRBlockPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertAMRBlockPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->InsertAMRBlockPointData(temp0, temp1);
    }
    else
    {
      op->vtkAMRDataSetCache::InsertAMRBlockPointData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_InsertAMRBlockCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertAMRBlockCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->InsertAMRBlockCellData(temp0, temp1);
    }
    else
    {
      op->vtkAMRDataSetCache::InsertAMRBlockCellData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_GetAMRBlockCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBlockCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetAMRBlockCellData(temp0, temp1) :
      op->vtkAMRDataSetCache::GetAMRBlockCellData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_GetAMRBlockPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBlockPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetAMRBlockPointData(temp0, temp1) :
      op->vtkAMRDataSetCache::GetAMRBlockPointData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_GetAMRBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAMRBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUniformGrid *tempr = (ap.IsBound() ?
      op->GetAMRBlock(temp0) :
      op->vtkAMRDataSetCache::GetAMRBlock(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_HasAMRBlockCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAMRBlockCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAMRBlockCellData(temp0, temp1) :
      op->vtkAMRDataSetCache::HasAMRBlockCellData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_HasAMRBlockPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAMRBlockPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAMRBlockPointData(temp0, temp1) :
      op->vtkAMRDataSetCache::HasAMRBlockPointData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDataSetCache_HasAMRBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAMRBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDataSetCache *op = static_cast<vtkAMRDataSetCache *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAMRBlock(temp0) :
      op->vtkAMRDataSetCache::HasAMRBlock(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRDataSetCache_Methods[] = {
  {"IsTypeOf", PyvtkAMRDataSetCache_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRDataSetCache_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRDataSetCache_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRDataSetCache\nC++: static vtkAMRDataSetCache *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRDataSetCache_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRDataSetCache\nC++: vtkAMRDataSetCache *NewInstance()\n\n"},
  {"InsertAMRBlock", PyvtkAMRDataSetCache_InsertAMRBlock, METH_VARARGS,
   "V.InsertAMRBlock(int, vtkUniformGrid)\nC++: void InsertAMRBlock(int compositeIdx,\n    vtkUniformGrid *amrGrid)\n\nInserts an AMR block to the cache\n"},
  {"InsertAMRBlockPointData", PyvtkAMRDataSetCache_InsertAMRBlockPointData, METH_VARARGS,
   "V.InsertAMRBlockPointData(int, vtkDataArray)\nC++: void InsertAMRBlockPointData(int compositeIdx,\n    vtkDataArray *dataArray)\n\nInserts a point data array to an already cached block NOTE:\nthis->HasAMRBlock( compositeIdx ) == true\n"},
  {"InsertAMRBlockCellData", PyvtkAMRDataSetCache_InsertAMRBlockCellData, METH_VARARGS,
   "V.InsertAMRBlockCellData(int, vtkDataArray)\nC++: void InsertAMRBlockCellData(int compositeIdx,\n    vtkDataArray *dataArray)\n\nInserts a cell data array to an already cached block NOTE:\nthis->HasAMRBlock( compositeIdx ) == true\n"},
  {"GetAMRBlockCellData", PyvtkAMRDataSetCache_GetAMRBlockCellData, METH_VARARGS,
   "V.GetAMRBlockCellData(int, string) -> vtkDataArray\nC++: vtkDataArray *GetAMRBlockCellData(int compositeIdx,\n    const char *dataName)\n\nGiven the name of the cell array and AMR block composite index,\nthis method returns a pointer to the cell data array. NOTE: Null\nis returned if the cell array and/or block is not cached.\n"},
  {"GetAMRBlockPointData", PyvtkAMRDataSetCache_GetAMRBlockPointData, METH_VARARGS,
   "V.GetAMRBlockPointData(int, string) -> vtkDataArray\nC++: vtkDataArray *GetAMRBlockPointData(int compositeIdx,\n    const char *dataName)\n\nGiven the name of the point array and AMR block composite index,\nthis method returns a pointer to the point data array. NOTE: Null\nis returned if the point array and /or block is not cached.\n"},
  {"GetAMRBlock", PyvtkAMRDataSetCache_GetAMRBlock, METH_VARARGS,
   "V.GetAMRBlock(int) -> vtkUniformGrid\nC++: vtkUniformGrid *GetAMRBlock(int compositeIdx)\n\nGiven the composite index, this method returns the AMR block.\nNOTE: Null is returned if the AMR block does not exist in the\ncache.\n"},
  {"HasAMRBlockCellData", PyvtkAMRDataSetCache_HasAMRBlockCellData, METH_VARARGS,
   "V.HasAMRBlockCellData(int, string) -> bool\nC++: bool HasAMRBlockCellData(int compositeIdx, const char *name)\n\nChecks if the cell data array, associated with the provided name,\nhas been cached for the AMR block with the given composite index.\n"},
  {"HasAMRBlockPointData", PyvtkAMRDataSetCache_HasAMRBlockPointData, METH_VARARGS,
   "V.HasAMRBlockPointData(int, string) -> bool\nC++: bool HasAMRBlockPointData(int compositeIdx, const char *name)\n\nChecks if the point data array, associated with the provided\nname, has been cached for the AMR block with the given composite\nindex.\n"},
  {"HasAMRBlock", PyvtkAMRDataSetCache_HasAMRBlock, METH_VARARGS,
   "V.HasAMRBlock(int) -> bool\nC++: bool HasAMRBlock(const int compositeIdx)\n\nChecks if the AMR block associated with the given composite is\ncached.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRDataSetCache_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOAMRPython.vtkAMRDataSetCache", // tp_name
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
  PyvtkAMRDataSetCache_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRDataSetCache_StaticNew()
{
  return vtkAMRDataSetCache::New();
}

PyObject *PyvtkAMRDataSetCache_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRDataSetCache_Type, PyvtkAMRDataSetCache_Methods,
    "vtkAMRDataSetCache",
 &PyvtkAMRDataSetCache_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRDataSetCache_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRDataSetCache(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRDataSetCache_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRDataSetCache", o) != 0)
  {
    Py_DECREF(o);
  }

}

