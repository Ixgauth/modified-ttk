// python wrapper for vtkPartitionedDataSetCollection
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
#include "vtkPartitionedDataSetCollection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPartitionedDataSetCollection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPartitionedDataSetCollection_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectTree_ClassNew
extern "C" { PyObject *PyvtkDataObjectTree_ClassNew(); }
#define DECLARED_PyvtkDataObjectTree_ClassNew
#endif

static const char *PyvtkPartitionedDataSetCollection_Doc =
  "vtkPartitionedDataSetCollection - Composite dataset that groups\ndatasets as a collection.\n\n"
  "Superclass: vtkDataObjectTree\n\n"
  "vtkPartitionedDataSetCollection is a vtkCompositeDataSet that stores\n"
  "a collection of vtkPartitionedDataSets. These items can represent\n"
  "different concepts depending on the context. For example, they can\n"
  "represent region of different materials in a simulation or parts in\n"
  "an assembly. It is not requires that items have anything in common.\n"
  "For example, they can have completely different point or cell arrays.\n\n";


static PyObject *
PyvtkPartitionedDataSetCollection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPartitionedDataSetCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPartitionedDataSetCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPartitionedDataSetCollection *tempr = vtkPartitionedDataSetCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPartitionedDataSetCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPartitionedDataSetCollection::NewInstance());

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
PyvtkPartitionedDataSetCollection_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkPartitionedDataSetCollection::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_SetNumberOfPartitionedDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitionedDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPartitionedDataSets(temp0);
    }
    else
    {
      op->vtkPartitionedDataSetCollection::SetNumberOfPartitionedDataSets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetNumberOfPartitionedDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitionedDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitionedDataSets() :
      op->vtkPartitionedDataSetCollection::GetNumberOfPartitionedDataSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_GetPartitionedDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartitionedDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPartitionedDataSet *tempr = (ap.IsBound() ?
      op->GetPartitionedDataSet(temp0) :
      op->vtkPartitionedDataSetCollection::GetPartitionedDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_SetPartitionedDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartitionedDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  vtkPartitionedDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPartitionedDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetPartitionedDataSet(temp0, temp1);
    }
    else
    {
      op->vtkPartitionedDataSetCollection::SetPartitionedDataSet(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_RemovePartitionedDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePartitionedDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemovePartitionedDataSet(temp0);
    }
    else
    {
      op->vtkPartitionedDataSetCollection::RemovePartitionedDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetCollection_HasMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkPartitionedDataSetCollection::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionedDataSetCollection_HasMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkPartitionedDataSetCollection::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSetCollection_HasMetaData_Methods[] = {
  {nullptr, PyvtkPartitionedDataSetCollection_HasMetaData_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkPartitionedDataSetCollection_HasMetaData_s2, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPartitionedDataSetCollection_HasMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPartitionedDataSetCollection_HasMetaData_Methods;
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
PyvtkPartitionedDataSetCollection_GetMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkPartitionedDataSetCollection::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionedDataSetCollection_GetMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetCollection *op = static_cast<vtkPartitionedDataSetCollection *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkPartitionedDataSetCollection::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSetCollection_GetMetaData_Methods[] = {
  {nullptr, PyvtkPartitionedDataSetCollection_GetMetaData_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkPartitionedDataSetCollection_GetMetaData_s2, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPartitionedDataSetCollection_GetMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPartitionedDataSetCollection_GetMetaData_Methods;
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
PyvtkPartitionedDataSetCollection_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkPartitionedDataSetCollection *tempr = vtkPartitionedDataSetCollection::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionedDataSetCollection_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPartitionedDataSetCollection *tempr = vtkPartitionedDataSetCollection::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSetCollection_GetData_Methods[] = {
  {nullptr, PyvtkPartitionedDataSetCollection_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkPartitionedDataSetCollection_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPartitionedDataSetCollection_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPartitionedDataSetCollection_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkPartitionedDataSetCollection_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyMethodDef PyvtkPartitionedDataSetCollection_Methods[] = {
  {"IsTypeOf", PyvtkPartitionedDataSetCollection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPartitionedDataSetCollection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPartitionedDataSetCollection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPartitionedDataSetCollection\nC++: static vtkPartitionedDataSetCollection *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPartitionedDataSetCollection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPartitionedDataSetCollection\nC++: vtkPartitionedDataSetCollection *NewInstance()\n\n"},
  {"GetDataObjectType", PyvtkPartitionedDataSetCollection_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {"SetNumberOfPartitionedDataSets", PyvtkPartitionedDataSetCollection_SetNumberOfPartitionedDataSets, METH_VARARGS,
   "V.SetNumberOfPartitionedDataSets(int)\nC++: void SetNumberOfPartitionedDataSets(unsigned int numDataSets)\n\nSet the number of blocks. This will cause allocation if the new\nnumber of blocks is greater than the current size. All new blocks\nare initialized to null.\n"},
  {"GetNumberOfPartitionedDataSets", PyvtkPartitionedDataSetCollection_GetNumberOfPartitionedDataSets, METH_VARARGS,
   "V.GetNumberOfPartitionedDataSets() -> int\nC++: unsigned int GetNumberOfPartitionedDataSets()\n\nReturns the number of blocks.\n"},
  {"GetPartitionedDataSet", PyvtkPartitionedDataSetCollection_GetPartitionedDataSet, METH_VARARGS,
   "V.GetPartitionedDataSet(int) -> vtkPartitionedDataSet\nC++: vtkPartitionedDataSet *GetPartitionedDataSet(\n    unsigned int idx)\n\nReturns the block at the given index. It is recommended that one\nuses the iterators to iterate over composite datasets rather than\nusing this API.\n"},
  {"SetPartitionedDataSet", PyvtkPartitionedDataSetCollection_SetPartitionedDataSet, METH_VARARGS,
   "V.SetPartitionedDataSet(int, vtkPartitionedDataSet)\nC++: void SetPartitionedDataSet(unsigned int idx,\n    vtkPartitionedDataSet *dataset)\n\nSets the data object as the given block. The total number of\nblocks will be resized to fit the requested block no.\n"},
  {"RemovePartitionedDataSet", PyvtkPartitionedDataSetCollection_RemovePartitionedDataSet, METH_VARARGS,
   "V.RemovePartitionedDataSet(int)\nC++: void RemovePartitionedDataSet(unsigned int idx)\n\nRemove the given block from the dataset.\n"},
  {"HasMetaData", PyvtkPartitionedDataSetCollection_HasMetaData, METH_VARARGS,
   "V.HasMetaData(int) -> int\nC++: int HasMetaData(unsigned int idx)\nV.HasMetaData(vtkCompositeDataIterator) -> int\nC++: int HasMetaData(vtkCompositeDataIterator *iter) override;\n\nReturns true if meta-data is available for a given block.\n"},
  {"GetMetaData", PyvtkPartitionedDataSetCollection_GetMetaData, METH_VARARGS,
   "V.GetMetaData(int) -> vtkInformation\nC++: vtkInformation *GetMetaData(unsigned int idx)\nV.GetMetaData(vtkCompositeDataIterator) -> vtkInformation\nC++: vtkInformation *GetMetaData(vtkCompositeDataIterator *iter)\n    override;\n\nReturns the meta-data for the block. If none is already present,\na new vtkInformation object will be allocated. Use HasMetaData to\navoid allocating vtkInformation objects.\n"},
  {"GetData", PyvtkPartitionedDataSetCollection_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkPartitionedDataSetCollection\nC++: static vtkPartitionedDataSetCollection *GetData(\n    vtkInformation *info)\nV.GetData(vtkInformationVector, int)\n    -> vtkPartitionedDataSetCollection\nC++: static vtkPartitionedDataSetCollection *GetData(\n    vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPartitionedDataSetCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPartitionedDataSetCollection", // tp_name
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
  PyvtkPartitionedDataSetCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPartitionedDataSetCollection_StaticNew()
{
  return vtkPartitionedDataSetCollection::New();
}

PyObject *PyvtkPartitionedDataSetCollection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPartitionedDataSetCollection_Type, PyvtkPartitionedDataSetCollection_Methods,
    "vtkPartitionedDataSetCollection",
 &PyvtkPartitionedDataSetCollection_StaticNew);

  PyTypeObject *pytype = &PyvtkPartitionedDataSetCollection_Type;

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

void PyVTKAddFile_vtkPartitionedDataSetCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPartitionedDataSetCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPartitionedDataSetCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

