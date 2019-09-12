// python wrapper for vtkSMStringListDomain
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
#include "vtkSMStringListDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMStringListDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMStringListDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDomain_ClassNew
extern "C" { PyObject *PyvtkSMDomain_ClassNew(); }
#define DECLARED_PyvtkSMDomain_ClassNew
#endif

static const char *PyvtkSMStringListDomain_Doc =
  "vtkSMStringListDomain - list of strings\n\n"
  "Superclass: vtkSMDomain\n\n"
  "vtkSMStringListDomain represents a domain consisting of a list of\n"
  "strings. It only works with vtkSMStringVectorProperty. Valid XML\n"
  "elements are:\n"
  " * <String value=\"\">\n"
  " \n"
  "@sa\n"
  "vtkSMDomain vtkSMStringVectorProperty\n\n";


static PyObject *
PyvtkSMStringListDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMStringListDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMStringListDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMStringListDomain *tempr = vtkSMStringListDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMStringListDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMStringListDomain::NewInstance());

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
PyvtkSMStringListDomain_IsInDomain_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMStringListDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMStringListDomain_IsInDomain_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0, temp1) :
      op->vtkSMStringListDomain::IsInDomain(temp0, temp1));

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
PyvtkSMStringListDomain_IsInDomain(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMStringListDomain_IsInDomain_s1(self, args);
    case 2:
      return PyvtkSMStringListDomain_IsInDomain_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInDomain");
  return nullptr;
}



static PyObject *
PyvtkSMStringListDomain_GetString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetString(temp0) :
      op->vtkSMStringListDomain::GetString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_GetNumberOfStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfStrings() :
      op->vtkSMStringListDomain::GetNumberOfStrings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

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
      op->vtkSMStringListDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAnimationValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMStringListDomain::SetAnimationValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStringListDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStringListDomain *op = static_cast<vtkSMStringListDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMStringListDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMStringListDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMStringListDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMStringListDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMStringListDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMStringListDomain\nC++: static vtkSMStringListDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMStringListDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMStringListDomain\nC++: vtkSMStringListDomain *NewInstance()\n\n"},
  {"IsInDomain", PyvtkSMStringListDomain_IsInDomain, METH_VARARGS,
   "V.IsInDomain(vtkSMProperty) -> int\nC++: int IsInDomain(vtkSMProperty *property) override;\nV.IsInDomain(string, int) -> int\nC++: int IsInDomain(const char *string, unsigned int &idx)\n\nReturns true if the value of the property is in the domain. The\nproperty has to be a vtkSMStringVectorProperty. If all vector\nvalues are in the domain, it returns 1. It returns 0 otherwise.\n"},
  {"GetString", PyvtkSMStringListDomain_GetString, METH_VARARGS,
   "V.GetString(int) -> string\nC++: const char *GetString(unsigned int idx)\n\nReturns a string in the domain. The pointer may become invalid\nonce the domain has been modified.\n"},
  {"GetNumberOfStrings", PyvtkSMStringListDomain_GetNumberOfStrings, METH_VARARGS,
   "V.GetNumberOfStrings() -> int\nC++: unsigned int GetNumberOfStrings()\n\nReturns the number of strings in the domain.\n"},
  {"Update", PyvtkSMStringListDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *) override;\n\nUpdate self checking the \"unchecked\" values of all required\nproperties. Overwritten by sub-classes.\n"},
  {"SetAnimationValue", PyvtkSMStringListDomain_SetAnimationValue, METH_VARARGS,
   "V.SetAnimationValue(vtkSMProperty, int, float)\nC++: void SetAnimationValue(vtkSMProperty *, int, double)\n    override;\n\nSet the value of an element of a property from the animation\neditor.\n"},
  {"SetDefaultValues", PyvtkSMStringListDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values) override;\n\nA vtkSMProperty is often defined with a default value in the XML\nitself. However, many times, the default value must be determined\nat run time. To facilitate this, domains can override this method\nto compute and set the default value for the property. Note that\nunlike the compile-time default values, the application must\nexplicitly call this method to initialize the property. Returns 1\nif the domain updated the property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMStringListDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMStringListDomain", // tp_name
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
  PyvtkSMStringListDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMStringListDomain_StaticNew()
{
  return vtkSMStringListDomain::New();
}

PyObject *PyvtkSMStringListDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMStringListDomain_Type, PyvtkSMStringListDomain_Methods,
    "vtkSMStringListDomain",
 &PyvtkSMStringListDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMStringListDomain_Type;

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

void PyVTKAddFile_vtkSMStringListDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMStringListDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMStringListDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

