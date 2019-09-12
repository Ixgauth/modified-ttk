// python wrapper for vtkSMInputArrayDomain
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
#include "vtkSMInputArrayDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMInputArrayDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMInputArrayDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDomain_ClassNew
extern "C" { PyObject *PyvtkSMDomain_ClassNew(); }
#define DECLARED_PyvtkSMDomain_ClassNew
#endif

static const char *PyvtkSMInputArrayDomain_Doc =
  "vtkSMInputArrayDomain - domain to ensure that input has required\ntypes of arrays.\n\n"
  "Superclass: vtkSMDomain\n\n"
  "vtkSMInputArrayDomain is a domain that can be used on a\n"
  "vtkSMInputProperty to check if the pipeline input provides attribute\n"
  "arrays of the required types e.g. if a filter can only work if the\n"
  "input data set has cell data arrays, then one can use this domain.\n\n"
  "vtkSMInputArrayDomain also provides a mechanism to check if the\n"
  "attribute arrays have a certain number of components.\n\n"
  "When enabled, ParaView supports automatic array conversion i.e.\n"
  "extracting components or converting cell data to point data and\n"
  "vice-versa is done implicitly. In that case, vtkSMInputArrayDomain's\n"
  "behavior also changes as appropriate.\n\n"
  "Supported XML attributes:\n"
  "\\li attribute_type : (optional) value can be 'point', 'cell',\n"
  "    'field',\n"
  "                        'vertex', 'edge', 'row', 'none',\n"
  "'any-except-field', 'any'.\n"
  "                        If not specified, 'any-except-field' is\n"
  "assumed. This\n"
  "                        indicates the attribute type for acceptable\n"
  "arrays.\n"
  "\\li number_of_components : (optional) Indicates the number of\n"
  "    components\n"
  "                        required in arrays that are considered\n"
  "acceptable.\n"
  "                        0 (default) indicates any number of\n"
  "components is acceptable.\n"
  "                        A comma-separated list (e.g., \"1\" or \"1,3,4\")\n"
  "of component counts\n"
  "                        limits acceptable arrays to those with a\n"
  "number of components that\n"
  "                        appear in the list.\n\n"
  "This domain doesn't support any required properties (to help clean\n"
  "old code, we print a warning if any required properties are\n"
  "specified).\n\n"
  "@attention Prior to ParaView 5.0, attribute_type=\"any\" meant all\n"
  "attributes excepting field data. For being consistent with general\n"
  "understanding of \"any\", this has been changed to include field data\n"
  "arrays since 5.0. Use \"any-except-field\" for cases where the\n"
  "intention is to match any attribute arrays except field data arrays.\n\n";

static PyTypeObject PyvtkSMInputArrayDomain_AttributeTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMInputArrayDomain.AttributeTypes", // tp_name
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

PyObject *PyvtkSMInputArrayDomain_AttributeTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMInputArrayDomain_AttributeTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMInputArrayDomain_AttributeTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMInputArrayDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMInputArrayDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMInputArrayDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMInputArrayDomain *tempr = vtkSMInputArrayDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMInputArrayDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMInputArrayDomain::NewInstance());

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
PyvtkSMInputArrayDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMInputArrayDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMInputArrayDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  unsigned int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0, temp1) :
      op->vtkSMInputArrayDomain::IsInDomain(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMInputArrayDomain_IsInDomain_Methods[] = {
  {nullptr, PyvtkSMInputArrayDomain_IsInDomain_s1, METH_VARARGS,
   "@V *vtkSMProperty"},
  {nullptr, PyvtkSMInputArrayDomain_IsInDomain_s2, METH_VARARGS,
   "@V|I *vtkSMSourceProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMInputArrayDomain_IsInDomain(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMInputArrayDomain_IsInDomain_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMInputArrayDomain_IsInDomain_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return nullptr;
}



static PyObject *
PyvtkSMInputArrayDomain_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeType() :
      op->vtkSMInputArrayDomain::GetAttributeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_GetAttributeTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeTypeAsString() :
      op->vtkSMInputArrayDomain::GetAttributeTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_SetAutomaticPropertyConversion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAutomaticPropertyConversion");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMInputArrayDomain::SetAutomaticPropertyConversion(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_GetAutomaticPropertyConversion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAutomaticPropertyConversion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkSMInputArrayDomain::GetAutomaticPropertyConversion();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_IsAttributeTypeAcceptable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsAttributeTypeAcceptable");

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = vtkSMInputArrayDomain::IsAttributeTypeAcceptable(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputArrayDomain_IsArrayAcceptable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsArrayAcceptable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputArrayDomain *op = static_cast<vtkSMInputArrayDomain *>(vp);

  vtkPVArrayInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVArrayInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->IsArrayAcceptable(temp0) :
      op->vtkSMInputArrayDomain::IsArrayAcceptable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMInputArrayDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMInputArrayDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMInputArrayDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMInputArrayDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMInputArrayDomain\nC++: static vtkSMInputArrayDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMInputArrayDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMInputArrayDomain\nC++: vtkSMInputArrayDomain *NewInstance()\n\n"},
  {"IsInDomain", PyvtkSMInputArrayDomain_IsInDomain, METH_VARARGS,
   "V.IsInDomain(vtkSMProperty) -> int\nC++: int IsInDomain(vtkSMProperty *property) override;\nV.IsInDomain(vtkSMSourceProxy, int) -> int\nC++: int IsInDomain(vtkSMSourceProxy *proxy,\n    unsigned int outputport=0)\n\nReturns true if the value of the property is in the domain. The\nproperty has to be a vtkSMProxyProperty which points to a\nvtkSMSourceProxy. The input has to have one or more arrays that\nmatch the requirements.\n"},
  {"GetAttributeType", PyvtkSMInputArrayDomain_GetAttributeType, METH_VARARGS,
   "V.GetAttributeType() -> int\nC++: virtual int GetAttributeType()\n\nGet the attribute type. Valid values are defined in\nAttributeTypes which map to vtkDataObject::AttributeTypes.\n"},
  {"GetAttributeTypeAsString", PyvtkSMInputArrayDomain_GetAttributeTypeAsString, METH_VARARGS,
   "V.GetAttributeTypeAsString() -> string\nC++: const char *GetAttributeTypeAsString()\n\nGet the attribute type. Valid values are defined in\nAttributeTypes which map to vtkDataObject::AttributeTypes.\n"},
  {"SetAutomaticPropertyConversion", PyvtkSMInputArrayDomain_SetAutomaticPropertyConversion, METH_VARARGS,
   "V.SetAutomaticPropertyConversion(bool)\nC++: static void SetAutomaticPropertyConversion(bool)\n\nGet/Set the application wide setting for automatic conversion of\nproperties. Automatic conversion of properties allows conversion\nbetween cell and point based properties, and the extraction of\nvector components as scalar properties\n"},
  {"GetAutomaticPropertyConversion", PyvtkSMInputArrayDomain_GetAutomaticPropertyConversion, METH_VARARGS,
   "V.GetAutomaticPropertyConversion() -> bool\nC++: static bool GetAutomaticPropertyConversion()\n\n"},
  {"IsAttributeTypeAcceptable", PyvtkSMInputArrayDomain_IsAttributeTypeAcceptable, METH_VARARGS,
   "V.IsAttributeTypeAcceptable(int, int, [int, ...]) -> bool\nC++: static bool IsAttributeTypeAcceptable(int required_type,\n    int attribute_type, int *acceptable_as_type=NULL)\n\nMethod to check if a particular attribute-type ( attribute_type)\nwill be accepted by this domain with a required attribute type (\nrequired_type). This takes into consideration the state of\nAutomaticePropertyConversion flag. If a particular attribute_type\nis acceptable only because AutomaticPropertyConversion is true,\nacceptable_as_type value will be set to the attribute type that\nthe particular attribute was automatically converted to. e.g. is\nrequired_type = POINT and attribute_type is CELL and\nAutomaticPropertyConversion is true, this method will return true\nand acceptable_as_type will be set to POINT. In other cases,\nacceptable_as_type is simply set to attribute_type.\n"},
  {"IsArrayAcceptable", PyvtkSMInputArrayDomain_IsArrayAcceptable, METH_VARARGS,
   "V.IsArrayAcceptable(vtkPVArrayInformation) -> int\nC++: int IsArrayAcceptable(vtkPVArrayInformation *arrayInfo)\n\nThis method will check if the arrayInfo contain info about an\nacceptable array, by checking its number of components against\nthis domain acceptable numbers of components. Note that it takes\ninto account property conversion This method return the accepted\nnumber of components to use.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMInputArrayDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMInputArrayDomain", // tp_name
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
  PyvtkSMInputArrayDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMInputArrayDomain_StaticNew()
{
  return vtkSMInputArrayDomain::New();
}

PyObject *PyvtkSMInputArrayDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMInputArrayDomain_Type, PyvtkSMInputArrayDomain_Methods,
    "vtkSMInputArrayDomain",
 &PyvtkSMInputArrayDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMInputArrayDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMDomain_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMInputArrayDomain_AttributeTypes_Type);
  PyvtkSMInputArrayDomain_AttributeTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMInputArrayDomain_AttributeTypes_Type);

  o = (PyObject *)&PyvtkSMInputArrayDomain_AttributeTypes_Type;
  if (PyDict_SetItemString(d, "AttributeTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkSMInputArrayDomain::AttributeTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "POINT", vtkSMInputArrayDomain::POINT },
        { "CELL", vtkSMInputArrayDomain::CELL },
        { "FIELD", vtkSMInputArrayDomain::FIELD },
        { "ANY_EXCEPT_FIELD", vtkSMInputArrayDomain::ANY_EXCEPT_FIELD },
        { "VERTEX", vtkSMInputArrayDomain::VERTEX },
        { "EDGE", vtkSMInputArrayDomain::EDGE },
        { "ROW", vtkSMInputArrayDomain::ROW },
        { "ANY", vtkSMInputArrayDomain::ANY },
        { "NUMBER_OF_ATTRIBUTE_TYPES", vtkSMInputArrayDomain::NUMBER_OF_ATTRIBUTE_TYPES },
      };

    o = PyvtkSMInputArrayDomain_AttributeTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMInputArrayDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMInputArrayDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMInputArrayDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

