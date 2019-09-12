// python wrapper for vtkSortedTableStreamer
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
#include "vtkSortedTableStreamer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSortedTableStreamer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSortedTableStreamer_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkSortedTableStreamer_Doc =
  "vtkSortedTableStreamer - return a sorted subset of the original table\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "This filter is used quickly get a sorted subset of a given vtkTable.\n"
  "By sorted we mean a subset build from a global sort even if some\n"
  "optimisation allow us to skip a global table sorting.\n\n";


static PyObject *
PyvtkSortedTableStreamer_PrintInfo(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PrintInfo");

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    vtkSortedTableStreamer::PrintInfo(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_TestInternalClasses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TestInternalClasses");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkSortedTableStreamer::TestInternalClasses();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSortedTableStreamer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSortedTableStreamer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSortedTableStreamer *tempr = vtkSortedTableStreamer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSortedTableStreamer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSortedTableStreamer::NewInstance());

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
PyvtkSortedTableStreamer_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkSortedTableStreamer::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetBlock() :
      op->vtkSortedTableStreamer::GetBlock());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlock(temp0);
    }
    else
    {
      op->vtkSortedTableStreamer::SetBlock(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetBlockSize() :
      op->vtkSortedTableStreamer::GetBlockSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockSize(temp0);
    }
    else
    {
      op->vtkSortedTableStreamer::SetBlockSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponent() :
      op->vtkSortedTableStreamer::GetSelectedComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedComponent(temp0);
    }
    else
    {
      op->vtkSortedTableStreamer::SetSelectedComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkSortedTableStreamer::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkSortedTableStreamer::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetColumnNameToSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnNameToSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnNameToSort() :
      op->vtkSortedTableStreamer::GetColumnNameToSort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetColumnNameToSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnNameToSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColumnNameToSort(temp0);
    }
    else
    {
      op->vtkSortedTableStreamer::SetColumnNameToSort(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_SetInvertOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvertOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInvertOrder(temp0);
    }
    else
    {
      op->vtkSortedTableStreamer::SetInvertOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortedTableStreamer_GetInvertOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvertOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortedTableStreamer *op = static_cast<vtkSortedTableStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInvertOrder() :
      op->vtkSortedTableStreamer::GetInvertOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSortedTableStreamer_Methods[] = {
  {"PrintInfo", PyvtkSortedTableStreamer_PrintInfo, METH_VARARGS,
   "V.PrintInfo(vtkTable)\nC++: static void PrintInfo(vtkTable *input)\n\n"},
  {"TestInternalClasses", PyvtkSortedTableStreamer_TestInternalClasses, METH_VARARGS,
   "V.TestInternalClasses() -> bool\nC++: static bool TestInternalClasses()\n\nTest the internal structure and make sure that they behave as\nexpected. Return true if everything is OK, false otherwise.\n"},
  {"IsTypeOf", PyvtkSortedTableStreamer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nTest the internal structure and make sure that they behave as\nexpected. Return true if everything is OK, false otherwise.\n"},
  {"IsA", PyvtkSortedTableStreamer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nTest the internal structure and make sure that they behave as\nexpected. Return true if everything is OK, false otherwise.\n"},
  {"SafeDownCast", PyvtkSortedTableStreamer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSortedTableStreamer\nC++: static vtkSortedTableStreamer *SafeDownCast(vtkObjectBase *o)\n\nTest the internal structure and make sure that they behave as\nexpected. Return true if everything is OK, false otherwise.\n"},
  {"NewInstance", PyvtkSortedTableStreamer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSortedTableStreamer\nC++: vtkSortedTableStreamer *NewInstance()\n\nTest the internal structure and make sure that they behave as\nexpected. Return true if everything is OK, false otherwise.\n"},
  {"FillInputPortInformation", PyvtkSortedTableStreamer_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nOnly one input which is the table to sort\n"},
  {"GetBlock", PyvtkSortedTableStreamer_GetBlock, METH_VARARGS,
   "V.GetBlock() -> int\nC++: virtual vtkIdType GetBlock()\n\nBlock index used to select a data range\n"},
  {"SetBlock", PyvtkSortedTableStreamer_SetBlock, METH_VARARGS,
   "V.SetBlock(int)\nC++: virtual void SetBlock(vtkIdType _arg)\n\nBlock index used to select a data range\n"},
  {"GetBlockSize", PyvtkSortedTableStreamer_GetBlockSize, METH_VARARGS,
   "V.GetBlockSize() -> int\nC++: virtual vtkIdType GetBlockSize()\n\nSet the block size. Default value is 1024\n"},
  {"SetBlockSize", PyvtkSortedTableStreamer_SetBlockSize, METH_VARARGS,
   "V.SetBlockSize(int)\nC++: virtual void SetBlockSize(vtkIdType _arg)\n\nSet the block size. Default value is 1024\n"},
  {"GetSelectedComponent", PyvtkSortedTableStreamer_GetSelectedComponent, METH_VARARGS,
   "V.GetSelectedComponent() -> int\nC++: virtual int GetSelectedComponent()\n\nChoose on which column the sort operation should occur\n"},
  {"SetSelectedComponent", PyvtkSortedTableStreamer_SetSelectedComponent, METH_VARARGS,
   "V.SetSelectedComponent(int)\nC++: virtual void SetSelectedComponent(int _arg)\n\nChoose on which column the sort operation should occur\n"},
  {"SetController", PyvtkSortedTableStreamer_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the MPI controller used for gathering.\n"},
  {"GetController", PyvtkSortedTableStreamer_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the MPI controller used for gathering.\n"},
  {"GetColumnNameToSort", PyvtkSortedTableStreamer_GetColumnNameToSort, METH_VARARGS,
   "V.GetColumnNameToSort() -> string\nC++: const char *GetColumnNameToSort()\n\nChoose on which column the sort operation should occur\n"},
  {"SetColumnNameToSort", PyvtkSortedTableStreamer_SetColumnNameToSort, METH_VARARGS,
   "V.SetColumnNameToSort(string)\nC++: void SetColumnNameToSort(const char *columnName)\n\n"},
  {"SetInvertOrder", PyvtkSortedTableStreamer_SetInvertOrder, METH_VARARGS,
   "V.SetInvertOrder(int)\nC++: void SetInvertOrder(int newValue)\n\n"},
  {"GetInvertOrder", PyvtkSortedTableStreamer_GetInvertOrder, METH_VARARGS,
   "V.GetInvertOrder() -> int\nC++: virtual int GetInvertOrder()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSortedTableStreamer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkSortedTableStreamer", // tp_name
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
  PyvtkSortedTableStreamer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSortedTableStreamer_StaticNew()
{
  return vtkSortedTableStreamer::New();
}

PyObject *PyvtkSortedTableStreamer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSortedTableStreamer_Type, PyvtkSortedTableStreamer_Methods,
    "vtkSortedTableStreamer",
 &PyvtkSortedTableStreamer_StaticNew);

  PyTypeObject *pytype = &PyvtkSortedTableStreamer_Type;

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

void PyVTKAddFile_vtkSortedTableStreamer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSortedTableStreamer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSortedTableStreamer", o) != 0)
  {
    Py_DECREF(o);
  }

}

