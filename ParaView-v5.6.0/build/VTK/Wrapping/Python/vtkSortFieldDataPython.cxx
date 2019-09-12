// python wrapper for vtkSortFieldData
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
#include "vtkSortFieldData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSortFieldData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSortFieldData_ClassNew(); }

#ifndef DECLARED_PyvtkSortDataArray_ClassNew
extern "C" { PyObject *PyvtkSortDataArray_ClassNew(); }
#define DECLARED_PyvtkSortDataArray_ClassNew
#endif

static const char *PyvtkSortFieldData_Doc =
  "vtkSortFieldData - provides a method for sorting field data\n\n"
  "Superclass: vtkSortDataArray\n\n"
  "vtkSortFieldData is used to sort data, based on its value, or with an\n"
  "associated key, into either ascending or descending order. This is\n"
  "useful for operations like selection, or analysis, when evaluating\n"
  "and processing data.\n\n"
  "This class, which extends the base functionality of vtkSortDataArray,\n"
  "is used to sort field data and its various subclasses (vtkFieldData,\n"
  "vtkDataSetAttributes, vtkPointData, vtkCellData, etc.)\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly on\n"
  "multi-core machines.\n\n"
  "@warning\n"
  "The sort methods below are static, hence the sorting methods can be\n"
  "used without instantiating the class. All methods are thread safe.\n\n"
  "@sa\n"
  "vtkSortDataArray\n\n";


static PyObject *
PyvtkSortFieldData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSortFieldData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFieldData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFieldData *op = static_cast<vtkSortFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSortFieldData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFieldData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSortFieldData *tempr = vtkSortFieldData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFieldData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFieldData *op = static_cast<vtkSortFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSortFieldData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSortFieldData::NewInstance());

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
PyvtkSortFieldData_Sort_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkFieldData *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkIdType *tempr = vtkSortFieldData::Sort(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSortFieldData_Sort_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkFieldData *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkIdType *tempr = vtkSortFieldData::Sort(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSortFieldData_Sort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkSortFieldData_Sort_s1(self, args);
    case 5:
      return PyvtkSortFieldData_Sort_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Sort");
  return nullptr;
}


static PyMethodDef PyvtkSortFieldData_Methods[] = {
  {"IsTypeOf", PyvtkSortFieldData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods for instantiating, managing type, and\nprinting information about this class.\n"},
  {"IsA", PyvtkSortFieldData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods for instantiating, managing type, and\nprinting information about this class.\n"},
  {"SafeDownCast", PyvtkSortFieldData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSortFieldData\nC++: static vtkSortFieldData *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK methods for instantiating, managing type, and\nprinting information about this class.\n"},
  {"NewInstance", PyvtkSortFieldData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSortFieldData\nC++: vtkSortFieldData *NewInstance()\n\nStandard VTK methods for instantiating, managing type, and\nprinting information about this class.\n"},
  {"Sort", PyvtkSortFieldData_Sort, METH_VARARGS,
   "V.Sort(vtkFieldData, string, int, int) -> (int, ...)\nC++: static vtkIdType *Sort(vtkFieldData *fd,\n    const char *arrayName, int k, int returnIndices)\nV.Sort(vtkFieldData, string, int, int, int) -> (int, ...)\nC++: static vtkIdType *Sort(vtkFieldData *fd,\n    const char *arrayName, int k, int returnIndices, int dir)\n\nGiven field data (and derived classes such as point data and cell\ndata), sort all the arrays in the field data given an array and a\ncomponent number k from that array. In other words, if an array\nhas n components, the kth component is used to sort the array and\nall of the other arrays in the field data.  Also note that the\nuser can indicate whether the function returns the sort indices\n(returnIndices=1). If the indices are returned, then the user\ntakes ownership of the data and must delete it. Note that the\nindices are in sorted (ascending) order, and indicate the final\nsorted position of the sort. So for example indices[0]=10\nindicates that the original data in position 10 in the field, was\nmoved to position 0 after the sort. By default, returnIndices=0.\n(Other notes: if any array is not the same length as the sorting\narray, then it will be skipped and not sorted.)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSortFieldData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkSortFieldData", // tp_name
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
  PyvtkSortFieldData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSortFieldData_StaticNew()
{
  return vtkSortFieldData::New();
}

PyObject *PyvtkSortFieldData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSortFieldData_Type, PyvtkSortFieldData_Methods,
    "vtkSortFieldData",
 &PyvtkSortFieldData_StaticNew);

  PyTypeObject *pytype = &PyvtkSortFieldData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSortDataArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSortFieldData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSortFieldData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSortFieldData", o) != 0)
  {
    Py_DECREF(o);
  }

}

