// python wrapper for vtkSMRangedTransferFunctionDomain
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
#include "vtkSMRangedTransferFunctionDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMRangedTransferFunctionDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMRangedTransferFunctionDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxyListDomain_ClassNew
extern "C" { PyObject *PyvtkSMProxyListDomain_ClassNew(); }
#define DECLARED_PyvtkSMProxyListDomain_ClassNew
#endif

static const char *PyvtkSMRangedTransferFunctionDomain_Doc =
  "vtkSMRangedTransferFunctionDomain - represents a ranged\nvtkSMTransferFunctionProxy\n\n"
  "Superclass: vtkSMProxyListDomain\n\n"
  "This domain represent a single vtkSMTransferFunctionProxy with a\n"
  "range defined by a vtkSMArrayRangeDomain used internally. It still\n"
  "need to be named \"proxy_list\" so the associated python class supports\n"
  "it.\n\n"
  "Example usage :{xml}\n"
  "      <RangedTransferFunctionDomain name=\"proxy_list\">\n"
  "        \n"
  "          <Property function=\"Input\" name=\"Input\" />\n"
  "          <Property function=\"ArraySelection\" name=\"OpacityArray\" />\n"
  "          <Property function=\"ComponentSelection\"\n"
  "name=\"OpacityArrayComponent\" />\n"
  "        \n"
  "      \n\n";


static PyObject *
PyvtkSMRangedTransferFunctionDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMRangedTransferFunctionDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRangedTransferFunctionDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRangedTransferFunctionDomain *op = static_cast<vtkSMRangedTransferFunctionDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRangedTransferFunctionDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRangedTransferFunctionDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMRangedTransferFunctionDomain *tempr = vtkSMRangedTransferFunctionDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRangedTransferFunctionDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRangedTransferFunctionDomain *op = static_cast<vtkSMRangedTransferFunctionDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMRangedTransferFunctionDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRangedTransferFunctionDomain::NewInstance());

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
PyvtkSMRangedTransferFunctionDomain_GetRangeMinimum_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRangedTransferFunctionDomain *op = static_cast<vtkSMRangedTransferFunctionDomain *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetRangeMinimum(temp0, temp1) :
      op->vtkSMRangedTransferFunctionDomain::GetRangeMinimum(temp0, temp1));

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
PyvtkSMRangedTransferFunctionDomain_GetRangeMinimum_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRangedTransferFunctionDomain *op = static_cast<vtkSMRangedTransferFunctionDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRangeMinimum(temp0) :
      op->vtkSMRangedTransferFunctionDomain::GetRangeMinimum(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMRangedTransferFunctionDomain_GetRangeMinimum(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMRangedTransferFunctionDomain_GetRangeMinimum_s1(self, args);
    case 1:
      return PyvtkSMRangedTransferFunctionDomain_GetRangeMinimum_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRangeMinimum");
  return nullptr;
}



static PyObject *
PyvtkSMRangedTransferFunctionDomain_GetRangeMaximum_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRangedTransferFunctionDomain *op = static_cast<vtkSMRangedTransferFunctionDomain *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetRangeMaximum(temp0, temp1) :
      op->vtkSMRangedTransferFunctionDomain::GetRangeMaximum(temp0, temp1));

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
PyvtkSMRangedTransferFunctionDomain_GetRangeMaximum_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRangedTransferFunctionDomain *op = static_cast<vtkSMRangedTransferFunctionDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRangeMaximum(temp0) :
      op->vtkSMRangedTransferFunctionDomain::GetRangeMaximum(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMRangedTransferFunctionDomain_GetRangeMaximum(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMRangedTransferFunctionDomain_GetRangeMaximum_s1(self, args);
    case 1:
      return PyvtkSMRangedTransferFunctionDomain_GetRangeMaximum_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRangeMaximum");
  return nullptr;
}



static PyObject *
PyvtkSMRangedTransferFunctionDomain_GetRangeMinimumExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeMinimumExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRangedTransferFunctionDomain *op = static_cast<vtkSMRangedTransferFunctionDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRangeMinimumExists(temp0) :
      op->vtkSMRangedTransferFunctionDomain::GetRangeMinimumExists(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRangedTransferFunctionDomain_GetRangeMaximumExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeMaximumExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRangedTransferFunctionDomain *op = static_cast<vtkSMRangedTransferFunctionDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRangeMaximumExists(temp0) :
      op->vtkSMRangedTransferFunctionDomain::GetRangeMaximumExists(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMRangedTransferFunctionDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMRangedTransferFunctionDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMRangedTransferFunctionDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMRangedTransferFunctionDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMRangedTransferFunctionDomain\nC++: static vtkSMRangedTransferFunctionDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMRangedTransferFunctionDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMRangedTransferFunctionDomain\nC++: vtkSMRangedTransferFunctionDomain *NewInstance()\n\n"},
  {"GetRangeMinimum", PyvtkSMRangedTransferFunctionDomain_GetRangeMinimum, METH_VARARGS,
   "V.GetRangeMinimum(int, int) -> float\nC++: double GetRangeMinimum(unsigned int idx, int &exists)\nV.GetRangeMinimum(int) -> float\nC++: double GetRangeMinimum(unsigned int idx)\n\nReturn a range min. value if it exists. If the min. exists exists\nis set to 1. Otherwise, it is set to 0. An unspecified min. is\nequivalent to -inf\n"},
  {"GetRangeMaximum", PyvtkSMRangedTransferFunctionDomain_GetRangeMaximum, METH_VARARGS,
   "V.GetRangeMaximum(int, int) -> float\nC++: double GetRangeMaximum(unsigned int idx, int &exists)\nV.GetRangeMaximum(int) -> float\nC++: double GetRangeMaximum(unsigned int idx)\n\nReturn a range max. value if it exists. If the max. exists exists\nis set to 1. Otherwise, it is set to 0. An unspecified max. is\nequivalent to +inf\n"},
  {"GetRangeMinimumExists", PyvtkSMRangedTransferFunctionDomain_GetRangeMinimumExists, METH_VARARGS,
   "V.GetRangeMinimumExists(int) -> bool\nC++: bool GetRangeMinimumExists(unsigned int idx)\n\nReturns if range minimum/maximum bound is set for the domain.\n"},
  {"GetRangeMaximumExists", PyvtkSMRangedTransferFunctionDomain_GetRangeMaximumExists, METH_VARARGS,
   "V.GetRangeMaximumExists(int) -> bool\nC++: bool GetRangeMaximumExists(unsigned int idx)\n\nReturns if range minimum/maximum bound is set for the domain.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMRangedTransferFunctionDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMRangedTransferFunctionDomain", // tp_name
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
  PyvtkSMRangedTransferFunctionDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMRangedTransferFunctionDomain_StaticNew()
{
  return vtkSMRangedTransferFunctionDomain::New();
}

PyObject *PyvtkSMRangedTransferFunctionDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMRangedTransferFunctionDomain_Type, PyvtkSMRangedTransferFunctionDomain_Methods,
    "vtkSMRangedTransferFunctionDomain",
 &PyvtkSMRangedTransferFunctionDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMRangedTransferFunctionDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxyListDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMRangedTransferFunctionDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMRangedTransferFunctionDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMRangedTransferFunctionDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

