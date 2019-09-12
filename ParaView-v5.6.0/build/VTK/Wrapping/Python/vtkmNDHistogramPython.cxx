// python wrapper for vtkmNDHistogram
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
#include "vtkStdString.h"
#include "vtkmNDHistogram.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkmNDHistogram(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkmNDHistogram_ClassNew(); }

#ifndef DECLARED_PyvtkArrayDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkArrayDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkArrayDataAlgorithm_ClassNew
#endif

static const char *PyvtkmNDHistogram_Doc =
  "vtkmNDHistogram - generate a n dimensional histogram field from input\nfields\n\n"
  "Superclass: vtkArrayDataAlgorithm\n\n"
  "vtkmNDhistogram is a filter that generate a n dimensional histogram\n"
  "field from some input fields. This filter takes a data set and with\n"
  "target fields and bins defined, it would generate a N-Dims histogram\n"
  "from input fields. The input fields should have the same number of\n"
  "values. The result is stored in a field named as \"Frequency\". This\n"
  "field contains all the frequencies of the N-Dims histogram in sparse\n"
  "representation. That being said, the result field does not store 0\n"
  "frequency bins. Meanwhile all input fields now would have the same\n"
  "length and store bin ids instead. E.g. (FieldA[i], FieldB[i],\n"
  "FieldC[i], Frequency[i]) is a bin in the histogram. The first three\n"
  "numbers are binIDs for FieldA, FieldB and FieldC. Frequency[i] stores\n"
  "the frequency for this bin (FieldA[i], FieldB[i], FieldC[i]).\n\n";


static PyObject *
PyvtkmNDHistogram_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkmNDHistogram::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmNDHistogram_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmNDHistogram *op = static_cast<vtkmNDHistogram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkmNDHistogram::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmNDHistogram_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkmNDHistogram *tempr = vtkmNDHistogram::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmNDHistogram_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmNDHistogram *op = static_cast<vtkmNDHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkmNDHistogram *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkmNDHistogram::NewInstance());

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
PyvtkmNDHistogram_AddFieldAndBin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFieldAndBin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmNDHistogram *op = static_cast<vtkmNDHistogram *>(vp);

  std::string temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddFieldAndBin(temp0, temp1);
    }
    else
    {
      op->vtkmNDHistogram::AddFieldAndBin(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmNDHistogram_GetBinDelta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinDelta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmNDHistogram *op = static_cast<vtkmNDHistogram *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBinDelta(temp0) :
      op->vtkmNDHistogram::GetBinDelta(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmNDHistogram_GetFieldIndexFromFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldIndexFromFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmNDHistogram *op = static_cast<vtkmNDHistogram *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldIndexFromFieldName(temp0) :
      op->vtkmNDHistogram::GetFieldIndexFromFieldName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkmNDHistogram_Methods[] = {
  {"IsTypeOf", PyvtkmNDHistogram_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkmNDHistogram_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkmNDHistogram_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkmNDHistogram\nC++: static vtkmNDHistogram *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkmNDHistogram_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkmNDHistogram\nC++: vtkmNDHistogram *NewInstance()\n\n"},
  {"AddFieldAndBin", PyvtkmNDHistogram_AddFieldAndBin, METH_VARARGS,
   "V.AddFieldAndBin(string, int)\nC++: void AddFieldAndBin(const std::string &fieldName,\n    const vtkIdType &numberOfBins)\n\n"},
  {"GetBinDelta", PyvtkmNDHistogram_GetBinDelta, METH_VARARGS,
   "V.GetBinDelta(int) -> float\nC++: double GetBinDelta(size_t fieldIndex)\n\n"},
  {"GetFieldIndexFromFieldName", PyvtkmNDHistogram_GetFieldIndexFromFieldName, METH_VARARGS,
   "V.GetFieldIndexFromFieldName(string) -> int\nC++: int GetFieldIndexFromFieldName(const std::string &fieldName)\n\nGetFieldIndexFromFieldName\n@param fieldName\n@return the index of the fieldName. If it's not in the FieldNames\nlist, a -1\nwould be returned.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkmNDHistogram_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkAcceleratorsVTKmPython.vtkmNDHistogram", // tp_name
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
  PyvtkmNDHistogram_Doc, // tp_doc
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

static vtkObjectBase *PyvtkmNDHistogram_StaticNew()
{
  return vtkmNDHistogram::New();
}

PyObject *PyvtkmNDHistogram_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkmNDHistogram_Type, PyvtkmNDHistogram_Methods,
    "vtkmNDHistogram",
 &PyvtkmNDHistogram_StaticNew);

  PyTypeObject *pytype = &PyvtkmNDHistogram_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkmNDHistogram(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkmNDHistogram_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkmNDHistogram", o) != 0)
  {
    Py_DECREF(o);
  }

}

