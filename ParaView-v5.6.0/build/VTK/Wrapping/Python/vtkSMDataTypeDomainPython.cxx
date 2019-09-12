// python wrapper for vtkSMDataTypeDomain
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
#include "vtkSMDataTypeDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDataTypeDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDataTypeDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDomain_ClassNew
extern "C" { PyObject *PyvtkSMDomain_ClassNew(); }
#define DECLARED_PyvtkSMDomain_ClassNew
#endif

static const char *PyvtkSMDataTypeDomain_Doc =
  "vtkSMDataTypeDomain - restricts the input proxies to one or more data\ntypes\n\n"
  "Superclass: vtkSMDomain\n\n"
  "vtkSMDataTypeDomain restricts the input proxies to one or more data\n"
  "types. These data types are specified in the XML with the \\<DataType>\n"
  "element. VTK class names are used. It is possible to specify a\n"
  "superclass (i.e. vtkDataSet) for a more general domain. Works with\n"
  "vtkSMSourceProxy only. Valid XML elements are:\n"
  " * <DataType value=\"\"> where value is the classname for the data type\n"
  " for example: vtkDataSet, vtkImageData,...\n"
  " \n"
  "@sa\n"
  "vtkSMDomain  vtkSMSourceProxy\n\n";


static PyObject *
PyvtkSMDataTypeDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDataTypeDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataTypeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDataTypeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataTypeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDataTypeDomain *tempr = vtkSMDataTypeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataTypeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDataTypeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDataTypeDomain::NewInstance());

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
PyvtkSMDataTypeDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMDataTypeDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMDataTypeDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0, temp1) :
      op->vtkSMDataTypeDomain::IsInDomain(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDataTypeDomain_IsInDomain_Methods[] = {
  {nullptr, PyvtkSMDataTypeDomain_IsInDomain_s1, METH_VARARGS,
   "@V *vtkSMProperty"},
  {nullptr, PyvtkSMDataTypeDomain_IsInDomain_s2, METH_VARARGS,
   "@V|i *vtkSMSourceProxy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMDataTypeDomain_IsInDomain(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMDataTypeDomain_IsInDomain_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMDataTypeDomain_IsInDomain_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return nullptr;
}



static PyObject *
PyvtkSMDataTypeDomain_GetNumberOfDataTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfDataTypes() :
      op->vtkSMDataTypeDomain::GetNumberOfDataTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDataTypeDomain_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDataTypeDomain *op = static_cast<vtkSMDataTypeDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataType(temp0) :
      op->vtkSMDataTypeDomain::GetDataType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDataTypeDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMDataTypeDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDataTypeDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDataTypeDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDataTypeDomain\nC++: static vtkSMDataTypeDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDataTypeDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDataTypeDomain\nC++: vtkSMDataTypeDomain *NewInstance()\n\n"},
  {"IsInDomain", PyvtkSMDataTypeDomain_IsInDomain, METH_VARARGS,
   "V.IsInDomain(vtkSMProperty) -> int\nC++: int IsInDomain(vtkSMProperty *property) override;\nV.IsInDomain(vtkSMSourceProxy, int) -> int\nC++: int IsInDomain(vtkSMSourceProxy *proxy, int outputport=0)\n\nReturns true if the value of the property is in the domain. The\nproperty has to be a vtkSMProxyProperty which points to a\nvtkSMSourceProxy. If all data types of the input's parts are in\nthe domain, it returns. It returns 0 otherwise.\n"},
  {"GetNumberOfDataTypes", PyvtkSMDataTypeDomain_GetNumberOfDataTypes, METH_VARARGS,
   "V.GetNumberOfDataTypes() -> int\nC++: unsigned int GetNumberOfDataTypes()\n\nReturns the number of acceptable data types.\n"},
  {"GetDataType", PyvtkSMDataTypeDomain_GetDataType, METH_VARARGS,
   "V.GetDataType(int) -> string\nC++: const char *GetDataType(unsigned int idx)\n\nReturns a data type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDataTypeDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDataTypeDomain", // tp_name
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
  PyvtkSMDataTypeDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMDataTypeDomain_StaticNew()
{
  return vtkSMDataTypeDomain::New();
}

PyObject *PyvtkSMDataTypeDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDataTypeDomain_Type, PyvtkSMDataTypeDomain_Methods,
    "vtkSMDataTypeDomain",
 &PyvtkSMDataTypeDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMDataTypeDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMDataTypeDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDataTypeDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDataTypeDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

