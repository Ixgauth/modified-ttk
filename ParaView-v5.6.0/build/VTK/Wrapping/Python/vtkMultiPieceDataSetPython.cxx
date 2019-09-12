// python wrapper for vtkMultiPieceDataSet
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
#include "vtkMultiPieceDataSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiPieceDataSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMultiPieceDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkPartitionedDataSet_ClassNew
extern "C" { PyObject *PyvtkPartitionedDataSet_ClassNew(); }
#define DECLARED_PyvtkPartitionedDataSet_ClassNew
#endif

static const char *PyvtkMultiPieceDataSet_Doc =
  "vtkMultiPieceDataSet - composite dataset to encapsulates pieces of\ndataset.\n\n"
  "Superclass: vtkPartitionedDataSet\n\n"
  "A vtkMultiPieceDataSet dataset groups multiple data pieces together.\n"
  "For example, say that a simulation broke a volume into 16 piece so\n"
  "that each piece can be processed with 1 process in parallel. We want\n"
  "to load this volume in a visualization cluster of 4 nodes. Each node\n"
  "will get 4 pieces, not necessarily forming a whole rectangular piece.\n"
  "In this case, it is not possible to append the 4 pieces together into\n"
  "a vtkImageData. In this case, these 4 pieces can be collected\n"
  "together using a vtkMultiPieceDataSet. Note that vtkMultiPieceDataSet\n"
  "is intended to be included in other composite datasets eg.\n"
  "vtkMultiBlockDataSet, vtkHierarchicalBoxDataSet. Hence the lack of\n"
  "algorithms producting vtkMultiPieceDataSet.\n\n";


static PyObject *
PyvtkMultiPieceDataSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiPieceDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiPieceDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiPieceDataSet *tempr = vtkMultiPieceDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiPieceDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiPieceDataSet::NewInstance());

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
PyvtkMultiPieceDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkMultiPieceDataSet::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPieces(temp0);
    }
    else
    {
      op->vtkMultiPieceDataSet::SetNumberOfPieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkMultiPieceDataSet::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetPiece(temp0) :
      op->vtkMultiPieceDataSet::GetPiece(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_GetPieceAsDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceAsDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetPieceAsDataObject(temp0) :
      op->vtkMultiPieceDataSet::GetPieceAsDataObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiPieceDataSet *op = static_cast<vtkMultiPieceDataSet *>(vp);

  unsigned int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetPiece(temp0, temp1);
    }
    else
    {
      op->vtkMultiPieceDataSet::SetPiece(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiPieceDataSet_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkMultiPieceDataSet *tempr = vtkMultiPieceDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiPieceDataSet_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkMultiPieceDataSet *tempr = vtkMultiPieceDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiPieceDataSet_GetData_Methods[] = {
  {nullptr, PyvtkMultiPieceDataSet_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkMultiPieceDataSet_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiPieceDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiPieceDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMultiPieceDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyMethodDef PyvtkMultiPieceDataSet_Methods[] = {
  {"IsTypeOf", PyvtkMultiPieceDataSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMultiPieceDataSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMultiPieceDataSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMultiPieceDataSet\nC++: static vtkMultiPieceDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMultiPieceDataSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMultiPieceDataSet\nC++: vtkMultiPieceDataSet *NewInstance()\n\n"},
  {"GetDataObjectType", PyvtkMultiPieceDataSet_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {"SetNumberOfPieces", PyvtkMultiPieceDataSet_SetNumberOfPieces, METH_VARARGS,
   "V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(unsigned int numpieces)\n\nSet the number of pieces. This will cause allocation if the new\nnumber of pieces is greater than the current size. All new pieces\nare initialized to null.\n"},
  {"GetNumberOfPieces", PyvtkMultiPieceDataSet_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: unsigned int GetNumberOfPieces()\n\nReturns the number of pieces.\n"},
  {"GetPiece", PyvtkMultiPieceDataSet_GetPiece, METH_VARARGS,
   "V.GetPiece(int) -> vtkDataSet\nC++: vtkDataSet *GetPiece(unsigned int pieceno)\n\nReturns the piece at the given index.\n"},
  {"GetPieceAsDataObject", PyvtkMultiPieceDataSet_GetPieceAsDataObject, METH_VARARGS,
   "V.GetPieceAsDataObject(int) -> vtkDataObject\nC++: vtkDataObject *GetPieceAsDataObject(unsigned int pieceno)\n\nReturns the piece at the given index.\n"},
  {"SetPiece", PyvtkMultiPieceDataSet_SetPiece, METH_VARARGS,
   "V.SetPiece(int, vtkDataObject)\nC++: void SetPiece(unsigned int pieceno, vtkDataObject *piece)\n\nSets the data object as the given piece. The total number of\npieces will be resized to fit the requested piece no.\n"},
  {"GetData", PyvtkMultiPieceDataSet_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkMultiPieceDataSet\nC++: static vtkMultiPieceDataSet *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkMultiPieceDataSet\nC++: static vtkMultiPieceDataSet *GetData(vtkInformationVector *v,\n     int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMultiPieceDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkMultiPieceDataSet", // tp_name
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
  PyvtkMultiPieceDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMultiPieceDataSet_StaticNew()
{
  return vtkMultiPieceDataSet::New();
}

PyObject *PyvtkMultiPieceDataSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMultiPieceDataSet_Type, PyvtkMultiPieceDataSet_Methods,
    "vtkMultiPieceDataSet",
 &PyvtkMultiPieceDataSet_StaticNew);

  PyTypeObject *pytype = &PyvtkMultiPieceDataSet_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPartitionedDataSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMultiPieceDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiPieceDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiPieceDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

