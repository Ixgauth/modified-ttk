// python wrapper for vtkSMFixedTypeDomain
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
#include "vtkSMFixedTypeDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMFixedTypeDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMFixedTypeDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDomain_ClassNew
extern "C" { PyObject *PyvtkSMDomain_ClassNew(); }
#define DECLARED_PyvtkSMDomain_ClassNew
#endif

static const char *PyvtkSMFixedTypeDomain_Doc =
  "vtkSMFixedTypeDomain - restricts the proxy to have the same type as\nprevious proxy\n\n"
  "Superclass: vtkSMDomain\n\n"
  "vtkSMFixedTypeDomain is used by input properties of filters that can\n"
  "not have different input types after input is set the first time. For\n"
  "example, a sub-class vtkDataSetToDataSetFilter, once connected in a\n"
  "pipeline can not change it's input type, say, from vtkImageData to\n"
  "vtkUnstructuredGrid because it's output can not change.\n"
  "@sa\n"
  "vtkSMDomain\n\n";


static PyObject *
PyvtkSMFixedTypeDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMFixedTypeDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMFixedTypeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFixedTypeDomain *op = static_cast<vtkSMFixedTypeDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMFixedTypeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMFixedTypeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMFixedTypeDomain *tempr = vtkSMFixedTypeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMFixedTypeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFixedTypeDomain *op = static_cast<vtkSMFixedTypeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMFixedTypeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMFixedTypeDomain::NewInstance());

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
PyvtkSMFixedTypeDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFixedTypeDomain *op = static_cast<vtkSMFixedTypeDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMFixedTypeDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMFixedTypeDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFixedTypeDomain *op = static_cast<vtkSMFixedTypeDomain *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  vtkSMSourceProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0, temp1) :
      op->vtkSMFixedTypeDomain::IsInDomain(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMFixedTypeDomain_IsInDomain(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMFixedTypeDomain_IsInDomain_s1(self, args);
    case 2:
      return PyvtkSMFixedTypeDomain_IsInDomain_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return nullptr;
}


static PyMethodDef PyvtkSMFixedTypeDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMFixedTypeDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMFixedTypeDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMFixedTypeDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMFixedTypeDomain\nC++: static vtkSMFixedTypeDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMFixedTypeDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMFixedTypeDomain\nC++: vtkSMFixedTypeDomain *NewInstance()\n\n"},
  {"IsInDomain", PyvtkSMFixedTypeDomain_IsInDomain, METH_VARARGS,
   "V.IsInDomain(vtkSMProperty) -> int\nC++: int IsInDomain(vtkSMProperty *property) override;\nV.IsInDomain(vtkSMSourceProxy, vtkSMSourceProxy) -> int\nC++: virtual int IsInDomain(vtkSMSourceProxy *oldProxy,\n    vtkSMSourceProxy *newProxy)\n\nReturns true if the value of the property is in the domain. The\nproperty has to be a vtkSMProxyProperty which points to a\nvtkSMSourceProxy. If the new (unchecked) source proxy has the\nsame number of parts and data types as the old (checked) one, it\nreturns 1. Returns 0 otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMFixedTypeDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMFixedTypeDomain", // tp_name
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
  PyvtkSMFixedTypeDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMFixedTypeDomain_StaticNew()
{
  return vtkSMFixedTypeDomain::New();
}

PyObject *PyvtkSMFixedTypeDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMFixedTypeDomain_Type, PyvtkSMFixedTypeDomain_Methods,
    "vtkSMFixedTypeDomain",
 &PyvtkSMFixedTypeDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMFixedTypeDomain_Type;

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

void PyVTKAddFile_vtkSMFixedTypeDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMFixedTypeDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMFixedTypeDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

