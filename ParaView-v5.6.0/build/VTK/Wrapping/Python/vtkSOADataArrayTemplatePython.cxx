// python wrapper for vtkSOADataArrayTemplate
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSOADataArrayTemplate.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSOADataArrayTemplate(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_IcE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIcEcE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIcEcE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIcEcE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_IcE_Doc =
  "vtkSOADataArrayTemplate- Struct-Of-Arrays implementation of\nvtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[char],char]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_IcE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IcE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_IcE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_IcE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_IcE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<char> *tempr = vtkSOADataArrayTemplate<char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<char>::NewInstance());

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
PyvtkSOADataArrayTemplate_IcE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  vtkIdType temp0;
  char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<char> store1(2*size1);
  char *temp1 = store1.Data();
  char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<char>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_IcE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<char> store1(size1);
  char *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<char>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    char tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<char>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  vtkIdType temp0;
  int temp1;
  char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<char>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  int temp0;
  char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<char>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  int temp0;
  char *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<char>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<char>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_IcE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<char>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<char>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<char>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_IcE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<char>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<char>::NewIterator());

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
PyvtkSOADataArrayTemplate_IcE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<char>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<char>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IcE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<char>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IcE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<char> *op = static_cast<vtkSOADataArrayTemplate<char> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<char>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IcE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_IcE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_IcE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_IcE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_IcE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_IcE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_IcE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_IcE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_IcE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_IcE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_IcE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> char\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_IcE_SetValue, METH_VARARGS,
   "V.SetValue(int, char)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_IcE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [char, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_IcE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (char, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_IcE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> char\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_IcE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, char)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_IcE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, char)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_IcE_SetArray, METH_VARARGS,
   "V.SetArray(int, char, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<char>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_IcE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> string\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_IcE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_IcE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_IcE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_IcE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_IcE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_IcE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_IcE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_IcE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IcE", // tp_name
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
  PyvtkSOADataArrayTemplate_IcE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_IcE_StaticNew()
{
  return vtkSOADataArrayTemplate<char>::New();
}

PyObject *PyvtkSOADataArrayTemplate_IcE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_IcE_Type, PyvtkSOADataArrayTemplate_IcE_Methods,
    typeid(vtkSOADataArrayTemplate<char>).name(),
 &PyvtkSOADataArrayTemplate_IcE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_IcE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIcEcE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_IcE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_IcE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_IcE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_IcE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<char>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<char>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<char>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<char>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<char>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_IcE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_IaE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIaEaE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIaEaE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIaEaE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_IaE_Doc =
  "vtkSOADataArrayTemplate<signed char> - Struct-Of-Arrays\nimplementation of vtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[int8],int8]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_IaE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IaE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_IaE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_IaE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_IaE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<signed char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<signed char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<signed char> *tempr = vtkSOADataArrayTemplate<signed char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<signed char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<signed char>::NewInstance());

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
PyvtkSOADataArrayTemplate_IaE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    signed char tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<signed char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  vtkIdType temp0;
  signed char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<signed char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<signed char> store1(2*size1);
  signed char *temp1 = store1.Data();
  signed char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<signed char>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_IaE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<signed char> store1(size1);
  signed char *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<signed char>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    signed char tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<signed char>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  vtkIdType temp0;
  int temp1;
  signed char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<signed char>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  int temp0;
  signed char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<signed char>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  int temp0;
  signed char *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<signed char>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<signed char>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_IaE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    signed char *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<signed char>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<signed char>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<signed char>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_IaE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<signed char>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<signed char>::NewIterator());

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
PyvtkSOADataArrayTemplate_IaE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<signed char>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<signed char>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IaE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<signed char>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IaE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<signed char> *op = static_cast<vtkSOADataArrayTemplate<signed char> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<signed char>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IaE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_IaE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_IaE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_IaE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_IaE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_IaE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_IaE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_IaE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_IaE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_IaE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_IaE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_IaE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_IaE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_IaE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_IaE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> int\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_IaE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, int)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_IaE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, int)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_IaE_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<signed char>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_IaE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (int, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_IaE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_IaE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_IaE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_IaE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_IaE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_IaE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_IaE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_IaE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IaE", // tp_name
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
  PyvtkSOADataArrayTemplate_IaE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_IaE_StaticNew()
{
  return vtkSOADataArrayTemplate<signed char>::New();
}

PyObject *PyvtkSOADataArrayTemplate_IaE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_IaE_Type, PyvtkSOADataArrayTemplate_IaE_Methods,
    typeid(vtkSOADataArrayTemplate<signed char>).name(),
 &PyvtkSOADataArrayTemplate_IaE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_IaE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIaEaE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_IaE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_IaE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_IaE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_IaE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<signed char>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<signed char>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<signed char>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<signed char>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<signed char>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_IaE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_IhE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIhEhE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIhEhE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIhEhE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_IhE_Doc =
  "vtkSOADataArrayTemplate<unsigned char> - Struct-Of-Arrays\nimplementation of vtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[uint8],uint8]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_IhE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IhE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_IhE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_IhE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_IhE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<unsigned char>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<unsigned char>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<unsigned char> *tempr = vtkSOADataArrayTemplate<unsigned char>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<unsigned char> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<unsigned char>::NewInstance());

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
PyvtkSOADataArrayTemplate_IhE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<unsigned char>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  vtkIdType temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned char>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned char>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_IhE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(size1);
  unsigned char *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned char>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<unsigned char>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  vtkIdType temp0;
  int temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned char>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  int temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned char>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  int temp0;
  unsigned char *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<unsigned char>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned char>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_IhE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<unsigned char>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<unsigned char>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned char>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_IhE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<unsigned char>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<unsigned char>::NewIterator());

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
PyvtkSOADataArrayTemplate_IhE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned char>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned char>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IhE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned char>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IhE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned char> *op = static_cast<vtkSOADataArrayTemplate<unsigned char> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned char>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IhE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_IhE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_IhE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_IhE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_IhE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_IhE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_IhE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_IhE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_IhE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_IhE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_IhE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_IhE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_IhE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_IhE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_IhE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> int\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_IhE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, int)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_IhE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, int)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_IhE_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<unsigned char>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_IhE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (int, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_IhE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_IhE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_IhE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_IhE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_IhE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_IhE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_IhE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_IhE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IhE", // tp_name
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
  PyvtkSOADataArrayTemplate_IhE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_IhE_StaticNew()
{
  return vtkSOADataArrayTemplate<unsigned char>::New();
}

PyObject *PyvtkSOADataArrayTemplate_IhE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_IhE_Type, PyvtkSOADataArrayTemplate_IhE_Methods,
    typeid(vtkSOADataArrayTemplate<unsigned char>).name(),
 &PyvtkSOADataArrayTemplate_IhE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_IhE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIhEhE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_IhE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_IhE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_IhE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_IhE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<unsigned char>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<unsigned char>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<unsigned char>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<unsigned char>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<unsigned char>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_IhE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_IsE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIsEsE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIsEsE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIsEsE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_IsE_Doc =
  "vtkSOADataArrayTemplate- Struct-Of-Arrays implementation of\nvtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[int16],int16]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_IsE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IsE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_IsE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_IsE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_IsE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<short>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<short>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<short> *tempr = vtkSOADataArrayTemplate<short>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<short> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<short>::NewInstance());

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
PyvtkSOADataArrayTemplate_IsE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    short tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  vtkIdType temp0;
  short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<short>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<short> store1(2*size1);
  short *temp1 = store1.Data();
  short *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<short>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_IsE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<short> store1(size1);
  short *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<short>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    short tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<short>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  vtkIdType temp0;
  int temp1;
  short temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<short>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  int temp0;
  short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<short>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  int temp0;
  short *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<short>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<short>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_IsE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    short *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<short>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<short>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<short>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_IsE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<short>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<short>::NewIterator());

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
PyvtkSOADataArrayTemplate_IsE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<short>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<short>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IsE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<short>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IsE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<short> *op = static_cast<vtkSOADataArrayTemplate<short> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<short>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IsE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_IsE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_IsE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_IsE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_IsE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_IsE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_IsE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_IsE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_IsE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_IsE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_IsE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_IsE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_IsE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_IsE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_IsE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> int\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_IsE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, int)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_IsE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, int)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_IsE_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<short>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_IsE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (int, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_IsE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_IsE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_IsE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_IsE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_IsE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_IsE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_IsE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_IsE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IsE", // tp_name
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
  PyvtkSOADataArrayTemplate_IsE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_IsE_StaticNew()
{
  return vtkSOADataArrayTemplate<short>::New();
}

PyObject *PyvtkSOADataArrayTemplate_IsE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_IsE_Type, PyvtkSOADataArrayTemplate_IsE_Methods,
    typeid(vtkSOADataArrayTemplate<short>).name(),
 &PyvtkSOADataArrayTemplate_IsE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_IsE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIsEsE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_IsE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_IsE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_IsE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_IsE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<short>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<short>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<short>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<short>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<short>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_IsE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_ItE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateItEtE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateItEtE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateItEtE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_ItE_Doc =
  "vtkSOADataArrayTemplate<unsigned short> - Struct-Of-Arrays\nimplementation of vtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[uint16],uint16]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_ItE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_ItE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_ItE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_ItE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_ItE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<unsigned short>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<unsigned short>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<unsigned short> *tempr = vtkSOADataArrayTemplate<unsigned short>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<unsigned short> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<unsigned short>::NewInstance());

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
PyvtkSOADataArrayTemplate_ItE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<unsigned short>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned short>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned short> store1(2*size1);
  unsigned short *temp1 = store1.Data();
  unsigned short *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned short>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_ItE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned short> store1(size1);
  unsigned short *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned short>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<unsigned short>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  vtkIdType temp0;
  int temp1;
  unsigned short temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned short>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  int temp0;
  unsigned short temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned short>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  int temp0;
  unsigned short *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<unsigned short>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned short>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_ItE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<unsigned short>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<unsigned short>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned short>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_ItE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<unsigned short>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<unsigned short>::NewIterator());

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
PyvtkSOADataArrayTemplate_ItE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned short>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned short>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ItE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned short>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_ItE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned short> *op = static_cast<vtkSOADataArrayTemplate<unsigned short> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned short>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_ItE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_ItE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_ItE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_ItE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_ItE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_ItE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_ItE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_ItE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_ItE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_ItE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_ItE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_ItE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_ItE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_ItE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_ItE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> int\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_ItE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, int)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_ItE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, int)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_ItE_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<unsigned short>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_ItE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (int, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_ItE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_ItE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_ItE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_ItE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_ItE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_ItE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_ItE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_ItE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_ItE", // tp_name
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
  PyvtkSOADataArrayTemplate_ItE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_ItE_StaticNew()
{
  return vtkSOADataArrayTemplate<unsigned short>::New();
}

PyObject *PyvtkSOADataArrayTemplate_ItE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_ItE_Type, PyvtkSOADataArrayTemplate_ItE_Methods,
    typeid(vtkSOADataArrayTemplate<unsigned short>).name(),
 &PyvtkSOADataArrayTemplate_ItE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_ItE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateItEtE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_ItE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_ItE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_ItE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_ItE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<unsigned short>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<unsigned short>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<unsigned short>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<unsigned short>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<unsigned short>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_ItE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_IiE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIiEiE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIiEiE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIiEiE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_IiE_Doc =
  "vtkSOADataArrayTemplate- Struct-Of-Arrays implementation of\nvtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[int32],int32]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_IiE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IiE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_IiE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_IiE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_IiE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<int>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<int>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<int> *tempr = vtkSOADataArrayTemplate<int>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<int> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<int>::NewInstance());

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
PyvtkSOADataArrayTemplate_IiE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<int>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<int>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_IiE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<int>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    int tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<int>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  vtkIdType temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<int>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<int>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  int temp0;
  int *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<int>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<int>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_IiE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<int>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<int>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<int>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_IiE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<int>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<int>::NewIterator());

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
PyvtkSOADataArrayTemplate_IiE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<int>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<int>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IiE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<int>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IiE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<int> *op = static_cast<vtkSOADataArrayTemplate<int> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<int>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IiE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_IiE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_IiE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_IiE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_IiE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_IiE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_IiE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_IiE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_IiE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_IiE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_IiE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_IiE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_IiE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_IiE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_IiE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> int\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_IiE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, int)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_IiE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, int)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_IiE_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<int>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_IiE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (int, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_IiE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_IiE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_IiE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_IiE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_IiE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_IiE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_IiE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_IiE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IiE", // tp_name
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
  PyvtkSOADataArrayTemplate_IiE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_IiE_StaticNew()
{
  return vtkSOADataArrayTemplate<int>::New();
}

PyObject *PyvtkSOADataArrayTemplate_IiE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_IiE_Type, PyvtkSOADataArrayTemplate_IiE_Methods,
    typeid(vtkSOADataArrayTemplate<int>).name(),
 &PyvtkSOADataArrayTemplate_IiE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_IiE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIiEiE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_IiE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_IiE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_IiE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_IiE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<int>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<int>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<int>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<int>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<int>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_IiE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_IjE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIjEjE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIjEjE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIjEjE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_IjE_Doc =
  "vtkSOADataArrayTemplate<unsigned int> - Struct-Of-Arrays\nimplementation of vtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[uint32],uint32]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_IjE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IjE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_IjE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_IjE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_IjE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<unsigned int>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<unsigned int>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<unsigned int> *tempr = vtkSOADataArrayTemplate<unsigned int>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<unsigned int> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<unsigned int>::NewInstance());

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
PyvtkSOADataArrayTemplate_IjE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<unsigned int>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned int>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned int> store1(2*size1);
  unsigned int *temp1 = store1.Data();
  unsigned int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned int>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_IjE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned int> store1(size1);
  unsigned int *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned int>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<unsigned int>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  vtkIdType temp0;
  int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned int>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned int>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  int temp0;
  unsigned int *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<unsigned int>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned int>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_IjE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<unsigned int>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<unsigned int>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned int>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_IjE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<unsigned int>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<unsigned int>::NewIterator());

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
PyvtkSOADataArrayTemplate_IjE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned int>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned int>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IjE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned int>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IjE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned int> *op = static_cast<vtkSOADataArrayTemplate<unsigned int> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned int>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IjE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_IjE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_IjE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_IjE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_IjE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_IjE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_IjE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_IjE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_IjE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_IjE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_IjE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_IjE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_IjE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_IjE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_IjE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> int\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_IjE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, int)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_IjE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, int)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_IjE_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<unsigned int>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_IjE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (int, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_IjE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_IjE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_IjE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_IjE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_IjE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_IjE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_IjE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_IjE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IjE", // tp_name
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
  PyvtkSOADataArrayTemplate_IjE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_IjE_StaticNew()
{
  return vtkSOADataArrayTemplate<unsigned int>::New();
}

PyObject *PyvtkSOADataArrayTemplate_IjE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_IjE_Type, PyvtkSOADataArrayTemplate_IjE_Methods,
    typeid(vtkSOADataArrayTemplate<unsigned int>).name(),
 &PyvtkSOADataArrayTemplate_IjE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_IjE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIjEjE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_IjE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_IjE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_IjE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_IjE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<unsigned int>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<unsigned int>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<unsigned int>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<unsigned int>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<unsigned int>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_IjE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_IlE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIlElE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIlElE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIlElE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_IlE_Doc =
  "vtkSOADataArrayTemplate- Struct-Of-Arrays implementation of\nvtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[int],int]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_IlE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IlE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_IlE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_IlE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_IlE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<long> *tempr = vtkSOADataArrayTemplate<long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<long>::NewInstance());

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
PyvtkSOADataArrayTemplate_IlE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  vtkIdType temp0;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_IlE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(size1);
  long *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    long tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<long>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  vtkIdType temp0;
  int temp1;
  long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  int temp0;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  int temp0;
  long *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<long>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_IlE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<long>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<long>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_IlE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<long>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<long>::NewIterator());

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
PyvtkSOADataArrayTemplate_IlE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IlE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IlE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long> *op = static_cast<vtkSOADataArrayTemplate<long> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IlE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_IlE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_IlE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_IlE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_IlE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_IlE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_IlE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_IlE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_IlE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_IlE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_IlE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_IlE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_IlE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_IlE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_IlE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> int\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_IlE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, int)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_IlE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, int)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_IlE_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<long>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_IlE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (int, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_IlE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_IlE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_IlE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_IlE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_IlE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_IlE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_IlE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_IlE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IlE", // tp_name
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
  PyvtkSOADataArrayTemplate_IlE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_IlE_StaticNew()
{
  return vtkSOADataArrayTemplate<long>::New();
}

PyObject *PyvtkSOADataArrayTemplate_IlE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_IlE_Type, PyvtkSOADataArrayTemplate_IlE_Methods,
    typeid(vtkSOADataArrayTemplate<long>).name(),
 &PyvtkSOADataArrayTemplate_IlE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_IlE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIlElE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_IlE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_IlE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_IlE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_IlE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<long>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<long>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<long>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<long>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<long>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_IlE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_ImE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateImEmE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateImEmE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateImEmE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_ImE_Doc =
  "vtkSOADataArrayTemplate<unsigned long> - Struct-Of-Arrays\nimplementation of vtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[uint],uint]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_ImE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_ImE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_ImE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_ImE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_ImE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<unsigned long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<unsigned long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<unsigned long> *tempr = vtkSOADataArrayTemplate<unsigned long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<unsigned long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<unsigned long>::NewInstance());

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
PyvtkSOADataArrayTemplate_ImE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<unsigned long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  vtkIdType temp0;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned long> store1(2*size1);
  unsigned long *temp1 = store1.Data();
  unsigned long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_ImE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned long> store1(size1);
  unsigned long *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<unsigned long>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  vtkIdType temp0;
  int temp1;
  unsigned long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  int temp0;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  int temp0;
  unsigned long *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<unsigned long>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_ImE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<unsigned long>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<unsigned long>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_ImE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<unsigned long>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<unsigned long>::NewIterator());

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
PyvtkSOADataArrayTemplate_ImE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_ImE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_ImE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_ImE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_ImE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_ImE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_ImE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_ImE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_ImE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_ImE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_ImE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_ImE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_ImE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_ImE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_ImE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_ImE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_ImE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_ImE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> int\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_ImE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, int)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_ImE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, int)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_ImE_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<unsigned long>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_ImE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (int, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_ImE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_ImE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_ImE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_ImE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_ImE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_ImE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_ImE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_ImE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_ImE", // tp_name
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
  PyvtkSOADataArrayTemplate_ImE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_ImE_StaticNew()
{
  return vtkSOADataArrayTemplate<unsigned long>::New();
}

PyObject *PyvtkSOADataArrayTemplate_ImE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_ImE_Type, PyvtkSOADataArrayTemplate_ImE_Methods,
    typeid(vtkSOADataArrayTemplate<unsigned long>).name(),
 &PyvtkSOADataArrayTemplate_ImE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_ImE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateImEmE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_ImE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_ImE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_ImE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_ImE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<unsigned long>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<unsigned long>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<unsigned long>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<unsigned long>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<unsigned long>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_ImE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_IxE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIxExE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIxExE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIxExE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_IxE_Doc =
  "vtkSOADataArrayTemplate<long long> - Struct-Of-Arrays implementation\nof vtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[int64],int64]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_IxE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IxE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_IxE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_IxE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_IxE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<long long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<long long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<long long> *tempr = vtkSOADataArrayTemplate<long long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<long long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<long long>::NewInstance());

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
PyvtkSOADataArrayTemplate_IxE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  vtkIdType temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long long>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_IxE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long long>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<long long>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  vtkIdType temp0;
  int temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long long>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  int temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long long>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  int temp0;
  long long *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<long long>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long long>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_IxE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<long long>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<long long>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long long>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_IxE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<long long>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<long long>::NewIterator());

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
PyvtkSOADataArrayTemplate_IxE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long long>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long long>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IxE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long long>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IxE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<long long> *op = static_cast<vtkSOADataArrayTemplate<long long> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<long long>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IxE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_IxE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_IxE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_IxE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_IxE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_IxE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_IxE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_IxE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_IxE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_IxE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_IxE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_IxE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_IxE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_IxE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_IxE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> int\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_IxE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, int)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_IxE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, int)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_IxE_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<long long>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_IxE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (int, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_IxE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_IxE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_IxE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_IxE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_IxE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_IxE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_IxE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_IxE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IxE", // tp_name
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
  PyvtkSOADataArrayTemplate_IxE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_IxE_StaticNew()
{
  return vtkSOADataArrayTemplate<long long>::New();
}

PyObject *PyvtkSOADataArrayTemplate_IxE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_IxE_Type, PyvtkSOADataArrayTemplate_IxE_Methods,
    typeid(vtkSOADataArrayTemplate<long long>).name(),
 &PyvtkSOADataArrayTemplate_IxE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_IxE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIxExE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_IxE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_IxE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_IxE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_IxE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<long long>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<long long>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<long long>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<long long>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<long long>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_IxE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_IyE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIyEyE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIyEyE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIyEyE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_IyE_Doc =
  "vtkSOADataArrayTemplate<unsigned long long> - Struct-Of-Arrays\nimplementation of vtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[uint64],uint64]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_IyE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IyE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_IyE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_IyE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_IyE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<unsigned long long>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<unsigned long long>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<unsigned long long> *tempr = vtkSOADataArrayTemplate<unsigned long long>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<unsigned long long> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<unsigned long long>::NewInstance());

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
PyvtkSOADataArrayTemplate_IyE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<unsigned long long>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  vtkIdType temp0;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long long>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned long long> store1(2*size1);
  unsigned long long *temp1 = store1.Data();
  unsigned long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long long>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_IyE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned long long> store1(size1);
  unsigned long long *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long long>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<unsigned long long>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  vtkIdType temp0;
  int temp1;
  unsigned long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long long>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  int temp0;
  unsigned long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long long>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  int temp0;
  unsigned long long *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<unsigned long long>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long long>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_IyE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long long *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<unsigned long long>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<unsigned long long>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long long>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_IyE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<unsigned long long>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<unsigned long long>::NewIterator());

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
PyvtkSOADataArrayTemplate_IyE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long long>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long long>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IyE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long long>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IyE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<unsigned long long> *op = static_cast<vtkSOADataArrayTemplate<unsigned long long> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<unsigned long long>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IyE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_IyE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_IyE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_IyE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_IyE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_IyE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_IyE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_IyE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_IyE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_IyE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_IyE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> int\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_IyE_SetValue, METH_VARARGS,
   "V.SetValue(int, int)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_IyE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [int, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_IyE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (int, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_IyE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> int\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_IyE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, int)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_IyE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, int)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_IyE_SetArray, METH_VARARGS,
   "V.SetArray(int, int, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<unsigned long long>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_IyE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (int, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_IyE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_IyE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_IyE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_IyE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_IyE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_IyE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_IyE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_IyE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IyE", // tp_name
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
  PyvtkSOADataArrayTemplate_IyE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_IyE_StaticNew()
{
  return vtkSOADataArrayTemplate<unsigned long long>::New();
}

PyObject *PyvtkSOADataArrayTemplate_IyE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_IyE_Type, PyvtkSOADataArrayTemplate_IyE_Methods,
    typeid(vtkSOADataArrayTemplate<unsigned long long>).name(),
 &PyvtkSOADataArrayTemplate_IyE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_IyE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIyEyE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_IyE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_IyE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_IyE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_IyE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<unsigned long long>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<unsigned long long>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<unsigned long long>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<unsigned long long>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<unsigned long long>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_IyE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_IfE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIfEfE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIfEfE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIfEfE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_IfE_Doc =
  "vtkSOADataArrayTemplate- Struct-Of-Arrays implementation of\nvtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[float32],float32]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_IfE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IfE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_IfE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_IfE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_IfE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<float>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<float>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<float> *tempr = vtkSOADataArrayTemplate<float>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<float> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<float>::NewInstance());

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
PyvtkSOADataArrayTemplate_IfE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<float>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  vtkIdType temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<float>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<float>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_IfE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(size1);
  float *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<float>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    float tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<float>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  vtkIdType temp0;
  int temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<float>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  int temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<float>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  int temp0;
  float *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<float>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<float>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_IfE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<float>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<float>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<float>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_IfE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<float>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<float>::NewIterator());

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
PyvtkSOADataArrayTemplate_IfE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<float>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<float>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IfE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<float>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IfE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<float> *op = static_cast<vtkSOADataArrayTemplate<float> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<float>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IfE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_IfE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_IfE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_IfE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_IfE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_IfE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_IfE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_IfE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_IfE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_IfE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_IfE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_IfE_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_IfE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [float, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_IfE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (float, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_IfE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> float\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_IfE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, float)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_IfE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, float)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_IfE_SetArray, METH_VARARGS,
   "V.SetArray(int, float, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<float>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_IfE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (float, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_IfE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_IfE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_IfE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_IfE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_IfE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_IfE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_IfE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_IfE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IfE", // tp_name
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
  PyvtkSOADataArrayTemplate_IfE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_IfE_StaticNew()
{
  return vtkSOADataArrayTemplate<float>::New();
}

PyObject *PyvtkSOADataArrayTemplate_IfE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_IfE_Type, PyvtkSOADataArrayTemplate_IfE_Methods,
    typeid(vtkSOADataArrayTemplate<float>).name(),
 &PyvtkSOADataArrayTemplate_IfE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_IfE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIfEfE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_IfE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_IfE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_IfE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_IfE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<float>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<float>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<float>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<float>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<float>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_IfE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSOADataArrayTemplate_IdE_ClassNew(); }

#ifndef DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIdEdE_ClassNew
extern "C" { PyObject *PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIdEdE_ClassNew(); }
#define DECLARED_PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIdEdE_ClassNew
#endif

static const char *PyvtkSOADataArrayTemplate_IdE_Doc =
  "vtkSOADataArrayTemplate- Struct-Of-Arrays implementation of\nvtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[float64],float64]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n";

static PyTypeObject PyvtkSOADataArrayTemplate_IdE_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IdE.DeleteMethod", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSOADataArrayTemplate_IdE_DeleteMethod_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSOADataArrayTemplate_IdE_DeleteMethod_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSOADataArrayTemplate_IdE_DeleteMethod_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSOADataArrayTemplate<double>::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSOADataArrayTemplate<double>::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSOADataArrayTemplate<double> *tempr = vtkSOADataArrayTemplate<double>::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSOADataArrayTemplate<double> *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSOADataArrayTemplate<double>::NewInstance());

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
PyvtkSOADataArrayTemplate_IdE_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSOADataArrayTemplate<double>::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= valueIdx && valueIdx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<double>::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_GetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<double>::GetTypedTuple(temp0, temp1);
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


static PyObject *
PyvtkSOADataArrayTemplate_IdE_SetTypedTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedTuple(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<double>::SetTypedTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_GetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    double tempr = (ap.IsBound() ?
      op->GetTypedComponent(temp0, temp1) :
      op->vtkSOADataArrayTemplate<double>::GetTypedComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_SetTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= tupleIdx && tupleIdx < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= comp && comp < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetTypedComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<double>::SetTypedComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_FillTypedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTypedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillTypedComponent(temp0, temp1);
    }
    else
    {
      op->vtkSOADataArrayTemplate<double>::FillTypedComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  int temp0;
  double *temp1;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp2;
  bool temp3 = false;
  bool temp4 = false;
  int temp5 = vtkSOADataArrayTemplate<double>::VTK_DATA_ARRAY_FREE;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSOADataArrayTemplate<double>::SetArray(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkSOADataArrayTemplate_IdE_GetComponentArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComponentArrayPointer(temp0) :
      op->vtkSOADataArrayTemplate<double>::GetComponentArrayPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkSOADataArrayTemplate<double>::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_ExportToVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportToVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->ExportToVoidPointer(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<double>::ExportToVoidPointer(temp0);
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
PyvtkSOADataArrayTemplate_IdE_GetArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayType() :
      op->vtkSOADataArrayTemplate<double>::GetArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkSOADataArrayTemplate<double>::NewIterator());

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
PyvtkSOADataArrayTemplate_IdE_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<double>::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSOADataArrayTemplate<double>::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSOADataArrayTemplate_IdE_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSOADataArrayTemplate<double>::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IdE_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSOADataArrayTemplate<double> *op = static_cast<vtkSOADataArrayTemplate<double> *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSOADataArrayTemplate<double>::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSOADataArrayTemplate_IdE_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSOADataArrayTemplate_IdE_InsertTuples_s1(self, args);
    case 3:
      return PyvtkSOADataArrayTemplate_IdE_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyMethodDef PyvtkSOADataArrayTemplate_IdE_Methods[] = {
  {"IsTypeOf", PyvtkSOADataArrayTemplate_IdE_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSOADataArrayTemplate_IdE_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSOADataArrayTemplate_IdE_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSOADataArrayTemplate_IdE\nC++: static SelfType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSOADataArrayTemplate_IdE_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSOADataArrayTemplate_IdE\nC++: SelfType *NewInstance()\n\n"},
  {"GetValue", PyvtkSOADataArrayTemplate_IdE_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: ValueType GetValue(vtkIdType valueIdx)\n\nGet the value at valueIdx. valueIdx assumes AOS ordering.\n"},
  {"SetValue", PyvtkSOADataArrayTemplate_IdE_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(vtkIdType valueIdx, ValueType value)\n\nSet the value at valueIdx to value. valueIdx assumes AOS\nordering.\n"},
  {"GetTypedTuple", PyvtkSOADataArrayTemplate_IdE_GetTypedTuple, METH_VARARGS,
   "V.GetTypedTuple(int, [float, ...])\nC++: void GetTypedTuple(vtkIdType tupleIdx, ValueType *tuple)\n\nCopy the tuple at tupleIdx into tuple.\n"},
  {"SetTypedTuple", PyvtkSOADataArrayTemplate_IdE_SetTypedTuple, METH_VARARGS,
   "V.SetTypedTuple(int, (float, ...))\nC++: void SetTypedTuple(vtkIdType tupleIdx,\n    const ValueType *tuple)\n\nSet this array's tuple at tupleIdx to the values in tuple.\n"},
  {"GetTypedComponent", PyvtkSOADataArrayTemplate_IdE_GetTypedComponent, METH_VARARGS,
   "V.GetTypedComponent(int, int) -> float\nC++: ValueType GetTypedComponent(vtkIdType tupleIdx, int comp)\n\nGet component comp of the tuple at tupleIdx.\n"},
  {"SetTypedComponent", PyvtkSOADataArrayTemplate_IdE_SetTypedComponent, METH_VARARGS,
   "V.SetTypedComponent(int, int, float)\nC++: void SetTypedComponent(vtkIdType tupleIdx, int comp,\n    ValueType value)\n\nSet component comp of the tuple at tupleIdx to value.\n"},
  {"FillTypedComponent", PyvtkSOADataArrayTemplate_IdE_FillTypedComponent, METH_VARARGS,
   "V.FillTypedComponent(int, float)\nC++: void FillTypedComponent(int compIdx, ValueType value)\n    override;\n\nSet component comp of all tuples to value.\n"},
  {"SetArray", PyvtkSOADataArrayTemplate_IdE_SetArray, METH_VARARGS,
   "V.SetArray(int, float, int, bool, bool, int)\nC++: void SetArray(int comp, ValueType *array, vtkIdType size,\n    bool updateMaxId=false, bool save=false,\n    int deleteMethod=vtkSOADataArrayTemplate<double>::VTK_DATA_ARRAY_FREE)\n\nUse this API to pass externally allocated memory to this\ninstance. Since vtkSOADataArrayTemplate uses separate contiguous\nregions for each component, use this API to add arrays for each\nof the component.save: When set to true, vtkSOADataArrayTemplate\nwill not release or realloc the memory even when the\nAllocatorType is set to RESIZABLE. If needed it will simply allow\nnew memory buffers and \"forget\" the supplied pointers. When save\nis set to false, this will be the deleteMethod specified to\nrelease the array. If updateMaxId is true, the array's MaxId will\nbe updated, and assumes that size is the number of tuples in the\narray.size is specified in number of elements of ScalarType.\n"},
  {"GetComponentArrayPointer", PyvtkSOADataArrayTemplate_IdE_GetComponentArrayPointer, METH_VARARGS,
   "V.GetComponentArrayPointer(int) -> (float, ...)\nC++: ValueType *GetComponentArrayPointer(int comp)\n\nReturn a pointer to a contiguous block of memory containing all\nvalues for a particular components (ie. a single array of the\nstruct-of-arrays).\n"},
  {"GetVoidPointer", PyvtkSOADataArrayTemplate_IdE_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(vtkIdType valueIdx) override;\n\nUse of this method is discouraged, it creates a deep copy of the\ndata into a contiguous AoS-ordered buffer and prints a warning.\n"},
  {"ExportToVoidPointer", PyvtkSOADataArrayTemplate_IdE_ExportToVoidPointer, METH_VARARGS,
   "V.ExportToVoidPointer(void)\nC++: void ExportToVoidPointer(void *ptr) override;\n\nExport a copy of the data in AoS ordering to the preallocated\nmemory buffer.\n"},
  {"GetArrayType", PyvtkSOADataArrayTemplate_IdE_GetArrayType, METH_VARARGS,
   "V.GetArrayType() -> int\nC++: int GetArrayType() override;\n\nMethod for type-checking in FastDownCast implementations.\n"},
  {"NewIterator", PyvtkSOADataArrayTemplate_IdE_NewIterator, METH_VARARGS,
   "V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {"SetNumberOfComponents", PyvtkSOADataArrayTemplate_IdE_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComps) override;\n\nSet/Get the dimension (n) of the components. Must be >= 1. Make\nsure that this is set before allocation.\n"},
  {"ShallowCopy", PyvtkSOADataArrayTemplate_IdE_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataArray)\nC++: void ShallowCopy(vtkDataArray *other) override;\n\nCreate a shallow copy of other into this, if possible. Shallow\ncopies are only possible: (a) if both arrays are the same data\ntype (b) if both arrays are the same array type (e.g. AOS vs.\nSOA) (c) if both arrays support shallow copies (e.g. vtkBitArray\ncurrently does not.) If a shallow copy is not possible, a deep\ncopy will be performed instead.\n"},
  {"InsertTuples", PyvtkSOADataArrayTemplate_IdE_InsertTuples, METH_VARARGS,
   "V.InsertTuples(int, int, int, vtkAbstractArray)\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\nV.InsertTuples(vtkIdList, vtkIdList, vtkAbstractArray)\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\n\nCopy n consecutive tuples starting at srcStart from the source\narray to this array, starting at the dstStart location. Note that\nmemory allocation is performed as necessary to hold the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSOADataArrayTemplate_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSOADataArrayTemplate_IdE", // tp_name
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
  PyvtkSOADataArrayTemplate_IdE_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSOADataArrayTemplate_IdE_StaticNew()
{
  return vtkSOADataArrayTemplate<double>::New();
}

PyObject *PyvtkSOADataArrayTemplate_IdE_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSOADataArrayTemplate_IdE_Type, PyvtkSOADataArrayTemplate_IdE_Methods,
    typeid(vtkSOADataArrayTemplate<double>).name(),
 &PyvtkSOADataArrayTemplate_IdE_StaticNew);

  PyTypeObject *pytype = &PyvtkSOADataArrayTemplate_IdE_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericDataArray_I23vtkSOADataArrayTemplateIdEdE_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSOADataArrayTemplate_IdE_DeleteMethod_Type);
  PyvtkSOADataArrayTemplate_IdE_DeleteMethod_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSOADataArrayTemplate_IdE_DeleteMethod_Type);

  o = (PyObject *)&PyvtkSOADataArrayTemplate_IdE_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSOADataArrayTemplate<double>::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkSOADataArrayTemplate<double>::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkSOADataArrayTemplate<double>::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkSOADataArrayTemplate<double>::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkSOADataArrayTemplate<double>::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkSOADataArrayTemplate_IdE_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkSOADataArrayTemplate_Doc =
  "vtkSOADataArrayTemplate - Struct-Of-Arrays implementation of\nvtkGenericDataArray.\n\n"
  "Superclass: vtkGenericDataArray[vtkSOADataArrayTemplate[ValueTypeT],ValueTypeT]\n\n"
  "vtkSOADataArrayTemplate is the counterpart of\n"
  "vtkAOSDataArrayTemplate. Each component is stored in a separate\n"
  "array.\n\n"
  "@sa\n"
  "vtkGenericDataArray vtkAOSDataArrayTemplate\n\n"
  "\nProvided Types:\n\n"
  "  vtkSOADataArrayTemplate[char] => vtkSOADataArrayTemplate<char>\n"

  "  vtkSOADataArrayTemplate[int8] => vtkSOADataArrayTemplate<signed char>\n"

  "  vtkSOADataArrayTemplate[uint8] => vtkSOADataArrayTemplate<unsigned char>\n"

  "  vtkSOADataArrayTemplate[int16] => vtkSOADataArrayTemplate<short>\n"

  "  vtkSOADataArrayTemplate[uint16] => vtkSOADataArrayTemplate<unsigned short>\n"

  "  vtkSOADataArrayTemplate[int32] => vtkSOADataArrayTemplate<int>\n"

  "  vtkSOADataArrayTemplate[uint32] => vtkSOADataArrayTemplate<unsigned int>\n"

  "  vtkSOADataArrayTemplate[int] => vtkSOADataArrayTemplate<long>\n"

  "  vtkSOADataArrayTemplate[uint] => vtkSOADataArrayTemplate<unsigned long>\n"

  "  vtkSOADataArrayTemplate[int64] => vtkSOADataArrayTemplate<long long>\n"

  "  vtkSOADataArrayTemplate[uint64] => vtkSOADataArrayTemplate<unsigned long long>\n"

  "  vtkSOADataArrayTemplate[float32] => vtkSOADataArrayTemplate<float>\n"

  "  vtkSOADataArrayTemplate[float64] => vtkSOADataArrayTemplate<double>\n"
;

PyObject *PyvtkSOADataArrayTemplate_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonCorePython.vtkSOADataArrayTemplate",
                                     PyvtkSOADataArrayTemplate_Doc);

  o = PyvtkSOADataArrayTemplate_IcE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_IaE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_IhE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_IsE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_ItE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_IiE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_IjE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_IlE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_ImE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_IxE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_IyE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_IfE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkSOADataArrayTemplate_IdE_ClassNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}

void PyVTKAddFile_vtkSOADataArrayTemplate(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSOADataArrayTemplate_TemplateNew();

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

  if (o && PyDict_SetItemString(dict, "vtkSOADataArrayTemplate", o) != 0)
  {
    Py_DECREF(o);
  }

}

