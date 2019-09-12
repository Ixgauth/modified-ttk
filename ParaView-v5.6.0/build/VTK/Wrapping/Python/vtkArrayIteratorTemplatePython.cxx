// python wrapper for vtkArrayIteratorTemplate
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
#include "vtkArrayIteratorTemplate.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayIteratorTemplate(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_IcE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_IcE_Doc =
  "vtkArrayIteratorTemplate- Implementation template for a array\niterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_IcE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<char> *tempr = vtkArrayIteratorTemplate<char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<char>::NewInstance());

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
PyvtkArrayIteratorTemplate_IcE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<char>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<char>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    char *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<char>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildBytes(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  vtkIdType temp0;
  char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<char>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<char>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<char>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<char>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IcE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<char> *op = static_cast<vtkArrayIteratorTemplate<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<char>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_IcE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_IcE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_IcE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_IcE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_IcE\nC++: static vtkArrayIteratorTemplate<char> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_IcE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_IcE\nC++: vtkArrayIteratorTemplate<char> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_IcE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_IcE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_IcE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (char, ...)\nC++: char *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_IcE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> char\nC++: char &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_IcE_SetValue, METH_VARARGS,
   "V.SetValue(int, char)\nC++: void SetValue(vtkIdType id, char value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_IcE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_IcE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_IcE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_IcE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_IcE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_IcE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_IcE", // tp_name
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
  PyvtkArrayIteratorTemplate_IcE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_IcE_StaticNew()
{
  return vtkArrayIteratorTemplate<char>::New();
}

PyObject *PyvtkArrayIteratorTemplate_IcE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_IcE_Type, PyvtkArrayIteratorTemplate_IcE_Methods,
    typeid(vtkArrayIteratorTemplate<char>).name(),
 &PyvtkArrayIteratorTemplate_IcE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_IcE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_IaE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_IaE_Doc =
  "vtkArrayIteratorTemplate<signed char> - Implementation template for a\narray iterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_IaE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<signed char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<signed char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<signed char> *tempr = vtkArrayIteratorTemplate<signed char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<signed char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<signed char>::NewInstance());

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
PyvtkArrayIteratorTemplate_IaE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<signed char>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<signed char>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    signed char *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<signed char>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    signed char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<signed char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  vtkIdType temp0;
  signed char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<signed char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<signed char>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<signed char>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<signed char>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<signed char>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IaE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<signed char> *op = static_cast<vtkArrayIteratorTemplate<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<signed char>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_IaE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_IaE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_IaE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_IaE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_IaE\nC++: static vtkArrayIteratorTemplate<signed char> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_IaE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_IaE\nC++: vtkArrayIteratorTemplate<signed char> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_IaE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_IaE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_IaE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (int, ...)\nC++: signed char *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_IaE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: signed char &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_IaE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, signed char value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_IaE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_IaE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_IaE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_IaE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_IaE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_IaE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_IaE", // tp_name
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
  PyvtkArrayIteratorTemplate_IaE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_IaE_StaticNew()
{
  return vtkArrayIteratorTemplate<signed char>::New();
}

PyObject *PyvtkArrayIteratorTemplate_IaE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_IaE_Type, PyvtkArrayIteratorTemplate_IaE_Methods,
    typeid(vtkArrayIteratorTemplate<signed char>).name(),
 &PyvtkArrayIteratorTemplate_IaE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_IaE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_IhE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_IhE_Doc =
  "vtkArrayIteratorTemplate<unsigned char> - Implementation template for\na array iterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_IhE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<unsigned char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<unsigned char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<unsigned char> *tempr = vtkArrayIteratorTemplate<unsigned char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<unsigned char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<unsigned char>::NewInstance());

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
PyvtkArrayIteratorTemplate_IhE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<unsigned char>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<unsigned char>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    unsigned char *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<unsigned char>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<unsigned char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  vtkIdType temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<unsigned char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<unsigned char>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<unsigned char>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<unsigned char>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<unsigned char>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IhE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned char> *op = static_cast<vtkArrayIteratorTemplate<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<unsigned char>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_IhE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_IhE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_IhE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_IhE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_IhE\nC++: static vtkArrayIteratorTemplate<unsigned char> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_IhE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_IhE\nC++: vtkArrayIteratorTemplate<unsigned char> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_IhE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_IhE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_IhE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (int, ...)\nC++: unsigned char *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_IhE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: unsigned char &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_IhE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, unsigned char value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_IhE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_IhE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_IhE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_IhE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_IhE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_IhE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_IhE", // tp_name
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
  PyvtkArrayIteratorTemplate_IhE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_IhE_StaticNew()
{
  return vtkArrayIteratorTemplate<unsigned char>::New();
}

PyObject *PyvtkArrayIteratorTemplate_IhE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_IhE_Type, PyvtkArrayIteratorTemplate_IhE_Methods,
    typeid(vtkArrayIteratorTemplate<unsigned char>).name(),
 &PyvtkArrayIteratorTemplate_IhE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_IhE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_IsE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_IsE_Doc =
  "vtkArrayIteratorTemplate- Implementation template for a array\niterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_IsE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<short>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<short>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<short> *tempr = vtkArrayIteratorTemplate<short>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<short> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<short>::NewInstance());

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
PyvtkArrayIteratorTemplate_IsE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<short>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<short>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    short *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<short>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  vtkIdType temp0;
  short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<short>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<short>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<short>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<short>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<short>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IsE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<short> *op = static_cast<vtkArrayIteratorTemplate<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<short>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_IsE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_IsE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_IsE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_IsE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_IsE\nC++: static vtkArrayIteratorTemplate<short> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_IsE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_IsE\nC++: vtkArrayIteratorTemplate<short> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_IsE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_IsE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_IsE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (int, ...)\nC++: short *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_IsE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: short &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_IsE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, short value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_IsE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_IsE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_IsE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_IsE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_IsE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_IsE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_IsE", // tp_name
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
  PyvtkArrayIteratorTemplate_IsE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_IsE_StaticNew()
{
  return vtkArrayIteratorTemplate<short>::New();
}

PyObject *PyvtkArrayIteratorTemplate_IsE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_IsE_Type, PyvtkArrayIteratorTemplate_IsE_Methods,
    typeid(vtkArrayIteratorTemplate<short>).name(),
 &PyvtkArrayIteratorTemplate_IsE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_IsE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_ItE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_ItE_Doc =
  "vtkArrayIteratorTemplate<unsigned short> - Implementation template\nfor a array iterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_ItE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<unsigned short>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<unsigned short>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<unsigned short> *tempr = vtkArrayIteratorTemplate<unsigned short>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<unsigned short> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<unsigned short>::NewInstance());

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
PyvtkArrayIteratorTemplate_ItE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<unsigned short>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<unsigned short>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    unsigned short *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<unsigned short>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<unsigned short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<unsigned short>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<unsigned short>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<unsigned short>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<unsigned short>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<unsigned short>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ItE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned short> *op = static_cast<vtkArrayIteratorTemplate<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<unsigned short>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_ItE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_ItE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_ItE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_ItE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_ItE\nC++: static vtkArrayIteratorTemplate<unsigned short> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_ItE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_ItE\nC++: vtkArrayIteratorTemplate<unsigned short> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_ItE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_ItE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_ItE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (int, ...)\nC++: unsigned short *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_ItE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: unsigned short &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_ItE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, unsigned short value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_ItE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_ItE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_ItE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_ItE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_ItE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_ItE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_ItE", // tp_name
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
  PyvtkArrayIteratorTemplate_ItE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_ItE_StaticNew()
{
  return vtkArrayIteratorTemplate<unsigned short>::New();
}

PyObject *PyvtkArrayIteratorTemplate_ItE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_ItE_Type, PyvtkArrayIteratorTemplate_ItE_Methods,
    typeid(vtkArrayIteratorTemplate<unsigned short>).name(),
 &PyvtkArrayIteratorTemplate_ItE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_ItE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_IiE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_IiE_Doc =
  "vtkArrayIteratorTemplate- Implementation template for a array\niterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_IiE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<int>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<int>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<int> *tempr = vtkArrayIteratorTemplate<int>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<int> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<int>::NewInstance());

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
PyvtkArrayIteratorTemplate_IiE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<int>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<int>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    int *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<int>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<int>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<int>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<int>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<int>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<int>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IiE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<int> *op = static_cast<vtkArrayIteratorTemplate<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<int>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_IiE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_IiE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_IiE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_IiE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_IiE\nC++: static vtkArrayIteratorTemplate<int> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_IiE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_IiE\nC++: vtkArrayIteratorTemplate<int> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_IiE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_IiE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_IiE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (int, ...)\nC++: int *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_IiE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: int &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_IiE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, int value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_IiE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_IiE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_IiE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_IiE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_IiE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_IiE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_IiE", // tp_name
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
  PyvtkArrayIteratorTemplate_IiE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_IiE_StaticNew()
{
  return vtkArrayIteratorTemplate<int>::New();
}

PyObject *PyvtkArrayIteratorTemplate_IiE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_IiE_Type, PyvtkArrayIteratorTemplate_IiE_Methods,
    typeid(vtkArrayIteratorTemplate<int>).name(),
 &PyvtkArrayIteratorTemplate_IiE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_IiE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_IjE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_IjE_Doc =
  "vtkArrayIteratorTemplate<unsigned int> - Implementation template for\na array iterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_IjE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<unsigned int>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<unsigned int>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<unsigned int> *tempr = vtkArrayIteratorTemplate<unsigned int>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<unsigned int> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<unsigned int>::NewInstance());

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
PyvtkArrayIteratorTemplate_IjE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<unsigned int>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<unsigned int>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    unsigned int *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<unsigned int>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<unsigned int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<unsigned int>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<unsigned int>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<unsigned int>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<unsigned int>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<unsigned int>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IjE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned int> *op = static_cast<vtkArrayIteratorTemplate<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<unsigned int>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_IjE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_IjE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_IjE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_IjE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_IjE\nC++: static vtkArrayIteratorTemplate<unsigned int> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_IjE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_IjE\nC++: vtkArrayIteratorTemplate<unsigned int> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_IjE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_IjE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_IjE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (int, ...)\nC++: unsigned int *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_IjE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: unsigned int &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_IjE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, unsigned int value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_IjE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_IjE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_IjE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_IjE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_IjE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_IjE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_IjE", // tp_name
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
  PyvtkArrayIteratorTemplate_IjE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_IjE_StaticNew()
{
  return vtkArrayIteratorTemplate<unsigned int>::New();
}

PyObject *PyvtkArrayIteratorTemplate_IjE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_IjE_Type, PyvtkArrayIteratorTemplate_IjE_Methods,
    typeid(vtkArrayIteratorTemplate<unsigned int>).name(),
 &PyvtkArrayIteratorTemplate_IjE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_IjE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_IlE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_IlE_Doc =
  "vtkArrayIteratorTemplate- Implementation template for a array\niterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_IlE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<long> *tempr = vtkArrayIteratorTemplate<long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<long>::NewInstance());

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
PyvtkArrayIteratorTemplate_IlE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<long>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<long>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    long *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<long>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  vtkIdType temp0;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<long>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<long>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<long>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<long>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IlE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long> *op = static_cast<vtkArrayIteratorTemplate<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<long>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_IlE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_IlE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_IlE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_IlE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_IlE\nC++: static vtkArrayIteratorTemplate<long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_IlE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_IlE\nC++: vtkArrayIteratorTemplate<long> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_IlE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_IlE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_IlE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (int, ...)\nC++: long *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_IlE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: long &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_IlE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, long value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_IlE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_IlE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_IlE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_IlE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_IlE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_IlE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_IlE", // tp_name
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
  PyvtkArrayIteratorTemplate_IlE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_IlE_StaticNew()
{
  return vtkArrayIteratorTemplate<long>::New();
}

PyObject *PyvtkArrayIteratorTemplate_IlE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_IlE_Type, PyvtkArrayIteratorTemplate_IlE_Methods,
    typeid(vtkArrayIteratorTemplate<long>).name(),
 &PyvtkArrayIteratorTemplate_IlE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_IlE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_ImE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_ImE_Doc =
  "vtkArrayIteratorTemplate<unsigned long> - Implementation template for\na array iterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_ImE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<unsigned long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<unsigned long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<unsigned long> *tempr = vtkArrayIteratorTemplate<unsigned long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<unsigned long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<unsigned long>::NewInstance());

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
PyvtkArrayIteratorTemplate_ImE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<unsigned long>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<unsigned long>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    unsigned long *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<unsigned long>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<unsigned long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  vtkIdType temp0;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<unsigned long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<unsigned long>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<unsigned long>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<unsigned long>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<unsigned long>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_ImE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<unsigned long>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_ImE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_ImE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_ImE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_ImE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_ImE\nC++: static vtkArrayIteratorTemplate<unsigned long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_ImE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_ImE\nC++: vtkArrayIteratorTemplate<unsigned long> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_ImE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_ImE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_ImE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (int, ...)\nC++: unsigned long *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_ImE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: unsigned long &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_ImE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, unsigned long value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_ImE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_ImE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_ImE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_ImE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_ImE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_ImE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_ImE", // tp_name
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
  PyvtkArrayIteratorTemplate_ImE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_ImE_StaticNew()
{
  return vtkArrayIteratorTemplate<unsigned long>::New();
}

PyObject *PyvtkArrayIteratorTemplate_ImE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_ImE_Type, PyvtkArrayIteratorTemplate_ImE_Methods,
    typeid(vtkArrayIteratorTemplate<unsigned long>).name(),
 &PyvtkArrayIteratorTemplate_ImE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_ImE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_IxE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_IxE_Doc =
  "vtkArrayIteratorTemplate<long long> - Implementation template for a\narray iterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_IxE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<long long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<long long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<long long> *tempr = vtkArrayIteratorTemplate<long long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<long long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<long long>::NewInstance());

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
PyvtkArrayIteratorTemplate_IxE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<long long>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<long long>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    long long *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<long long>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  vtkIdType temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<long long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<long long>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<long long>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<long long>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<long long>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IxE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<long long> *op = static_cast<vtkArrayIteratorTemplate<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<long long>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_IxE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_IxE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_IxE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_IxE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_IxE\nC++: static vtkArrayIteratorTemplate<long long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_IxE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_IxE\nC++: vtkArrayIteratorTemplate<long long> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_IxE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_IxE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_IxE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (int, ...)\nC++: long long *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_IxE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: long long &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_IxE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, long long value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_IxE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_IxE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_IxE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_IxE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_IxE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_IxE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_IxE", // tp_name
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
  PyvtkArrayIteratorTemplate_IxE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_IxE_StaticNew()
{
  return vtkArrayIteratorTemplate<long long>::New();
}

PyObject *PyvtkArrayIteratorTemplate_IxE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_IxE_Type, PyvtkArrayIteratorTemplate_IxE_Methods,
    typeid(vtkArrayIteratorTemplate<long long>).name(),
 &PyvtkArrayIteratorTemplate_IxE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_IxE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_IyE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_IyE_Doc =
  "vtkArrayIteratorTemplate<unsigned long long> - Implementation\ntemplate for a array iterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_IyE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<unsigned long long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<unsigned long long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<unsigned long long> *tempr = vtkArrayIteratorTemplate<unsigned long long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<unsigned long long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<unsigned long long>::NewInstance());

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
PyvtkArrayIteratorTemplate_IyE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<unsigned long long>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<unsigned long long>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    unsigned long long *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<unsigned long long>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long long *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<unsigned long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  vtkIdType temp0;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<unsigned long long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<unsigned long long>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<unsigned long long>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<unsigned long long>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<unsigned long long>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IyE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<unsigned long long> *op = static_cast<vtkArrayIteratorTemplate<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<unsigned long long>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_IyE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_IyE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_IyE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_IyE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_IyE\nC++: static vtkArrayIteratorTemplate<unsigned long long> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_IyE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_IyE\nC++: vtkArrayIteratorTemplate<unsigned long long> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_IyE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_IyE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_IyE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (int, ...)\nC++: unsigned long long *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_IyE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: unsigned long long &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_IyE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, unsigned long long value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_IyE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_IyE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_IyE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_IyE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_IyE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_IyE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_IyE", // tp_name
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
  PyvtkArrayIteratorTemplate_IyE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_IyE_StaticNew()
{
  return vtkArrayIteratorTemplate<unsigned long long>::New();
}

PyObject *PyvtkArrayIteratorTemplate_IyE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_IyE_Type, PyvtkArrayIteratorTemplate_IyE_Methods,
    typeid(vtkArrayIteratorTemplate<unsigned long long>).name(),
 &PyvtkArrayIteratorTemplate_IyE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_IyE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_IfE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_IfE_Doc =
  "vtkArrayIteratorTemplate- Implementation template for a array\niterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_IfE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<float>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<float>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<float> *tempr = vtkArrayIteratorTemplate<float>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<float> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<float>::NewInstance());

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
PyvtkArrayIteratorTemplate_IfE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<float>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<float>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    float *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<float>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<float>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  vtkIdType temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<float>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<float>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<float>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<float>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<float>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IfE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<float> *op = static_cast<vtkArrayIteratorTemplate<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<float>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_IfE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_IfE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_IfE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_IfE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_IfE\nC++: static vtkArrayIteratorTemplate<float> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_IfE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_IfE\nC++: vtkArrayIteratorTemplate<float> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_IfE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_IfE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_IfE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (float, ...)\nC++: float *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_IfE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: float &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_IfE_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(vtkIdType id, float value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_IfE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_IfE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_IfE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_IfE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_IfE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_IfE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_IfE", // tp_name
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
  PyvtkArrayIteratorTemplate_IfE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_IfE_StaticNew()
{
  return vtkArrayIteratorTemplate<float>::New();
}

PyObject *PyvtkArrayIteratorTemplate_IfE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_IfE_Type, PyvtkArrayIteratorTemplate_IfE_Methods,
    typeid(vtkArrayIteratorTemplate<float>).name(),
 &PyvtkArrayIteratorTemplate_IfE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_IfE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_IdE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_IdE_Doc =
  "vtkArrayIteratorTemplate- Implementation template for a array\niterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_IdE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<double>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<double>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<double> *tempr = vtkArrayIteratorTemplate<double>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<double> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<double>::NewInstance());

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
PyvtkArrayIteratorTemplate_IdE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<double>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<double>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_GetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t sizer = op->GetNumberOfComponents();
    double *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkArrayIteratorTemplate<double>::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<double>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<double>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<double>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<double>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<double>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<double>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_IdE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<double> *op = static_cast<vtkArrayIteratorTemplate<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<double>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_IdE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_IdE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_IdE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_IdE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayIteratorTemplate_IdE\nC++: static vtkArrayIteratorTemplate<double> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_IdE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_IdE\nC++: vtkArrayIteratorTemplate<double> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_IdE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_IdE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetTuple", PyvtkArrayIteratorTemplate_IdE_GetTuple, METH_VARARGS,
   "V.GetTuple(int) -> (float, ...)\nC++: double *GetTuple(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_IdE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: double &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_IdE_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(vtkIdType id, double value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_IdE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_IdE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_IdE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_IdE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_IdE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_IdE", // tp_name
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
  PyvtkArrayIteratorTemplate_IdE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_IdE_StaticNew()
{
  return vtkArrayIteratorTemplate<double>::New();
}

PyObject *PyvtkArrayIteratorTemplate_IdE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_IdE_Type, PyvtkArrayIteratorTemplate_IdE_Methods,
    typeid(vtkArrayIteratorTemplate<double>).name(),
 &PyvtkArrayIteratorTemplate_IdE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_IdE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_I12vtkStdStringE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_I12vtkStdStringE_Doc =
  "vtkArrayIteratorTemplate- Implementation template for a array\niterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<vtkStdString>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkStdString> *op = static_cast<vtkArrayIteratorTemplate<vtkStdString> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<vtkStdString>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<vtkStdString> *tempr = vtkArrayIteratorTemplate<vtkStdString>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkStdString> *op = static_cast<vtkArrayIteratorTemplate<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<vtkStdString> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<vtkStdString>::NewInstance());

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
PyvtkArrayIteratorTemplate_I12vtkStdStringE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkStdString> *op = static_cast<vtkArrayIteratorTemplate<vtkStdString> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<vtkStdString>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkStdString> *op = static_cast<vtkArrayIteratorTemplate<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<vtkStdString>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkStdString> *op = static_cast<vtkArrayIteratorTemplate<vtkStdString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<vtkStdString>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkStdString> *op = static_cast<vtkArrayIteratorTemplate<vtkStdString> *>(vp);

  vtkIdType temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<vtkStdString>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkStdString> *op = static_cast<vtkArrayIteratorTemplate<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<vtkStdString>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkStdString> *op = static_cast<vtkArrayIteratorTemplate<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<vtkStdString>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkStdString> *op = static_cast<vtkArrayIteratorTemplate<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<vtkStdString>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkStdString> *op = static_cast<vtkArrayIteratorTemplate<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<vtkStdString>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkStdString> *op = static_cast<vtkArrayIteratorTemplate<vtkStdString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<vtkStdString>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_I12vtkStdStringE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_I12vtkStdStringE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_I12vtkStdStringE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_I12vtkStdStringE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkArrayIteratorTemplate_I12vtkStdStringE\nC++: static vtkArrayIteratorTemplate<vtkStdString> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_I12vtkStdStringE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_I12vtkStdStringE\nC++: vtkArrayIteratorTemplate<vtkStdString> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_I12vtkStdStringE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> string\nC++: vtkStdString &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_I12vtkStdStringE_SetValue, METH_VARARGS,
   "V.SetValue(int, string)\nC++: void SetValue(vtkIdType id, vtkStdString value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_I12vtkStdStringE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_I12vtkStdStringE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_I12vtkStdStringE", // tp_name
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
  PyvtkArrayIteratorTemplate_I12vtkStdStringE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_I12vtkStdStringE_StaticNew()
{
  return vtkArrayIteratorTemplate<vtkStdString>::New();
}

PyObject *PyvtkArrayIteratorTemplate_I12vtkStdStringE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_I12vtkStdStringE_Type, PyvtkArrayIteratorTemplate_I12vtkStdStringE_Methods,
    typeid(vtkArrayIteratorTemplate<vtkStdString>).name(),
 &PyvtkArrayIteratorTemplate_I12vtkStdStringE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_I12vtkStdStringE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_Doc =
  "vtkArrayIteratorTemplate- Implementation template for a array\niterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<vtkUnicodeString>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkUnicodeString> *op = static_cast<vtkArrayIteratorTemplate<vtkUnicodeString> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<vtkUnicodeString>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<vtkUnicodeString> *tempr = vtkArrayIteratorTemplate<vtkUnicodeString>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkUnicodeString> *op = static_cast<vtkArrayIteratorTemplate<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<vtkUnicodeString> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<vtkUnicodeString>::NewInstance());

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
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkUnicodeString> *op = static_cast<vtkArrayIteratorTemplate<vtkUnicodeString> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<vtkUnicodeString>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkUnicodeString> *op = static_cast<vtkArrayIteratorTemplate<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<vtkUnicodeString>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkUnicodeString> *op = static_cast<vtkArrayIteratorTemplate<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnicodeString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<vtkUnicodeString>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkUnicodeString> *op = static_cast<vtkArrayIteratorTemplate<vtkUnicodeString> *>(vp);

  vtkIdType temp0;
  vtkUnicodeString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<vtkUnicodeString>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkUnicodeString> *op = static_cast<vtkArrayIteratorTemplate<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<vtkUnicodeString>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkUnicodeString> *op = static_cast<vtkArrayIteratorTemplate<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<vtkUnicodeString>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkUnicodeString> *op = static_cast<vtkArrayIteratorTemplate<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<vtkUnicodeString>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkUnicodeString> *op = static_cast<vtkArrayIteratorTemplate<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<vtkUnicodeString>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkUnicodeString> *op = static_cast<vtkArrayIteratorTemplate<vtkUnicodeString> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<vtkUnicodeString>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkArrayIteratorTemplate_I16vtkUnicodeStringE\nC++: static vtkArrayIteratorTemplate<vtkUnicodeString> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_I16vtkUnicodeStringE\nC++: vtkArrayIteratorTemplate<vtkUnicodeString> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> unicode\nC++: vtkUnicodeString &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_SetValue, METH_VARARGS,
   "V.SetValue(int, unicode)\nC++: void SetValue(vtkIdType id, vtkUnicodeString value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_I16vtkUnicodeStringE", // tp_name
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
  PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_StaticNew()
{
  return vtkArrayIteratorTemplate<vtkUnicodeString>::New();
}

PyObject *PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_Type, PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_Methods,
    typeid(vtkArrayIteratorTemplate<vtkUnicodeString>).name(),
 &PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayIteratorTemplate_I10vtkVariantE_ClassNew(); }

#ifndef DECLARED_PyvtkArrayIterator_ClassNew
extern "C" { PyObject *PyvtkArrayIterator_ClassNew(); }
#define DECLARED_PyvtkArrayIterator_ClassNew
#endif

static const char *PyvtkArrayIteratorTemplate_I10vtkVariantE_Doc =
  "vtkArrayIteratorTemplate- Implementation template for a array\niterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n";


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayIteratorTemplate<vtkVariant>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkVariant> *op = static_cast<vtkArrayIteratorTemplate<vtkVariant> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayIteratorTemplate<vtkVariant>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayIteratorTemplate<vtkVariant> *tempr = vtkArrayIteratorTemplate<vtkVariant>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkVariant> *op = static_cast<vtkArrayIteratorTemplate<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIteratorTemplate<vtkVariant> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayIteratorTemplate<vtkVariant>::NewInstance());

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
PyvtkArrayIteratorTemplate_I10vtkVariantE_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkVariant> *op = static_cast<vtkArrayIteratorTemplate<vtkVariant> *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkArrayIteratorTemplate<vtkVariant>::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkVariant> *op = static_cast<vtkArrayIteratorTemplate<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkArrayIteratorTemplate<vtkVariant>::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkVariant> *op = static_cast<vtkArrayIteratorTemplate<vtkVariant> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkArrayIteratorTemplate<vtkVariant>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkVariant> *op = static_cast<vtkArrayIteratorTemplate<vtkVariant> *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, *temp1);
    }
    else
    {
      op->vtkArrayIteratorTemplate<vtkVariant>::SetValue(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkVariant> *op = static_cast<vtkArrayIteratorTemplate<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkArrayIteratorTemplate<vtkVariant>::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkVariant> *op = static_cast<vtkArrayIteratorTemplate<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkArrayIteratorTemplate<vtkVariant>::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkVariant> *op = static_cast<vtkArrayIteratorTemplate<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkArrayIteratorTemplate<vtkVariant>::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkVariant> *op = static_cast<vtkArrayIteratorTemplate<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkArrayIteratorTemplate<vtkVariant>::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayIteratorTemplate_I10vtkVariantE_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayIteratorTemplate<vtkVariant> *op = static_cast<vtkArrayIteratorTemplate<vtkVariant> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkArrayIteratorTemplate<vtkVariant>::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayIteratorTemplate_I10vtkVariantE_Methods[] = {
  {"IsTypeOf", PyvtkArrayIteratorTemplate_I10vtkVariantE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayIteratorTemplate_I10vtkVariantE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayIteratorTemplate_I10vtkVariantE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkArrayIteratorTemplate_I10vtkVariantE\nC++: static vtkArrayIteratorTemplate<vtkVariant> *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayIteratorTemplate_I10vtkVariantE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayIteratorTemplate_I10vtkVariantE\nC++: vtkArrayIteratorTemplate<vtkVariant> *NewInstance()\n\n"},
  {"Initialize", PyvtkArrayIteratorTemplate_I10vtkVariantE_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractArray)\nC++: void Initialize(vtkAbstractArray *array) override;\n\nSet the array this iterator will iterate over. After Initialize()\nhas been called, the iterator is valid so long as the Array has\nnot been modified (except using the iterator itself). If the\narray is modified, the iterator must be re-initialized.\n"},
  {"GetArray", PyvtkArrayIteratorTemplate_I10vtkVariantE_GetArray, METH_VARARGS,
   "V.GetArray() -> vtkAbstractArray\nC++: vtkAbstractArray *GetArray()\n\nGet the array.\n"},
  {"GetValue", PyvtkArrayIteratorTemplate_I10vtkVariantE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> vtkVariant\nC++: vtkVariant &GetValue(vtkIdType id)\n\nMust be called only after Initialize.\n"},
  {"SetValue", PyvtkArrayIteratorTemplate_I10vtkVariantE_SetValue, METH_VARARGS,
   "V.SetValue(int, vtkVariant)\nC++: void SetValue(vtkIdType id, vtkVariant value)\n\nSets the value at the index. This does not verify if the index is\nvalid.  The caller must ensure that id is less than the maximum\nnumber of values.\n"},
  {"GetNumberOfTuples", PyvtkArrayIteratorTemplate_I10vtkVariantE_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfValues", PyvtkArrayIteratorTemplate_I10vtkVariantE_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nMust be called only after Initialize.\n"},
  {"GetNumberOfComponents", PyvtkArrayIteratorTemplate_I10vtkVariantE_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nMust be called only after Initialize.\n"},
  {"GetDataType", PyvtkArrayIteratorTemplate_I10vtkVariantE_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: int GetDataType() override;\n\nGet the data type from the underlying array.\n"},
  {"GetDataTypeSize", PyvtkArrayIteratorTemplate_I10vtkVariantE_GetDataTypeSize, METH_VARARGS,
   "V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nGet the data type size from the underlying array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayIteratorTemplate_I10vtkVariantE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkArrayIteratorTemplate_I10vtkVariantE", // tp_name
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
  PyvtkArrayIteratorTemplate_I10vtkVariantE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayIteratorTemplate_I10vtkVariantE_StaticNew()
{
  return vtkArrayIteratorTemplate<vtkVariant>::New();
}

PyObject *PyvtkArrayIteratorTemplate_I10vtkVariantE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayIteratorTemplate_I10vtkVariantE_Type, PyvtkArrayIteratorTemplate_I10vtkVariantE_Methods,
    typeid(vtkArrayIteratorTemplate<vtkVariant>).name(),
 &PyvtkArrayIteratorTemplate_I10vtkVariantE_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayIteratorTemplate_I10vtkVariantE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkArrayIteratorTemplate_Doc =
  "vtkArrayIteratorTemplate - Implementation template for a array\niterator.\n\n"
  "Superclass: vtkArrayIterator\n\n"
  "This is implementation template for a array iterator. It only works\n"
  "with arrays that have a contiguous internal storage of values (as in\n"
  "vtkDataArray, vtkStringArray).\n\n"
  "\nProvided Types:\n\n"
  "  vtkArrayIteratorTemplate[char] => vtkArrayIteratorTemplate<char>\n"

  "  vtkArrayIteratorTemplate[int8] => vtkArrayIteratorTemplate<signed char>\n"

  "  vtkArrayIteratorTemplate[uint8] => vtkArrayIteratorTemplate<unsigned char>\n"

  "  vtkArrayIteratorTemplate[int16] => vtkArrayIteratorTemplate<short>\n"

  "  vtkArrayIteratorTemplate[uint16] => vtkArrayIteratorTemplate<unsigned short>\n"

  "  vtkArrayIteratorTemplate[int32] => vtkArrayIteratorTemplate<int>\n"

  "  vtkArrayIteratorTemplate[uint32] => vtkArrayIteratorTemplate<unsigned int>\n"

  "  vtkArrayIteratorTemplate[int] => vtkArrayIteratorTemplate<long>\n"

  "  vtkArrayIteratorTemplate[uint] => vtkArrayIteratorTemplate<unsigned long>\n"

  "  vtkArrayIteratorTemplate[int64] => vtkArrayIteratorTemplate<long long>\n"

  "  vtkArrayIteratorTemplate[uint64] => vtkArrayIteratorTemplate<unsigned long long>\n"

  "  vtkArrayIteratorTemplate[float32] => vtkArrayIteratorTemplate<float>\n"

  "  vtkArrayIteratorTemplate[float64] => vtkArrayIteratorTemplate<double>\n"

  "  vtkArrayIteratorTemplate[str] => vtkArrayIteratorTemplate<vtkStdString>\n"

  "  vtkArrayIteratorTemplate[unicode] => vtkArrayIteratorTemplate<vtkUnicodeString>\n"

  "  vtkArrayIteratorTemplate[vtkVariant] => vtkArrayIteratorTemplate<vtkVariant>\n"
;

PyObject *PyvtkArrayIteratorTemplate_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonCorePython.vtkArrayIteratorTemplate",
                                     PyvtkArrayIteratorTemplate_Doc);

  o = PyvtkArrayIteratorTemplate_IcE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_IaE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_IhE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_IsE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_ItE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_IiE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_IjE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_IlE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_ImE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_IxE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_IyE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_IfE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_IdE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_I12vtkStdStringE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_I16vtkUnicodeStringE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkArrayIteratorTemplate_I10vtkVariantE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}

void PyVTKAddFile_vtkArrayIteratorTemplate(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayIteratorTemplate_TemplateNew();

  if (o)
  {
#if PY_VERSION_HEX >= 0x03040000
    const char *methodname = "values";
#else
    char methodname[] = "values";
#endif
    PyObject *l = PyObject_CallMethod(o, methodname, nullptr);
    Py_ssize_t n = PyList_GET_SIZE(l);
    for (Py_ssize_t i = 0; i < n; i++)
    {
      PyObject *ot = PyList_GET_ITEM(l, i);
      const char *nt = nullptr;
      if (PyType_Check(ot))
      {
        nt = ((PyTypeObject *)ot)->tp_name;
      }
      else if (PyCFunction_Check(ot))
      {
        nt = ((PyCFunctionObject *)ot)->m_ml->ml_name;
      }
      if (nt)
      {
        PyDict_SetItemString(dict, nt, ot);
      }
    }
    Py_DECREF(l);
  }

  if (o && PyDict_SetItemString(dict, "vtkArrayIteratorTemplate", o) != 0)
  {
    Py_DECREF(o);
  }

}

