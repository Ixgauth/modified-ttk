// python wrapper for vtkExtentRCBPartitioner
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
#include "vtkExtentRCBPartitioner.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtentRCBPartitioner(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtentRCBPartitioner_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkExtentRCBPartitioner_Doc =
  "vtkExtentRCBPartitioner -  This method partitions a global extent to\nN partitions where N is a user\n supplied parameter.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkExtentRCBPartitioner_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtentRCBPartitioner::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtentRCBPartitioner::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtentRCBPartitioner *tempr = vtkExtentRCBPartitioner::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtentRCBPartitioner *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtentRCBPartitioner::NewInstance());

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
PyvtkExtentRCBPartitioner_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPartitions(temp0);
    }
    else
    {
      op->vtkExtentRCBPartitioner::SetNumberOfPartitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_SetGlobalExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetGlobalExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExtentRCBPartitioner::SetGlobalExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtentRCBPartitioner_SetGlobalExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetGlobalExtent(temp0);
    }
    else
    {
      op->vtkExtentRCBPartitioner::SetGlobalExtent(temp0);
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
PyvtkExtentRCBPartitioner_SetGlobalExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtentRCBPartitioner_SetGlobalExtent_s1(self, args);
    case 1:
      return PyvtkExtentRCBPartitioner_SetGlobalExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGlobalExtent");
  return nullptr;
}



static PyObject *
PyvtkExtentRCBPartitioner_SetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDuplicateNodes(temp0);
    }
    else
    {
      op->vtkExtentRCBPartitioner::SetDuplicateNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDuplicateNodes() :
      op->vtkExtentRCBPartitioner::GetDuplicateNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_DuplicateNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateNodesOn();
    }
    else
    {
      op->vtkExtentRCBPartitioner::DuplicateNodesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_DuplicateNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateNodesOff();
    }
    else
    {
      op->vtkExtentRCBPartitioner::DuplicateNodesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_SetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfGhostLayers(temp0);
    }
    else
    {
      op->vtkExtentRCBPartitioner::SetNumberOfGhostLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGhostLayers() :
      op->vtkExtentRCBPartitioner::GetNumberOfGhostLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetNumExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumExtents() :
      op->vtkExtentRCBPartitioner::GetNumExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_Partition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Partition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Partition();
    }
    else
    {
      op->vtkExtentRCBPartitioner::Partition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentRCBPartitioner_GetPartitionExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartitionExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentRCBPartitioner *op = static_cast<vtkExtentRCBPartitioner *>(vp);

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetPartitionExtent(temp0, temp1);
    }
    else
    {
      op->vtkExtentRCBPartitioner::GetPartitionExtent(temp0, temp1);
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

static PyMethodDef PyvtkExtentRCBPartitioner_Methods[] = {
  {"IsTypeOf", PyvtkExtentRCBPartitioner_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtentRCBPartitioner_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtentRCBPartitioner_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtentRCBPartitioner\nC++: static vtkExtentRCBPartitioner *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtentRCBPartitioner_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtentRCBPartitioner\nC++: vtkExtentRCBPartitioner *NewInstance()\n\n"},
  {"SetNumberOfPartitions", PyvtkExtentRCBPartitioner_SetNumberOfPartitions, METH_VARARGS,
   "V.SetNumberOfPartitions(int)\nC++: void SetNumberOfPartitions(const int N)\n\nSet/Get the number of requested partitions\n"},
  {"SetGlobalExtent", PyvtkExtentRCBPartitioner_SetGlobalExtent, METH_VARARGS,
   "V.SetGlobalExtent(int, int, int, int, int, int)\nC++: void SetGlobalExtent(int imin, int imax, int jmin, int jmax,\n    int kmin, int kmax)\nV.SetGlobalExtent([int, int, int, int, int, int])\nC++: void SetGlobalExtent(int ext[6])\n\nSet/Get the global extent array to be partitioned. The global\nextent is packed as follows: [imin,imax,jmin,jmax,kmin,kmax]\n"},
  {"SetDuplicateNodes", PyvtkExtentRCBPartitioner_SetDuplicateNodes, METH_VARARGS,
   "V.SetDuplicateNodes(int)\nC++: virtual void SetDuplicateNodes(vtkTypeBool _arg)\n\nOn/Off DuplicateNodes between partitions. Default is On.\n"},
  {"GetDuplicateNodes", PyvtkExtentRCBPartitioner_GetDuplicateNodes, METH_VARARGS,
   "V.GetDuplicateNodes() -> int\nC++: virtual vtkTypeBool GetDuplicateNodes()\n\nOn/Off DuplicateNodes between partitions. Default is On.\n"},
  {"DuplicateNodesOn", PyvtkExtentRCBPartitioner_DuplicateNodesOn, METH_VARARGS,
   "V.DuplicateNodesOn()\nC++: virtual void DuplicateNodesOn()\n\nOn/Off DuplicateNodes between partitions. Default is On.\n"},
  {"DuplicateNodesOff", PyvtkExtentRCBPartitioner_DuplicateNodesOff, METH_VARARGS,
   "V.DuplicateNodesOff()\nC++: virtual void DuplicateNodesOff()\n\nOn/Off DuplicateNodes between partitions. Default is On.\n"},
  {"SetNumberOfGhostLayers", PyvtkExtentRCBPartitioner_SetNumberOfGhostLayers, METH_VARARGS,
   "V.SetNumberOfGhostLayers(int)\nC++: virtual void SetNumberOfGhostLayers(int _arg)\n\nSet/Get macro for the number of ghost layers.\n"},
  {"GetNumberOfGhostLayers", PyvtkExtentRCBPartitioner_GetNumberOfGhostLayers, METH_VARARGS,
   "V.GetNumberOfGhostLayers() -> int\nC++: virtual int GetNumberOfGhostLayers()\n\nSet/Get macro for the number of ghost layers.\n"},
  {"GetNumExtents", PyvtkExtentRCBPartitioner_GetNumExtents, METH_VARARGS,
   "V.GetNumExtents() -> int\nC++: virtual int GetNumExtents()\n\nReturns the number of extents.\n"},
  {"Partition", PyvtkExtentRCBPartitioner_Partition, METH_VARARGS,
   "V.Partition()\nC++: void Partition()\n\nPartitions the extent\n"},
  {"GetPartitionExtent", PyvtkExtentRCBPartitioner_GetPartitionExtent, METH_VARARGS,
   "V.GetPartitionExtent(int, [int, int, int, int, int, int])\nC++: void GetPartitionExtent(const int idx, int ext[6])\n\nReturns the extent of the partition corresponding to the given\nID.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtentRCBPartitioner_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkExtentRCBPartitioner", // tp_name
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
  PyvtkExtentRCBPartitioner_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtentRCBPartitioner_StaticNew()
{
  return vtkExtentRCBPartitioner::New();
}

PyObject *PyvtkExtentRCBPartitioner_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtentRCBPartitioner_Type, PyvtkExtentRCBPartitioner_Methods,
    "vtkExtentRCBPartitioner",
 &PyvtkExtentRCBPartitioner_StaticNew);

  PyTypeObject *pytype = &PyvtkExtentRCBPartitioner_Type;

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

void PyVTKAddFile_vtkExtentRCBPartitioner(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtentRCBPartitioner_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtentRCBPartitioner", o) != 0)
  {
    Py_DECREF(o);
  }

}

