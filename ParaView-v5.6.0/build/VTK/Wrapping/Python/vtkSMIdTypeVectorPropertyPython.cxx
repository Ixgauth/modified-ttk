// python wrapper for vtkSMIdTypeVectorProperty
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
#include "vtkSMIdTypeVectorProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMIdTypeVectorProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMIdTypeVectorProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSMVectorProperty_ClassNew
extern "C" { PyObject *PyvtkSMVectorProperty_ClassNew(); }
#define DECLARED_PyvtkSMVectorProperty_ClassNew
#endif

static const char *PyvtkSMIdTypeVectorProperty_Doc =
  "vtkSMIdTypeVectorProperty - property representing a vector of integers\n\n"
  "Superclass: vtkSMVectorProperty\n\n"
  "vtkSMIdTypeVectorProperty is a concrete sub-class of\n"
  "vtkSMVectorProperty representing a vector of integers (vtkIdType,\n"
  "possibly 64 bit).\n"
  "@sa\n"
  "vtkSMVectorProperty vtkSMDoubleVectorProperty\n"
  "vtkSMStringVectorProperty\n\n";


static PyObject *
PyvtkSMIdTypeVectorProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMIdTypeVectorProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMIdTypeVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMIdTypeVectorProperty *tempr = vtkSMIdTypeVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMIdTypeVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMIdTypeVectorProperty::NewInstance());

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
PyvtkSMIdTypeVectorProperty_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkSMIdTypeVectorProperty::GetNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

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
      op->vtkSMIdTypeVectorProperty::SetNumberOfElements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  unsigned int temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetElement(temp0, temp1) :
      op->vtkSMIdTypeVectorProperty::SetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(size0);
  vtkIdType *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->SetElements(temp0) :
      op->vtkSMIdTypeVectorProperty::SetElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMIdTypeVectorProperty_SetElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(size0);
  vtkIdType *temp0 = store0.Data();
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetElements(temp0, temp1) :
      op->vtkSMIdTypeVectorProperty::SetElements(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMIdTypeVectorProperty_SetElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMIdTypeVectorProperty_SetElements_s1(self, args);
    case 2:
      return PyvtkSMIdTypeVectorProperty_SetElements_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetElements");
  return nullptr;
}



static PyObject *
PyvtkSMIdTypeVectorProperty_SetUncheckedElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(size0);
  vtkIdType *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->SetUncheckedElements(temp0) :
      op->vtkSMIdTypeVectorProperty::SetUncheckedElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMIdTypeVectorProperty_SetUncheckedElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(size0);
  vtkIdType *temp0 = store0.Data();
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetUncheckedElements(temp0, temp1) :
      op->vtkSMIdTypeVectorProperty::SetUncheckedElements(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMIdTypeVectorProperty_SetUncheckedElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMIdTypeVectorProperty_SetUncheckedElements_s1(self, args);
    case 2:
      return PyvtkSMIdTypeVectorProperty_SetUncheckedElements_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUncheckedElements");
  return nullptr;
}



static PyObject *
PyvtkSMIdTypeVectorProperty_SetElements1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetElements1(temp0) :
      op->vtkSMIdTypeVectorProperty::SetElements1(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetElements2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetElements2(temp0, temp1) :
      op->vtkSMIdTypeVectorProperty::SetElements2(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetElements3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElements3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SetElements3(temp0, temp1, temp2) :
      op->vtkSMIdTypeVectorProperty::SetElements3(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetElement(temp0) :
      op->vtkSMIdTypeVectorProperty::GetElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_GetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetUncheckedElement(temp0) :
      op->vtkSMIdTypeVectorProperty::GetUncheckedElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetUncheckedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUncheckedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  unsigned int temp0;
  vtkIdType temp1;
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
      op->vtkSMIdTypeVectorProperty::SetUncheckedElement(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_GetNumberOfUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUncheckedElements() :
      op->vtkSMIdTypeVectorProperty::GetNumberOfUncheckedElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_GetArgumentIsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgumentIsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArgumentIsArray() :
      op->vtkSMIdTypeVectorProperty::GetArgumentIsArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_SetArgumentIsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArgumentIsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArgumentIsArray(temp0);
    }
    else
    {
      op->vtkSMIdTypeVectorProperty::SetArgumentIsArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_ArgumentIsArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArgumentIsArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArgumentIsArrayOn();
    }
    else
    {
      op->vtkSMIdTypeVectorProperty::ArgumentIsArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_ArgumentIsArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArgumentIsArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArgumentIsArrayOff();
    }
    else
    {
      op->vtkSMIdTypeVectorProperty::ArgumentIsArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

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
      op->vtkSMIdTypeVectorProperty::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_ClearUncheckedElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUncheckedElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearUncheckedElements();
    }
    else
    {
      op->vtkSMIdTypeVectorProperty::ClearUncheckedElements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMIdTypeVectorProperty_ResetToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMIdTypeVectorProperty *op = static_cast<vtkSMIdTypeVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetToXMLDefaults();
    }
    else
    {
      op->vtkSMIdTypeVectorProperty::ResetToXMLDefaults();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMIdTypeVectorProperty_Methods[] = {
  {"IsTypeOf", PyvtkSMIdTypeVectorProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMIdTypeVectorProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMIdTypeVectorProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMIdTypeVectorProperty\nC++: static vtkSMIdTypeVectorProperty *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMIdTypeVectorProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMIdTypeVectorProperty\nC++: vtkSMIdTypeVectorProperty *NewInstance()\n\n"},
  {"GetNumberOfElements", PyvtkSMIdTypeVectorProperty_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements() -> int\nC++: unsigned int GetNumberOfElements() override;\n\nReturns the size of the vector.\n"},
  {"SetNumberOfElements", PyvtkSMIdTypeVectorProperty_SetNumberOfElements, METH_VARARGS,
   "V.SetNumberOfElements(int)\nC++: void SetNumberOfElements(unsigned int num) override;\n\nSets the size of the vector. If num is larger than the current\nnumber of elements, this may cause reallocation and copying.\n"},
  {"SetElement", PyvtkSMIdTypeVectorProperty_SetElement, METH_VARARGS,
   "V.SetElement(int, int) -> int\nC++: int SetElement(unsigned int idx, vtkIdType value)\n\nSet the value of 1 element. The vector is resized as necessary.\nReturns 0 if Set fails either because the property is read only\nor the value is not in all domains. Returns 1 otherwise.\n"},
  {"SetElements", PyvtkSMIdTypeVectorProperty_SetElements, METH_VARARGS,
   "V.SetElements((int, ...)) -> int\nC++: int SetElements(const vtkIdType *values)\nV.SetElements((int, ...), int) -> int\nC++: int SetElements(const vtkIdType *values,\n    unsigned int numValues)\n\nSet the values of all elements. The size of the values array has\nto be equal or larger to the size of the vector. Returns 0 if Set\nfails either because the property is read only or one or more of\nthe values is not in all domains. Returns 1 otherwise.\n"},
  {"SetUncheckedElements", PyvtkSMIdTypeVectorProperty_SetUncheckedElements, METH_VARARGS,
   "V.SetUncheckedElements((int, ...)) -> int\nC++: int SetUncheckedElements(const vtkIdType *values)\nV.SetUncheckedElements((int, ...), int) -> int\nC++: int SetUncheckedElements(const vtkIdType *values,\n    unsigned int numValues)\n\nSets the values of all the unchecked elements.\n"},
  {"SetElements1", PyvtkSMIdTypeVectorProperty_SetElements1, METH_VARARGS,
   "V.SetElements1(int) -> int\nC++: int SetElements1(vtkIdType value0)\n\nSet the value of 1st element. The vector is resized as necessary.\nReturns 0 if Set fails either because the property is read only\nor one or more of the values is not in all domains. Returns 1\notherwise.\n"},
  {"SetElements2", PyvtkSMIdTypeVectorProperty_SetElements2, METH_VARARGS,
   "V.SetElements2(int, int) -> int\nC++: int SetElements2(vtkIdType value0, vtkIdType value1)\n\nSet the values of the first 2 elements. The vector is resized as\nnecessary. Returns 0 if Set fails either because the property is\nread only or one or more of the values is not in all domains.\nReturns 1 otherwise.\n"},
  {"SetElements3", PyvtkSMIdTypeVectorProperty_SetElements3, METH_VARARGS,
   "V.SetElements3(int, int, int) -> int\nC++: int SetElements3(vtkIdType value0, vtkIdType value1,\n    vtkIdType value2)\n\nSet the values of the first 3 elements. The vector is resized as\nnecessary. Returns 0 if Set fails either because the property is\nread only or one or more of the values is not in all domains.\nReturns 1 otherwise.\n"},
  {"GetElement", PyvtkSMIdTypeVectorProperty_GetElement, METH_VARARGS,
   "V.GetElement(int) -> int\nC++: vtkIdType GetElement(unsigned int idx)\n\nReturns the value of 1 element.\n"},
  {"GetUncheckedElement", PyvtkSMIdTypeVectorProperty_GetUncheckedElement, METH_VARARGS,
   "V.GetUncheckedElement(int) -> int\nC++: vtkIdType GetUncheckedElement(unsigned int idx)\n\nReturns the value of 1 unchecked element. These are used by\ndomains. SetElement() first sets the value of 1 unchecked element\nand then calls IsInDomain and updates the value of the\ncorresponding element only if IsInDomain passes.\n"},
  {"SetUncheckedElement", PyvtkSMIdTypeVectorProperty_SetUncheckedElement, METH_VARARGS,
   "V.SetUncheckedElement(int, int)\nC++: void SetUncheckedElement(unsigned int idx, vtkIdType value)\n\nSet the value of 1 unchecked element. This can be used to check\nif a value is in all domains of the property. Call this and call\nIsInDomains().\n"},
  {"GetNumberOfUncheckedElements", PyvtkSMIdTypeVectorProperty_GetNumberOfUncheckedElements, METH_VARARGS,
   "V.GetNumberOfUncheckedElements() -> int\nC++: unsigned int GetNumberOfUncheckedElements() override;\n\nReturns the size of unchecked elements. Usually this is the same\nas the number of elements but can be different before a domain\ncheck is performed.\n"},
  {"GetArgumentIsArray", PyvtkSMIdTypeVectorProperty_GetArgumentIsArray, METH_VARARGS,
   "V.GetArgumentIsArray() -> int\nC++: virtual int GetArgumentIsArray()\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {"SetArgumentIsArray", PyvtkSMIdTypeVectorProperty_SetArgumentIsArray, METH_VARARGS,
   "V.SetArgumentIsArray(int)\nC++: virtual void SetArgumentIsArray(int _arg)\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {"ArgumentIsArrayOn", PyvtkSMIdTypeVectorProperty_ArgumentIsArrayOn, METH_VARARGS,
   "V.ArgumentIsArrayOn()\nC++: virtual void ArgumentIsArrayOn()\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {"ArgumentIsArrayOff", PyvtkSMIdTypeVectorProperty_ArgumentIsArrayOff, METH_VARARGS,
   "V.ArgumentIsArrayOff()\nC++: virtual void ArgumentIsArrayOff()\n\nIf ArgumentIsArray is true, multiple elements are passed in as\narray arguments. For example, For example, if RepeatCommand is\ntrue, NumberOfElementsPerCommand is 2, the command is SetFoo and\nthe values are 1 2 3 4 5 6, the resulting stream will have:\n * Invoke obj SetFoo array(1, 2)\n * Invoke obj SetFoo array(3, 4)\n * Invoke obj SetFoo array(5, 6)\n \n"},
  {"Copy", PyvtkSMIdTypeVectorProperty_Copy, METH_VARARGS,
   "V.Copy(vtkSMProperty)\nC++: void Copy(vtkSMProperty *src) override;\n\nCopy all property values.\n"},
  {"ClearUncheckedElements", PyvtkSMIdTypeVectorProperty_ClearUncheckedElements, METH_VARARGS,
   "V.ClearUncheckedElements()\nC++: void ClearUncheckedElements() override;\n\nAPI for setting unchecked element values.\n"},
  {"ResetToXMLDefaults", PyvtkSMIdTypeVectorProperty_ResetToXMLDefaults, METH_VARARGS,
   "V.ResetToXMLDefaults()\nC++: void ResetToXMLDefaults() override;\n\nFor properties that support specifying defaults in XML\nconfiguration, this method will reset the property value to the\ndefault values specified in the XML.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMIdTypeVectorProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMIdTypeVectorProperty", // tp_name
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
  PyvtkSMIdTypeVectorProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMIdTypeVectorProperty_StaticNew()
{
  return vtkSMIdTypeVectorProperty::New();
}

PyObject *PyvtkSMIdTypeVectorProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMIdTypeVectorProperty_Type, PyvtkSMIdTypeVectorProperty_Methods,
    "vtkSMIdTypeVectorProperty",
 &PyvtkSMIdTypeVectorProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkSMIdTypeVectorProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMVectorProperty_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMIdTypeVectorProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMIdTypeVectorProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMIdTypeVectorProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

