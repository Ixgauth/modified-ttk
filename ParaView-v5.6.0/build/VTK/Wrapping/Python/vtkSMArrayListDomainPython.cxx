// python wrapper for vtkSMArrayListDomain
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
#include "vtkSMArrayListDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMArrayListDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMArrayListDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMStringListDomain_ClassNew
extern "C" { PyObject *PyvtkSMStringListDomain_ClassNew(); }
#define DECLARED_PyvtkSMStringListDomain_ClassNew
#endif

static const char *PyvtkSMArrayListDomain_Doc =
  "vtkSMArrayListDomain - list of arrays obtained from input\n\n"
  "Superclass: vtkSMStringListDomain\n\n"
  "vtkSMArrayListDomain is used on vtkSMStringVectorProperty when the\n"
  "values on the property correspond to data arrays in the input.\n\n"
  "Supported Required Property Functions:\n"
  "\\li Input : (required) this point to a vtkSMInputProperty on the\n"
  "    parent\n"
  "               proxy. The value of this property provides the source\n"
  "that\n"
  "               provides the data information to determine the\n"
  "available\n"
  "               arrays.\n"
  "\\li FieldDataSelection : (optional) this points a\n"
  "    vtkSMIntVectorProperty\n"
  "               that provide the array association for accepted arrays\n"
  "as\n"
  "               defined by vtkDataObject::FieldAssociations. If\n"
  "               FieldDataSelection is missing, then the array\n"
  "association is\n"
  "               determined using the vtkSMInputArrayDomain on the\n"
  "               vtkSMInputProperty pointed by the required function\n"
  "Input.\n"
  "               If the input property has multiple\n"
  "vtkSMInputArrayDomain\n"
  "               types, you can identify the domain to use by using the\n"
  "\\li input_domain_name XML attribute. If neither the\n"
  "               FieldDataSelection is specified and no\n"
  "vtkSMInputArrayDomain\n"
  "               is found, then this domain assumes that all array\n"
  "associations\n"
  "               are valid.\n\n"
  "Supported XML attributes:\n"
  "\\li attribute_type : (optional) when specified, this is used to pick\n"
  "    the\n"
  "               default value in SetDefaultValues. This specifies the\n"
  "               array-attribute type to pick as the default, if\n"
  "available e.g.\n"
  "               if value is \"Scalars\", then by default the active\n"
  "scalar array\n"
  "               will be picked, if available. Not to be confused with\n"
  "               vtkDataObject::AttributeTypes, this corresponds to\n"
  "               vtkDataSetAttributes::AttributeTypes.\n"
  "               Accepted values are \"Scalars\", \"Vectors\", etc., as\n"
  "defined by\n"
  "               vtkDataSetAttributes::AttributeNames.\n"
  "\\li data_type: (optional) when specified qualifies the acceptable\n"
  "    arrays\n"
  "               list to the types specified. Value can be one or more\n"
  "of\n"
  "               VTK_BIT, VTK_CHAR, VTK_INT, VTK_FLOAT, VTK_DOUBLE,...\n"
  "etc.\n"
  "               or the equivalent integers from vtkType.h.  VTK_VOID,\n"
  "and 0\n"
  "               are equivalent to not specifying, meaning any data\n"
  "type.\n"
  "               VTK_DATA_ARRAY can be used to limit to vtkDataArray\n"
  "               subclasses.\n"
  "\\li none_string: (optional) when specified, this string appears as\n"
  "    the\n"
  "               first entry in the domain the list and can be used to\n"
  "show\n"
  "               \"None\", or \"Not available\" etc.\n"
  "\\li key_location / key_name / key_strategy: (optional)\n"
  "     those tree attributes are related to InformationKey of the\n"
  "array.\n"
  "     key_location/key_name are the location and name of the given\n"
  "InformationKey\n"
  "     key_strategy specifies if this specific key is needed to be in\n"
  "the domain\n"
  "     or if this key is rejected. One of need_key or reject_key.\n"
  "     if nothing is specified, the default is to add a\n"
  "vtkAbstractArray::GUI_HIDE\n"
  "     key, with the reject_key strategy, so that arrays that have this\n"
  "InformationKey\n"
  "     are not visible in the user interface.\n\n";

static PyTypeObject PyvtkSMArrayListDomain_InformationKeyStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMArrayListDomain.InformationKeyStrategy", // tp_name
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

PyObject *PyvtkSMArrayListDomain_InformationKeyStrategy_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMArrayListDomain_InformationKeyStrategy_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMArrayListDomain_InformationKeyStrategy_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMArrayListDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMArrayListDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMArrayListDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMArrayListDomain *tempr = vtkSMArrayListDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMArrayListDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMArrayListDomain::NewInstance());

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
PyvtkSMArrayListDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkSMArrayListDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_IsArrayPartial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsArrayPartial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsArrayPartial(temp0) :
      op->vtkSMArrayListDomain::IsArrayPartial(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation(temp0) :
      op->vtkSMArrayListDomain::GetFieldAssociation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetDomainAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomainAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDomainAssociation(temp0) :
      op->vtkSMArrayListDomain::GetDomainAssociation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeType() :
      op->vtkSMArrayListDomain::GetAttributeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetNoneString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoneString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetNoneString() :
      op->vtkSMArrayListDomain::GetNoneString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMArrayListDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_AddInformationKey_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->AddInformationKey(temp0, temp1, temp2) :
      op->vtkSMArrayListDomain::AddInformationKey(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMArrayListDomain_AddInformationKey_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->AddInformationKey(temp0, temp1) :
      op->vtkSMArrayListDomain::AddInformationKey(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMArrayListDomain_AddInformationKey(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMArrayListDomain_AddInformationKey_s1(self, args);
    case 2:
      return PyvtkSMArrayListDomain_AddInformationKey_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInformationKey");
  return nullptr;
}



static PyObject *
PyvtkSMArrayListDomain_RemoveInformationKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInformationKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->RemoveInformationKey(temp0, temp1) :
      op->vtkSMArrayListDomain::RemoveInformationKey(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetNumberOfInformationKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInformationKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfInformationKeys() :
      op->vtkSMArrayListDomain::GetNumberOfInformationKeys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_RemoveAllInformationKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllInformationKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllInformationKeys();
    }
    else
    {
      op->vtkSMArrayListDomain::RemoveAllInformationKeys();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetInformationKeyLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationKeyLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInformationKeyLocation(temp0) :
      op->vtkSMArrayListDomain::GetInformationKeyLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetInformationKeyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationKeyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInformationKeyName(temp0) :
      op->vtkSMArrayListDomain::GetInformationKeyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_GetInformationKeyStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationKeyStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArrayListDomain *op = static_cast<vtkSMArrayListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInformationKeyStrategy(temp0) :
      op->vtkSMArrayListDomain::GetInformationKeyStrategy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_CreateMangledName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateMangledName");

  vtkPVArrayInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation") &&
      ap.GetValue(temp1))
  {
    vtkStdString tempr = vtkSMArrayListDomain::CreateMangledName(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_ArrayNameFromMangledName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ArrayNameFromMangledName");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = vtkSMArrayListDomain::ArrayNameFromMangledName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArrayListDomain_ComponentIndexFromMangledName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComponentIndexFromMangledName");

  vtkPVArrayInformation *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation") &&
      ap.GetValue(temp1))
  {
    int tempr = vtkSMArrayListDomain::ComponentIndexFromMangledName(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMArrayListDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMArrayListDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMArrayListDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMArrayListDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMArrayListDomain\nC++: static vtkSMArrayListDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMArrayListDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMArrayListDomain\nC++: vtkSMArrayListDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMArrayListDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *prop) override;\n\nUpdates the string list based on the available arrays. Requires a\nproperty of class vtkSMProxyProperty which points to a\nvtkSMSourceProxy and contains a vtkSMInputArrayDomain. Only the\nfirst proxy and domain are used.\n"},
  {"IsArrayPartial", PyvtkSMArrayListDomain_IsArrayPartial, METH_VARARGS,
   "V.IsArrayPartial(int) -> int\nC++: int IsArrayPartial(unsigned int idx)\n\nReturns true if the array with the given idx is partial false\notherwise. See vtkPVArrayInformation for more information.\n"},
  {"GetFieldAssociation", PyvtkSMArrayListDomain_GetFieldAssociation, METH_VARARGS,
   "V.GetFieldAssociation(int) -> int\nC++: int GetFieldAssociation(unsigned int idx)\n\nGet field association for the array. When\nvtkSMInputArrayDomain::AutomaticPropertyConversion is ON, this is\nnot the true association for a particular array, but what the\ntarget filter is expecting. Thus use this to set the value on the\nproperty. To correctly show icons in UI, use\nGetDomainAssociation().\n"},
  {"GetDomainAssociation", PyvtkSMArrayListDomain_GetDomainAssociation, METH_VARARGS,
   "V.GetDomainAssociation(int) -> int\nC++: int GetDomainAssociation(unsigned int idx)\n\nGet the true field association for the array. This is same as\nGetFieldAssociation() except when\nvtkSMInputArrayDomain::AutomaticPropertyConversion is ON. In that\ncase, this may be different. e.g. let's say Pressure is a point\narray on the input, however this filter only works with cell\narray. In that case, since AutomaticPropertyConversion is ON,\nvtkPVPostFilter is going to automatically convert the point array\nPressure to a cell array for the filter. Now in this case, the\nSetInputArrayToProcess property on the filter must be set to ask\na \"cell\" array named Pressure, despite the fact that there's no\nsuch cell array. And the UI needs to show the \"Pressure\" as a\npoint array, since that's what the user is expecting. In this\ncase, GetFieldAssociation() is going to return \"CELL\" for the\n\"Pressure\", while GetDomainAssociation() is going to return\n\"POINT\". Thus, use GetFieldAssociation() for setting the property\nvalue, but use GetDomainAssociation() for the icon.\n"},
  {"GetAttributeType", PyvtkSMArrayListDomain_GetAttributeType, METH_VARARGS,
   "V.GetAttributeType() -> int\nC++: virtual int GetAttributeType()\n\nReturn the attribute type. The values are listed in\nvtkDataSetAttributes.h.\n"},
  {"GetNoneString", PyvtkSMArrayListDomain_GetNoneString, METH_VARARGS,
   "V.GetNoneString() -> string\nC++: virtual char *GetNoneString()\n\nReturn the string that is used as \"none_string\" in XML\nconfiguration.\n"},
  {"SetDefaultValues", PyvtkSMArrayListDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values) override;\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property. Returns 1\nif the domain updated the property.\n"},
  {"AddInformationKey", PyvtkSMArrayListDomain_AddInformationKey, METH_VARARGS,
   "V.AddInformationKey(string, string, int) -> int\nC++: virtual unsigned int AddInformationKey(const char *location,\n    const char *name, int strategy)\nV.AddInformationKey(string, string) -> int\nC++: virtual unsigned int AddInformationKey(const char *location,\n    const char *name)\n\nAdds a new InformationKey to the domain. The default strategy is\nNEED_KEY if none is specified. If no InformationKey is specified\nin the xml, the default behavior is to create a rejected key\nvtkAbstractArray::GUI_HIDE\n"},
  {"RemoveInformationKey", PyvtkSMArrayListDomain_RemoveInformationKey, METH_VARARGS,
   "V.RemoveInformationKey(string, string) -> int\nC++: unsigned int RemoveInformationKey(const char *location,\n    const char *name)\n\nRemoves an InformationKey from this domain.\n"},
  {"GetNumberOfInformationKeys", PyvtkSMArrayListDomain_GetNumberOfInformationKeys, METH_VARARGS,
   "V.GetNumberOfInformationKeys() -> int\nC++: unsigned int GetNumberOfInformationKeys()\n\nReturns the number of InformationKeys in this domain.\n"},
  {"RemoveAllInformationKeys", PyvtkSMArrayListDomain_RemoveAllInformationKeys, METH_VARARGS,
   "V.RemoveAllInformationKeys()\nC++: void RemoveAllInformationKeys()\n\nRemoves all InformationKeys from this domain.\n"},
  {"GetInformationKeyLocation", PyvtkSMArrayListDomain_GetInformationKeyLocation, METH_VARARGS,
   "V.GetInformationKeyLocation(int) -> string\nC++: const char *GetInformationKeyLocation(unsigned int)\n\nReturns the location/name/strategy of a given InformationKey\n"},
  {"GetInformationKeyName", PyvtkSMArrayListDomain_GetInformationKeyName, METH_VARARGS,
   "V.GetInformationKeyName(int) -> string\nC++: const char *GetInformationKeyName(unsigned int)\n\nReturns the location/name/strategy of a given InformationKey\n"},
  {"GetInformationKeyStrategy", PyvtkSMArrayListDomain_GetInformationKeyStrategy, METH_VARARGS,
   "V.GetInformationKeyStrategy(int) -> int\nC++: int GetInformationKeyStrategy(unsigned int)\n\nReturns the location/name/strategy of a given InformationKey\n"},
  {"CreateMangledName", PyvtkSMArrayListDomain_CreateMangledName, METH_VARARGS,
   "V.CreateMangledName(vtkPVArrayInformation, int) -> string\nC++: static vtkStdString CreateMangledName(\n    vtkPVArrayInformation *arrayInfo, int component)\n\nreturns the mangled name for the component index that is passed\nin.\n"},
  {"ArrayNameFromMangledName", PyvtkSMArrayListDomain_ArrayNameFromMangledName, METH_VARARGS,
   "V.ArrayNameFromMangledName(string) -> string\nC++: static vtkStdString ArrayNameFromMangledName(\n    const char *name)\n\nreturns the mangled name for the component index that is passed\nin.\n"},
  {"ComponentIndexFromMangledName", PyvtkSMArrayListDomain_ComponentIndexFromMangledName, METH_VARARGS,
   "V.ComponentIndexFromMangledName(vtkPVArrayInformation, string)\n    -> int\nC++: static int ComponentIndexFromMangledName(\n    vtkPVArrayInformation *info, const char *name)\n\nreturns the mangled name for the component index that is passed\nin.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMArrayListDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMArrayListDomain", // tp_name
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
  PyvtkSMArrayListDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMArrayListDomain_StaticNew()
{
  return vtkSMArrayListDomain::New();
}

PyObject *PyvtkSMArrayListDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMArrayListDomain_Type, PyvtkSMArrayListDomain_Methods,
    "vtkSMArrayListDomain",
 &PyvtkSMArrayListDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMArrayListDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMStringListDomain_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMArrayListDomain_InformationKeyStrategy_Type);
  PyvtkSMArrayListDomain_InformationKeyStrategy_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMArrayListDomain_InformationKeyStrategy_Type);

  o = (PyObject *)&PyvtkSMArrayListDomain_InformationKeyStrategy_Type;
  if (PyDict_SetItemString(d, "InformationKeyStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSMArrayListDomain::InformationKeyStrategy cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "NEED_KEY", vtkSMArrayListDomain::NEED_KEY },
        { "REJECT_KEY", vtkSMArrayListDomain::REJECT_KEY },
      };

    o = PyvtkSMArrayListDomain_InformationKeyStrategy_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMArrayListDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMArrayListDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMArrayListDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

