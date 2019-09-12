// python wrapper for vtkPartitionedDataSet
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
#include "vtkPartitionedDataSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPartitionedDataSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPartitionedDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectTree_ClassNew
extern "C" { PyObject *PyvtkDataObjectTree_ClassNew(); }
#define DECLARED_PyvtkDataObjectTree_ClassNew
#endif

static const char *PyvtkPartitionedDataSet_Doc =
  "vtkPartitionedDataSet - composite dataset to encapsulates a dataset\nconsisting of partitions.\n\n"
  "Superclass: vtkDataObjectTree\n\n"
  "A vtkPartitionedDataSet dataset groups multiple datasets together.\n"
  "For example, say a simulation running in parallel on 16 processes\n"
  "generated 16 datasets that when considering together form a whole\n"
  "dataset. These are referred to as the partitions of the whole\n"
  "dataset. Now imagine that we want to load a volume of 16 partitions\n"
  "in a visualization cluster of 4 nodes. Each node could get 4\n"
  "partitions, not necessarily forming a whole rectangular region. In\n"
  "this case, it is not possible to append the 4 partitions together\n"
  "into a vtkImageData. We can then collect these 4 partitions together\n"
  "using a vtkPartitionedDataSet.\n\n"
  "It is required that all non-empty partitions have the same arrays and\n"
  "that they can be processed together as a whole by the same kind of\n"
  "filter. However, it is not required that they are of the same type.\n"
  "For example, it is possible to have structured datasets together with\n"
  "unstructured datasets as long as they are compatible meshes (i.e. can\n"
  "be processed together for the same kind of filter).\n\n";


static PyObject *
PyvtkPartitionedDataSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPartitionedDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPartitionedDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPartitionedDataSet *tempr = vtkPartitionedDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPartitionedDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPartitionedDataSet::NewInstance());

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
PyvtkPartitionedDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkPartitionedDataSet::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSet_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  unsigned int temp0;
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
      op->vtkPartitionedDataSet::SetNumberOfPartitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSet_GetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitions() :
      op->vtkPartitionedDataSet::GetNumberOfPartitions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSet_GetPartition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetPartition(temp0) :
      op->vtkPartitionedDataSet::GetPartition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSet_GetPartitionAsDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartitionAsDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetPartitionAsDataObject(temp0) :
      op->vtkPartitionedDataSet::GetPartitionAsDataObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSet_SetPartition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  unsigned int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetPartition(temp0, temp1);
    }
    else
    {
      op->vtkPartitionedDataSet::SetPartition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSet_HasMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkPartitionedDataSet::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionedDataSet_HasMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkPartitionedDataSet::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSet_HasMetaData_Methods[] = {
  {nullptr, PyvtkPartitionedDataSet_HasMetaData_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkPartitionedDataSet_HasMetaData_s2, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPartitionedDataSet_HasMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPartitionedDataSet_HasMetaData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HasMetaData");
  return nullptr;
}



static PyObject *
PyvtkPartitionedDataSet_GetMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkPartitionedDataSet::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionedDataSet_GetMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSet *op = static_cast<vtkPartitionedDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkPartitionedDataSet::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSet_GetMetaData_Methods[] = {
  {nullptr, PyvtkPartitionedDataSet_GetMetaData_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkPartitionedDataSet_GetMetaData_s2, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPartitionedDataSet_GetMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPartitionedDataSet_GetMetaData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMetaData");
  return nullptr;
}



static PyObject *
PyvtkPartitionedDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkPartitionedDataSet *tempr = vtkPartitionedDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionedDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPartitionedDataSet *tempr = vtkPartitionedDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSet_GetData_Methods[] = {
  {nullptr, PyvtkPartitionedDataSet_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkPartitionedDataSet_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPartitionedDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPartitionedDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkPartitionedDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyMethodDef PyvtkPartitionedDataSet_Methods[] = {
  {"IsTypeOf", PyvtkPartitionedDataSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPartitionedDataSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPartitionedDataSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPartitionedDataSet\nC++: static vtkPartitionedDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPartitionedDataSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPartitionedDataSet\nC++: vtkPartitionedDataSet *NewInstance()\n\n"},
  {"GetDataObjectType", PyvtkPartitionedDataSet_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {"SetNumberOfPartitions", PyvtkPartitionedDataSet_SetNumberOfPartitions, METH_VARARGS,
   "V.SetNumberOfPartitions(int)\nC++: void SetNumberOfPartitions(unsigned int numPartitions)\n\nSet the number of partitionss. This will cause allocation if the\nnew number of partitions is greater than the current size. All\nnew partitions are initialized to null.\n"},
  {"GetNumberOfPartitions", PyvtkPartitionedDataSet_GetNumberOfPartitions, METH_VARARGS,
   "V.GetNumberOfPartitions() -> int\nC++: unsigned int GetNumberOfPartitions()\n\nReturns the number of partitions.\n"},
  {"GetPartition", PyvtkPartitionedDataSet_GetPartition, METH_VARARGS,
   "V.GetPartition(int) -> vtkDataSet\nC++: vtkDataSet *GetPartition(unsigned int idx)\n\nReturns the partition at the given index.\n"},
  {"GetPartitionAsDataObject", PyvtkPartitionedDataSet_GetPartitionAsDataObject, METH_VARARGS,
   "V.GetPartitionAsDataObject(int) -> vtkDataObject\nC++: vtkDataObject *GetPartitionAsDataObject(unsigned int idx)\n\nReturns the partition at the given index.\n"},
  {"SetPartition", PyvtkPartitionedDataSet_SetPartition, METH_VARARGS,
   "V.SetPartition(int, vtkDataObject)\nC++: void SetPartition(unsigned int idx, vtkDataObject *partition)\n\nSets the data object as the given partition. The total number of\npartitions will be resized to fit the requested partition no.\n"},
  {"HasMetaData", PyvtkPartitionedDataSet_HasMetaData, METH_VARARGS,
   "V.HasMetaData(int) -> int\nC++: int HasMetaData(unsigned int idx)\nV.HasMetaData(vtkCompositeDataIterator) -> int\nC++: int HasMetaData(vtkCompositeDataIterator *iter) override;\n\nReturns true if meta-data is available for a given partition.\n"},
  {"GetMetaData", PyvtkPartitionedDataSet_GetMetaData, METH_VARARGS,
   "V.GetMetaData(int) -> vtkInformation\nC++: vtkInformation *GetMetaData(unsigned int idx)\nV.GetMetaData(vtkCompositeDataIterator) -> vtkInformation\nC++: vtkInformation *GetMetaData(vtkCompositeDataIterator *iter)\n    override;\n\nReturns the meta-data for the partition. If none is already\npresent, a new vtkInformation object will be allocated. Use\nHasMetaData to avoid allocating vtkInformation objects.\n"},
  {"GetData", PyvtkPartitionedDataSet_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkPartitionedDataSet\nC++: static vtkPartitionedDataSet *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkPartitionedDataSet\nC++: static vtkPartitionedDataSet *GetData(\n    vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPartitionedDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPartitionedDataSet", // tp_name
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
  PyvtkPartitionedDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPartitionedDataSet_StaticNew()
{
  return vtkPartitionedDataSet::New();
}

PyObject *PyvtkPartitionedDataSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPartitionedDataSet_Type, PyvtkPartitionedDataSet_Methods,
    "vtkPartitionedDataSet",
 &PyvtkPartitionedDataSet_StaticNew);

  PyTypeObject *pytype = &PyvtkPartitionedDataSet_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectTree_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPartitionedDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPartitionedDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPartitionedDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

