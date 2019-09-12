// python wrapper for vtkCompositeDataSet
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
#include "vtkCompositeDataSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeDataSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static const char *PyvtkCompositeDataSet_Doc =
  "vtkCompositeDataSet - abstract superclass for composite (multi-block\nor AMR) datasets\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkCompositeDataSet is an abstract class that represents a collection\n"
  "of datasets (including other composite datasets). It provides an\n"
  "interface to access the datasets through iterators.\n"
  "vtkCompositeDataSet provides methods that are used by subclasses to\n"
  "store the datasets. vtkCompositeDataSet provides the datastructure\n"
  "for a full tree representation. Subclasses provide the semantics for\n"
  "it and control how this tree is built.\n\n"
  "@sa\n"
  "vtkCompositeDataIterator\n\n";


static PyObject *
PyvtkCompositeDataSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeDataSet *tempr = vtkCompositeDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataSet::NewInstance());

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
PyvtkCompositeDataSet_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkCompositeDataIterator *tempr = op->NewIterator();

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
PyvtkCompositeDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkCompositeDataSet::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkCompositeDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
  {
    op->CopyStructure(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    op->SetDataSet(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    vtkDataObject *tempr = op->GetDataSet(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCompositeDataSet::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkCompositeDataSet *tempr = vtkCompositeDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkCompositeDataSet *tempr = vtkCompositeDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataSet_GetData_Methods[] = {
  {nullptr, PyvtkCompositeDataSet_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkCompositeDataSet_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCompositeDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositeDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositeDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkCompositeDataSet_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCompositeDataSet::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkCompositeDataSet::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkCompositeDataSet::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataSet *op = static_cast<vtkCompositeDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkCompositeDataSet::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NAME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkCompositeDataSet::NAME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataSet_CURRENT_PROCESS_CAN_LOAD_BLOCK(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CURRENT_PROCESS_CAN_LOAD_BLOCK");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkCompositeDataSet::CURRENT_PROCESS_CAN_LOAD_BLOCK();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataSet_Methods[] = {
  {"IsTypeOf", PyvtkCompositeDataSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeDataSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeDataSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeDataSet\nC++: static vtkCompositeDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeDataSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *NewInstance()\n\n"},
  {"NewIterator", PyvtkCompositeDataSet_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkCompositeDataIterator\nC++: virtual vtkCompositeDataIterator *NewIterator()\n\nReturn a new iterator (the iterator has to be deleted by user).\n"},
  {"GetDataObjectType", PyvtkCompositeDataSet_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {"CopyStructure", PyvtkCompositeDataSet_CopyStructure, METH_VARARGS,
   "V.CopyStructure(vtkCompositeDataSet)\nC++: virtual void CopyStructure(vtkCompositeDataSet *input)\n\nCopies the tree structure from the input. All pointers to\nnon-composite data objects are initialized to nullptr. This also\nshallow copies the meta data associated with all the nodes.\n"},
  {"SetDataSet", PyvtkCompositeDataSet_SetDataSet, METH_VARARGS,
   "V.SetDataSet(vtkCompositeDataIterator, vtkDataObject)\nC++: virtual void SetDataSet(vtkCompositeDataIterator *iter,\n    vtkDataObject *dataObj)\n\nSets the data set at the location pointed by the iterator. The\niterator does not need to be iterating over this dataset itself.\nIt can be any composite datasite with similar structure (achieved\nby using CopyStructure).\n"},
  {"GetDataSet", PyvtkCompositeDataSet_GetDataSet, METH_VARARGS,
   "V.GetDataSet(vtkCompositeDataIterator) -> vtkDataObject\nC++: virtual vtkDataObject *GetDataSet(\n    vtkCompositeDataIterator *iter)\n\nReturns the dataset located at the positiong pointed by the\niterator. The iterator does not need to be iterating over this\ndataset itself. It can be an iterator for composite dataset with\nsimilar structure (achieved by using CopyStructure).\n"},
  {"GetActualMemorySize", PyvtkCompositeDataSet_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated.\n"},
  {"GetData", PyvtkCompositeDataSet_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkCompositeDataSet\nC++: static vtkCompositeDataSet *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkCompositeDataSet\nC++: static vtkCompositeDataSet *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"Initialize", PyvtkCompositeDataSet_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nRestore data object to initial state,\n"},
  {"ShallowCopy", PyvtkCompositeDataSet_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"DeepCopy", PyvtkCompositeDataSet_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"GetNumberOfPoints", PyvtkCompositeDataSet_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nReturns the total number of points of all blocks. This will\niterate over all blocks and call GetNumberOfPoints() so it might\nbe expansive.\n"},
  {"NAME", PyvtkCompositeDataSet_NAME, METH_VARARGS,
   "V.NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *NAME()\n\nKey used to put node name in the meta-data associated with a\nnode.\n"},
  {"CURRENT_PROCESS_CAN_LOAD_BLOCK", PyvtkCompositeDataSet_CURRENT_PROCESS_CAN_LOAD_BLOCK, METH_VARARGS,
   "V.CURRENT_PROCESS_CAN_LOAD_BLOCK() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CURRENT_PROCESS_CAN_LOAD_BLOCK(\n    )\n\nKey used to indicate that the current process can load the data\nin the node.  Used for parallel readers where the nodes are\nassigned to the processes by the reader to indicate further down\nthe pipeline which nodes will be on which processes.\n***THIS IS AN EXPERIMENTAL KEY SUBJECT TO CHANGE WITHOUT\n    NOTICE***\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkCompositeDataSet", // tp_name
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
  PyvtkCompositeDataSet_Doc, // tp_doc
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

PyObject *PyvtkCompositeDataSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeDataSet_Type, PyvtkCompositeDataSet_Methods,
    "vtkCompositeDataSet",
 nullptr);

  PyTypeObject *pytype = &PyvtkCompositeDataSet_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

