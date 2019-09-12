// python wrapper for vtkSMDiscreteDoubleDomain
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
#include "vtkSMDiscreteDoubleDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDiscreteDoubleDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDiscreteDoubleDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDomain_ClassNew
extern "C" { PyObject *PyvtkSMDomain_ClassNew(); }
#define DECLARED_PyvtkSMDomain_ClassNew
#endif

static const char *PyvtkSMDiscreteDoubleDomain_Doc =
  "vtkSMDiscreteDoubleDomain - set of double\n\n"
  "Superclass: vtkSMDomain\n\n"
  "vtkSMDiscreteDoubleDomain represents a set of double values. It\n"
  "supports a maximum of 256 values.\n\n"
  "Values are specified in xml as follow:\n\n"
  "{.xml}\n"
  "<DiscreteDoubleDomain values='val1 val2 ... valX' />\n\n";


static PyObject *
PyvtkSMDiscreteDoubleDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDiscreteDoubleDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDiscreteDoubleDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDiscreteDoubleDomain *op = static_cast<vtkSMDiscreteDoubleDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDiscreteDoubleDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDiscreteDoubleDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDiscreteDoubleDomain *tempr = vtkSMDiscreteDoubleDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDiscreteDoubleDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDiscreteDoubleDomain *op = static_cast<vtkSMDiscreteDoubleDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDiscreteDoubleDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDiscreteDoubleDomain::NewInstance());

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
PyvtkSMDiscreteDoubleDomain_IsInDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDiscreteDoubleDomain *op = static_cast<vtkSMDiscreteDoubleDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMDiscreteDoubleDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDiscreteDoubleDomain_GetValuesExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValuesExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDiscreteDoubleDomain *op = static_cast<vtkSMDiscreteDoubleDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetValuesExists() :
      op->vtkSMDiscreteDoubleDomain::GetValuesExists());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDiscreteDoubleDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDiscreteDoubleDomain *op = static_cast<vtkSMDiscreteDoubleDomain *>(vp);

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
      op->vtkSMDiscreteDoubleDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDiscreteDoubleDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMDiscreteDoubleDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDiscreteDoubleDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDiscreteDoubleDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDiscreteDoubleDomain\nC++: static vtkSMDiscreteDoubleDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDiscreteDoubleDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDiscreteDoubleDomain\nC++: vtkSMDiscreteDoubleDomain *NewInstance()\n\n"},
  {"IsInDomain", PyvtkSMDiscreteDoubleDomain_IsInDomain, METH_VARARGS,
   "V.IsInDomain(vtkSMProperty) -> int\nC++: int IsInDomain(vtkSMProperty *property) override;\n\nReturns true if the value of the property is in the domain. The\nproperty has to be a vtkSMDoubleVectorProperty. If the vector\nvalue is in the domain, it returns 1. It returns 0 otherwise.\n"},
  {"GetValuesExists", PyvtkSMDiscreteDoubleDomain_GetValuesExists, METH_VARARGS,
   "V.GetValuesExists() -> bool\nC++: bool GetValuesExists()\n\nReturns if Values is non empty.\n"},
  {"Update", PyvtkSMDiscreteDoubleDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *property) override;\n\nUpdates this from the property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDiscreteDoubleDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDiscreteDoubleDomain", // tp_name
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
  PyvtkSMDiscreteDoubleDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMDiscreteDoubleDomain_StaticNew()
{
  return vtkSMDiscreteDoubleDomain::New();
}

PyObject *PyvtkSMDiscreteDoubleDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDiscreteDoubleDomain_Type, PyvtkSMDiscreteDoubleDomain_Methods,
    "vtkSMDiscreteDoubleDomain",
 &PyvtkSMDiscreteDoubleDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMDiscreteDoubleDomain_Type;

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

void PyVTKAddFile_vtkSMDiscreteDoubleDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDiscreteDoubleDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDiscreteDoubleDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

