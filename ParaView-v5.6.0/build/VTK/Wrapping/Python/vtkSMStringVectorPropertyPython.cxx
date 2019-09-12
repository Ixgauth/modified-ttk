// python wrapper for vtkSMStringVectorProperty
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
#include "vtkSMStringVectorProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMStringVectorProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMStringVectorProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSMVectorProperty_ClassNew
extern "C" { PyObject *PyvtkSMVectorProperty_ClassNew(); }
#define DECLARED_PyvtkSMVectorProperty_ClassNew
#endif

static const char *PyvtkSMStringVectorProperty_Doc =
  "vtkSMStringVectorProperty - property representing a vector of strings\n\n"
  "Superclass: vtkSMVectorProperty\n\n"
  "vtkSMStringVectorProperty is a concrete sub-class of\n"
  "vtkSMVectorProperty representing a vector of strings.\n"
  "vtkSMStringVectorProperty can also be used to store double and int\n"
  "values as strings. The strings are converted to the appropriate type\n"
  "when they are being passed to the stream. This is generally used for\n"
  "calling methods that have mixed type arguments.\n"
  "@sa\n"
  "vtkSMVectorProperty vtkSMDoubleVectorProperty vtkSMIntVectorProperty\n\n";

static PyTypeObject PyvtkSMStringVectorProperty_ElementTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMStringVectorProperty.ElementTypes", // tp_name
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

PyObject *PyvtkSMStringVectorProperty_ElementTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMStringVectorProperty_ElementTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMStringVectorProperty_ElementTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMStringVectorProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMStringVectorProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMStringVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMStringVectorProperty *tempr = vtkSMStringVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMStringVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMStringVectorProperty::NewInstance());

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
PyvtkSMStringVectorProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkSMStringVectorProperty::GetNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfElements(temp0);
    }
    else
    {
      op->vtkSMStringVectorProperty::SetNumberOfElements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetElement(temp0, temp1) :
      op->vtkSMStringVectorProperty::SetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  vtkStringList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
  {
    int tempr = (ap.IsBound() ?
      op->SetElements(temp0) :
      op->vtkSMStringVectorProperty::SetElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  vtkStringList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
  {
    if (ap.IsBound())
    {
      op->GetElements(temp0);
    }
    else
    {
      op->vtkSMStringVectorProperty::GetElements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetElement(temp0) :
      op->vtkSMStringVectorProperty::GetElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetElementIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetElementIndex(temp0, temp1) :
      op->vtkSMStringVectorProperty::GetElementIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetElementType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetElementType(temp0, temp1);
    }
    else
    {
      op->vtkSMStringVectorProperty::SetElementType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetElementType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementType(temp0) :
      op->vtkSMStringVectorProperty::GetElementType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUncheckedElement(temp0) :
      op->vtkSMStringVectorProperty::GetUncheckedElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUncheckedElement(temp0, temp1);
    }
    else
    {
      op->vtkSMStringVectorProperty::SetUncheckedElement(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  vtkStringList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
  {
    if (ap.IsBound())
    {
      op->GetUncheckedElements(temp0);
    }
    else
    {
      op->vtkSMStringVectorProperty::GetUncheckedElements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_SetUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  vtkStringList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
  {
    int tempr = (ap.IsBound() ?
      op->SetUncheckedElements(temp0) :
      op->vtkSMStringVectorProperty::SetUncheckedElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetNumberOfUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUncheckedElements() :
      op->vtkSMStringVectorProperty::GetNumberOfUncheckedElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkSMStringVectorProperty::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_GetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultValue(temp0) :
      op->vtkSMStringVectorProperty::GetDefaultValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_ClearUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearUncheckedElements();
    }
    else
    {
      op->vtkSMStringVectorProperty::ClearUncheckedElements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_IsValueDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValueDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsValueDefault() :
      op->vtkSMStringVectorProperty::IsValueDefault());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringVectorProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringVectorProperty *op = static_cast<vtkSMStringVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetToXMLDefaults();
    }
    else
    {
      op->vtkSMStringVectorProperty::ResetToXMLDefaults();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMStringVectorProperty_Methods[] = {
  {"IsTypeOf", PyvtkSMStringVectorProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMStringVectorProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMStringVectorProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMStringVectorProperty\nC++: static vtkSMStringVectorProperty *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMStringVectorProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMStringVectorProperty\nC++: vtkSMStringVectorProperty *NewInstance()\n\n"},
  {"GetNumberOfElements", PyvtkSMStringVectorProperty_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements() -> int\nC++: unsigned int GetNumberOfElements() override;\n\nReturns the size of the vector.\n"},
  {"SetNumberOfElements", PyvtkSMStringVectorProperty_SetNumberOfElements, METH_VARARGS,
   "V.SetNumberOfElements(int)\nC++: void SetNumberOfElements(unsigned int num) override;\n\nSets the size of the vector. If num is larger than the current\nnumber of elements, this may cause reallocation and copying.\n"},
  {"SetElement", PyvtkSMStringVectorProperty_SetElement, METH_VARARGS,
   "V.SetElement(int, string) -> int\nC++: int SetElement(unsigned int idx, const char *value)\n\nSet the value of 1 element. The vector is resized as necessary.\nReturns 0 if Set fails either because the property is read only\nor the value is not in all domains. Returns 1 otherwise.\n"},
  {"SetElements", PyvtkSMStringVectorProperty_SetElements, METH_VARARGS,
   "V.SetElements(vtkStringList) -> int\nC++: int SetElements(vtkStringList *newvalue)\n\nSets multiple elements. The size of the property is changed to\nmatch count.\n"},
  {"GetElements", PyvtkSMStringVectorProperty_GetElements, METH_VARARGS,
   "V.GetElements(vtkStringList)\nC++: void GetElements(vtkStringList *list)\n\nFills up the vtkStringList instance with the current value.\n"},
  {"GetElement", PyvtkSMStringVectorProperty_GetElement, METH_VARARGS,
   "V.GetElement(int) -> string\nC++: const char *GetElement(unsigned int idx)\n\nReturns the value of 1 element.\n"},
  {"GetElementIndex", PyvtkSMStringVectorProperty_GetElementIndex, METH_VARARGS,
   "V.GetElementIndex(string, int) -> int\nC++: unsigned int GetElementIndex(const char *value, int &exists)\n\nReturns the index of an element with a particular value. exists\nis set to false if element does not exist.\n"},
  {"SetElementType", PyvtkSMStringVectorProperty_SetElementType, METH_VARARGS,
   "V.SetElementType(int, int)\nC++: void SetElementType(unsigned int idx, int type)\n\nSet the cast type used when passing a value to the stream. For\nexample, if the type is INT, the string is converted to an int\n(with atoi()) before being passed to stream. Note that\nrepresenting scalar values as strings can result in loss of\naccuracy. Possible values are: INT, DOUBLE, STRING.\n"},
  {"GetElementType", PyvtkSMStringVectorProperty_GetElementType, METH_VARARGS,
   "V.GetElementType(int) -> int\nC++: int GetElementType(unsigned int idx)\n\nSet the cast type used when passing a value to the stream. For\nexample, if the type is INT, the string is converted to an int\n(with atoi()) before being passed to stream. Note that\nrepresenting scalar values as strings can result in loss of\naccuracy. Possible values are: INT, DOUBLE, STRING.\n"},
  {"GetUncheckedElement", PyvtkSMStringVectorProperty_GetUncheckedElement, METH_VARARGS,
   "V.GetUncheckedElement(int) -> string\nC++: const char *GetUncheckedElement(unsigned int idx)\n\nReturns the value of 1 unchecked element. These are used by\ndomains. SetElement() first sets the value of 1 unchecked element\nand then calls IsInDomain and updates the value of the\ncorresponding element only if IsInDomain passes.\n"},
  {"SetUncheckedElement", PyvtkSMStringVectorProperty_SetUncheckedElement, METH_VARARGS,
   "V.SetUncheckedElement(int, string)\nC++: void SetUncheckedElement(unsigned int idx, const char *value)\n\nSet the value of 1 unchecked element. This can be used to check\nif a value is in all domains of the property. Call this and call\nIsInDomains().\n"},
  {"GetUncheckedElements", PyvtkSMStringVectorProperty_GetUncheckedElements, METH_VARARGS,
   "V.GetUncheckedElements(vtkStringList)\nC++: void GetUncheckedElements(vtkStringList *list)\n\nGet/Set unchecked elements.\n"},
  {"SetUncheckedElements", PyvtkSMStringVectorProperty_SetUncheckedElements, METH_VARARGS,
   "V.SetUncheckedElements(vtkStringList) -> int\nC++: int SetUncheckedElements(vtkStringList *list)\n\nGet/Set unchecked elements.\n"},
  {"GetNumberOfUncheckedElements", PyvtkSMStringVectorProperty_GetNumberOfUncheckedElements, METH_VARARGS,
   "V.GetNumberOfUncheckedElements() -> int\nC++: unsigned int GetNumberOfUncheckedElements() override;\n\nReturns the size of unchecked elements. Usually this is the same\nas the number of elements but can be different before a domain\ncheck is performed.\n"},
  {"Copy", PyvtkSMStringVectorProperty_Copy, METH_VARARGS,
   "V.Copy(vtkSMProperty)\nC++: void Copy(vtkSMProperty *src) override;\n\nCopy all property values.\n"},
  {"GetDefaultValue", PyvtkSMStringVectorProperty_GetDefaultValue, METH_VARARGS,
   "V.GetDefaultValue(int) -> string\nC++: const char *GetDefaultValue(int idx)\n\nReturns the default value, if any, specified in the XML.\n"},
  {"ClearUncheckedElements", PyvtkSMStringVectorProperty_ClearUncheckedElements, METH_VARARGS,
   "V.ClearUncheckedElements()\nC++: void ClearUncheckedElements() override;\n\nAPI for setting unchecked element values.\n"},
  {"IsValueDefault", PyvtkSMStringVectorProperty_IsValueDefault, METH_VARARGS,
   "V.IsValueDefault() -> bool\nC++: bool IsValueDefault() override;\n\nReturns true if the property's value is different from the\ndefault value. This is used as a hint by the state saving code to\ndetermine if the value should be written to the file or if the\ndefaults are sufficient.\n"},
  {"ResetToXMLDefaults", PyvtkSMStringVectorProperty_ResetToXMLDefaults, METH_VARARGS,
   "V.ResetToXMLDefaults()\nC++: void ResetToXMLDefaults() override;\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMStringVectorProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMStringVectorProperty", // tp_name
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
  PyvtkSMStringVectorProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMStringVectorProperty_StaticNew()
{
  return vtkSMStringVectorProperty::New();
}

PyObject *PyvtkSMStringVectorProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMStringVectorProperty_Type, PyvtkSMStringVectorProperty_Methods,
    "vtkSMStringVectorProperty",
 &PyvtkSMStringVectorProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkSMStringVectorProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMVectorProperty_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMStringVectorProperty_ElementTypes_Type);
  PyvtkSMStringVectorProperty_ElementTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMStringVectorProperty_ElementTypes_Type);

  o = (PyObject *)&PyvtkSMStringVectorProperty_ElementTypes_Type;
  if (PyDict_SetItemString(d, "ElementTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSMStringVectorProperty::ElementTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "INT", vtkSMStringVectorProperty::INT },
        { "DOUBLE", vtkSMStringVectorProperty::DOUBLE },
        { "STRING", vtkSMStringVectorProperty::STRING },
      };

    o = PyvtkSMStringVectorProperty_ElementTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMStringVectorProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMStringVectorProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMStringVectorProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

