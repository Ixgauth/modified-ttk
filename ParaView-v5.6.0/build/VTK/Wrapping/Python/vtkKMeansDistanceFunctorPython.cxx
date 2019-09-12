// python wrapper for vtkKMeansDistanceFunctor
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
#include "vtkKMeansDistanceFunctor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkKMeansDistanceFunctor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkKMeansDistanceFunctor_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkKMeansDistanceFunctor_Doc =
  "vtkKMeansDistanceFunctor - measure distance from k-means cluster\ncenters\n\n"
  "Superclass: vtkObject\n\n"
  "This is an abstract class (with a default concrete subclass) that\n"
  "implements algorithms used by the vtkKMeansStatistics filter that\n"
  "rely on a distance metric. If you wish to use a non-Euclidean\n"
  "distance metric (this could include working with strings that do not\n"
  "have a Euclidean distance metric, implementing k-mediods, or trying\n"
  "distance metrics in norms other than L2), you should subclass\n"
  "vtkKMeansDistanceFunctor.\n\n";


static PyObject *
PyvtkKMeansDistanceFunctor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkKMeansDistanceFunctor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKMeansDistanceFunctor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkKMeansDistanceFunctor *tempr = vtkKMeansDistanceFunctor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKMeansDistanceFunctor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKMeansDistanceFunctor::NewInstance());

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
PyvtkKMeansDistanceFunctor_GetEmptyTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEmptyTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariantArray *tempr = (ap.IsBound() ?
      op->GetEmptyTuple(temp0) :
      op->vtkKMeansDistanceFunctor::GetEmptyTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_PairwiseUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PairwiseUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = nullptr;
  vtkIdType temp1;
  vtkVariantArray *temp2 = nullptr;
  vtkIdType temp3;
  vtkIdType temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkVariantArray") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->PairwiseUpdate(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::PairwiseUpdate(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_PerturbElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerturbElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = nullptr;
  vtkTable *temp1 = nullptr;
  vtkIdType temp2;
  vtkIdType temp3;
  vtkIdType temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->PerturbElement(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::PerturbElement(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_AllocateElementArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateElementArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->AllocateElementArray(temp0) :
      op->vtkKMeansDistanceFunctor::AllocateElementArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_DeallocateElementArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeallocateElementArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->DeallocateElementArray(temp0);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::DeallocateElementArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_CreateCoordinateArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCoordinateArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->CreateCoordinateArray() :
      op->vtkKMeansDistanceFunctor::CreateCoordinateArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_PackElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PackElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = nullptr;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetBuffer(temp1, &pbuf1))
  {
    if (ap.IsBound())
    {
      op->PackElements(temp0, temp1);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::PackElements(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_UnPackElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPackElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = nullptr;
  vtkTable *temp1 = nullptr;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = VTK_PYBUFFER_INITIALIZER;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetBuffer(temp2, &pbuf2) &&
      ap.GetBuffer(temp3, &pbuf3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->UnPackElements(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::UnPackElements(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf2.obj != 0)
  {
    PyBuffer_Release(&pbuf2);
  }
#endif
#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}

static PyObject *
PyvtkKMeansDistanceFunctor_UnPackElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPackElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = nullptr;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->UnPackElements(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::UnPackElements(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}

static PyObject *
PyvtkKMeansDistanceFunctor_UnPackElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkKMeansDistanceFunctor_UnPackElements_s1(self, args);
    case 4:
      return PyvtkKMeansDistanceFunctor_UnPackElements_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UnPackElements");
  return nullptr;
}



static PyObject *
PyvtkKMeansDistanceFunctor_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkKMeansDistanceFunctor::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkKMeansDistanceFunctor_Methods[] = {
  {"IsTypeOf", PyvtkKMeansDistanceFunctor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkKMeansDistanceFunctor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkKMeansDistanceFunctor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkKMeansDistanceFunctor\nC++: static vtkKMeansDistanceFunctor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkKMeansDistanceFunctor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkKMeansDistanceFunctor\nC++: vtkKMeansDistanceFunctor *NewInstance()\n\n"},
  {"GetEmptyTuple", PyvtkKMeansDistanceFunctor_GetEmptyTuple, METH_VARARGS,
   "V.GetEmptyTuple(int) -> vtkVariantArray\nC++: virtual vtkVariantArray *GetEmptyTuple(vtkIdType dimension)\n\nReturn an empty tuple. These values are used as cluster center\ncoordinates when no initial cluster centers are specified.\n"},
  {"PairwiseUpdate", PyvtkKMeansDistanceFunctor_PairwiseUpdate, METH_VARARGS,
   "V.PairwiseUpdate(vtkTable, int, vtkVariantArray, int, int)\nC++: virtual void PairwiseUpdate(vtkTable *clusterCenters,\n    vtkIdType row, vtkVariantArray *data,\n    vtkIdType dataCardinality, vtkIdType totalCardinality)\n\nThis is called once per observation per run per iteration in\norder to assign the observation to its nearest cluster center\nafter the distance functor has been evaluated for all the cluster\ncenters.\n\n* The distance functor is responsible for incrementally updating\n  the cluster centers\n* to account for the assignment.\n"},
  {"PerturbElement", PyvtkKMeansDistanceFunctor_PerturbElement, METH_VARARGS,
   "V.PerturbElement(vtkTable, vtkTable, int, int, int, float)\nC++: virtual void PerturbElement(vtkTable *, vtkTable *,\n    vtkIdType, vtkIdType, vtkIdType, double)\n\nWhen a cluster center (1) has no observations that are closer to\nit than other cluster centers or (2) has exactly the same\ncoordinates as another cluster center, its coordinates should be\nperturbed. This function should perform that perturbation.\n\n* Since perturbation relies on a distance metric, this function\n  is the responsibility of the\n* distance functor.\n"},
  {"AllocateElementArray", PyvtkKMeansDistanceFunctor_AllocateElementArray, METH_VARARGS,
   "V.AllocateElementArray(int) -> void\nC++: virtual void *AllocateElementArray(vtkIdType size)\n\nAllocate an array large enough to hold size coordinates and\nreturn a void pointer to this array. This is used by\nvtkPKMeansStatistics to send (receive) cluster center coordinates\nto (from) other processes.\n"},
  {"DeallocateElementArray", PyvtkKMeansDistanceFunctor_DeallocateElementArray, METH_VARARGS,
   "V.DeallocateElementArray(void)\nC++: virtual void DeallocateElementArray(void *)\n\nFree an array allocated with AllocateElementArray.\n"},
  {"CreateCoordinateArray", PyvtkKMeansDistanceFunctor_CreateCoordinateArray, METH_VARARGS,
   "V.CreateCoordinateArray() -> vtkAbstractArray\nC++: virtual vtkAbstractArray *CreateCoordinateArray()\n\nReturn a vtkAbstractArray capable of holding cluster center\ncoordinates. This is used by vtkPKMeansStatistics to hold cluster\ncenter coordinates sent to (received from) other processes.\n"},
  {"PackElements", PyvtkKMeansDistanceFunctor_PackElements, METH_VARARGS,
   "V.PackElements(vtkTable, void)\nC++: virtual void PackElements(vtkTable *curTable,\n    void *vElements)\n\nPack the cluster center coordinates in vElements into columns of\ncurTable. This code may assume that the columns in curTable are\nall of the type returned by GetNewVTKArray().\n"},
  {"UnPackElements", PyvtkKMeansDistanceFunctor_UnPackElements, METH_VARARGS,
   "V.UnPackElements(vtkTable, vtkTable, void, void, int)\nC++: virtual void UnPackElements(vtkTable *curTable,\n    vtkTable *newTable, void *vLocalElements,\n    void *vGlobalElements, int np)\nV.UnPackElements(vtkTable, void, int, int)\nC++: virtual void UnPackElements(vtkTable *curTable,\n    void *vLocalElements, vtkIdType numRows, vtkIdType numCols)\n\nUnpack the cluster center coordinates in vElements into columns\nof curTable. This code may assume that the columns in curTable\nare all of the type returned by GetNewVTKArray().\n"},
  {"GetDataType", PyvtkKMeansDistanceFunctor_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: virtual int GetDataType()\n\nReturn the data type used to store cluster center coordinates.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkKMeansDistanceFunctor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkKMeansDistanceFunctor", // tp_name
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
  PyvtkKMeansDistanceFunctor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkKMeansDistanceFunctor_StaticNew()
{
  return vtkKMeansDistanceFunctor::New();
}

PyObject *PyvtkKMeansDistanceFunctor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkKMeansDistanceFunctor_Type, PyvtkKMeansDistanceFunctor_Methods,
    "vtkKMeansDistanceFunctor",
 &PyvtkKMeansDistanceFunctor_StaticNew);

  PyTypeObject *pytype = &PyvtkKMeansDistanceFunctor_Type;

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

void PyVTKAddFile_vtkKMeansDistanceFunctor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkKMeansDistanceFunctor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkKMeansDistanceFunctor", o) != 0)
  {
    Py_DECREF(o);
  }

}

