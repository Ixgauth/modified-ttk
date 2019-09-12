// python wrapper for vtkSMDoubleRangeDomain
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
#include "vtkSMDoubleRangeDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDoubleRangeDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDoubleRangeDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMDomain_ClassNew
extern "C" { PyObject *PyvtkSMDomain_ClassNew(); }
#define DECLARED_PyvtkSMDomain_ClassNew
#endif

static const char *PyvtkSMDoubleRangeDomain_Doc =
  "vtkSMDoubleRangeDomain - type specific extension to\nvtkSMRangeDomainTemplate for doubles.\n\n"
  "Superclass: vtkSMDomain\n\n"
  "vtkSMDoubleRangeDomain is a type-specific specialization for\n"
  "vtkSMRangeDomainTemplate.\n\n";


static PyObject *
PyvtkSMDoubleRangeDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDoubleRangeDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleRangeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleRangeDomain *op = static_cast<vtkSMDoubleRangeDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDoubleRangeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleRangeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDoubleRangeDomain *tempr = vtkSMDoubleRangeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleRangeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleRangeDomain *op = static_cast<vtkSMDoubleRangeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDoubleRangeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDoubleRangeDomain::NewInstance());

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
PyvtkSMDoubleRangeDomain_GetMinimum_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleRangeDomain *op = static_cast<vtkSMDoubleRangeDomain *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimum(temp0, temp1) :
      op->vtkSMDoubleRangeDomain::GetMinimum(temp0, temp1));

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
PyvtkSMDoubleRangeDomain_GetMinimum_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleRangeDomain *op = static_cast<vtkSMDoubleRangeDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimum(temp0) :
      op->vtkSMDoubleRangeDomain::GetMinimum(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMDoubleRangeDomain_GetMinimum(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMDoubleRangeDomain_GetMinimum_s1(self, args);
    case 1:
      return PyvtkSMDoubleRangeDomain_GetMinimum_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMinimum");
  return nullptr;
}



static PyObject *
PyvtkSMDoubleRangeDomain_GetMaximum_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleRangeDomain *op = static_cast<vtkSMDoubleRangeDomain *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximum(temp0, temp1) :
      op->vtkSMDoubleRangeDomain::GetMaximum(temp0, temp1));

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
PyvtkSMDoubleRangeDomain_GetMaximum_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleRangeDomain *op = static_cast<vtkSMDoubleRangeDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximum(temp0) :
      op->vtkSMDoubleRangeDomain::GetMaximum(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMDoubleRangeDomain_GetMaximum(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMDoubleRangeDomain_GetMaximum_s1(self, args);
    case 1:
      return PyvtkSMDoubleRangeDomain_GetMaximum_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMaximum");
  return nullptr;
}



static PyObject *
PyvtkSMDoubleRangeDomain_GetMinimumExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleRangeDomain *op = static_cast<vtkSMDoubleRangeDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinimumExists(temp0) :
      op->vtkSMDoubleRangeDomain::GetMinimumExists(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleRangeDomain_GetMaximumExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleRangeDomain *op = static_cast<vtkSMDoubleRangeDomain *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumExists(temp0) :
      op->vtkSMDoubleRangeDomain::GetMaximumExists(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleRangeDomain_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleRangeDomain *op = static_cast<vtkSMDoubleRangeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkSMDoubleRangeDomain::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDoubleRangeDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMDoubleRangeDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDoubleRangeDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDoubleRangeDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDoubleRangeDomain\nC++: static vtkSMDoubleRangeDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDoubleRangeDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDoubleRangeDomain\nC++: vtkSMDoubleRangeDomain *NewInstance()\n\n"},
  {"GetMinimum", PyvtkSMDoubleRangeDomain_GetMinimum, METH_VARARGS,
   "V.GetMinimum(int, int) -> float\nC++: double GetMinimum(unsigned int idx, int &exists)\nV.GetMinimum(int) -> float\nC++: double GetMinimum(unsigned int idx)\n\nReturn a min. value if it exists. If the min. exists exists is\nset to 1. Otherwise, it is set to 0. An unspecified min. is\nequivalent to -inf\n"},
  {"GetMaximum", PyvtkSMDoubleRangeDomain_GetMaximum, METH_VARARGS,
   "V.GetMaximum(int, int) -> float\nC++: double GetMaximum(unsigned int idx, int &exists)\nV.GetMaximum(int) -> float\nC++: double GetMaximum(unsigned int idx)\n\nReturn a max. value if it exists. If the max. exists exists is\nset to 1. Otherwise, it is set to 0. An unspecified max. is\nequivalent to +inf\n"},
  {"GetMinimumExists", PyvtkSMDoubleRangeDomain_GetMinimumExists, METH_VARARGS,
   "V.GetMinimumExists(int) -> int\nC++: int GetMinimumExists(unsigned int idx)\n\nReturns if minimum/maximum bound is set for the domain.\n"},
  {"GetMaximumExists", PyvtkSMDoubleRangeDomain_GetMaximumExists, METH_VARARGS,
   "V.GetMaximumExists(int) -> int\nC++: int GetMaximumExists(unsigned int idx)\n\n"},
  {"GetResolution", PyvtkSMDoubleRangeDomain_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: int GetResolution()\n\nReturns the resolution.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDoubleRangeDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDoubleRangeDomain", // tp_name
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
  PyvtkSMDoubleRangeDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMDoubleRangeDomain_StaticNew()
{
  return vtkSMDoubleRangeDomain::New();
}

PyObject *PyvtkSMDoubleRangeDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDoubleRangeDomain_Type, PyvtkSMDoubleRangeDomain_Methods,
    "vtkSMDoubleRangeDomain",
 &PyvtkSMDoubleRangeDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMDoubleRangeDomain_Type;

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

void PyVTKAddFile_vtkSMDoubleRangeDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDoubleRangeDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDoubleRangeDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

