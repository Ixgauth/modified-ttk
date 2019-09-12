// python wrapper for vtkSMTimeStepIndexDomain
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
#include "vtkSMTimeStepIndexDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMTimeStepIndexDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMTimeStepIndexDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMIntRangeDomain_ClassNew
extern "C" { PyObject *PyvtkSMIntRangeDomain_ClassNew(); }
#define DECLARED_PyvtkSMIntRangeDomain_ClassNew
#endif

static const char *PyvtkSMTimeStepIndexDomain_Doc =
  "vtkSMTimeStepIndexDomain - int range domain based on data set\ntime-steps\n\n"
  "Superclass: vtkSMIntRangeDomain\n\n"
  "vtkSMTimeStepIndexDomain is a subclass of vtkSMIntRangeDomain. In its\n"
  "Update method, it determines the number of time steps in the\n"
  "associated data. It requires a vtkSMSourceProxy to do this.\n"
  "@sa\n"
  "vtkSMIntRangeDomain\n\n";


static PyObject *
PyvtkSMTimeStepIndexDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMTimeStepIndexDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeStepIndexDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeStepIndexDomain *op = static_cast<vtkSMTimeStepIndexDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTimeStepIndexDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeStepIndexDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMTimeStepIndexDomain *tempr = vtkSMTimeStepIndexDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTimeStepIndexDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeStepIndexDomain *op = static_cast<vtkSMTimeStepIndexDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMTimeStepIndexDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTimeStepIndexDomain::NewInstance());

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
PyvtkSMTimeStepIndexDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTimeStepIndexDomain *op = static_cast<vtkSMTimeStepIndexDomain *>(vp);

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
      op->vtkSMTimeStepIndexDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTimeStepIndexDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMTimeStepIndexDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMTimeStepIndexDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMTimeStepIndexDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMTimeStepIndexDomain\nC++: static vtkSMTimeStepIndexDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMTimeStepIndexDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMTimeStepIndexDomain\nC++: vtkSMTimeStepIndexDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMTimeStepIndexDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *) override;\n\nUpdate self checking the \"unchecked\" values of all required\nproperties. Overwritten by sub-classes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMTimeStepIndexDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMTimeStepIndexDomain", // tp_name
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
  PyvtkSMTimeStepIndexDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMTimeStepIndexDomain_StaticNew()
{
  return vtkSMTimeStepIndexDomain::New();
}

PyObject *PyvtkSMTimeStepIndexDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMTimeStepIndexDomain_Type, PyvtkSMTimeStepIndexDomain_Methods,
    "vtkSMTimeStepIndexDomain",
 &PyvtkSMTimeStepIndexDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMTimeStepIndexDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMIntRangeDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMTimeStepIndexDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMTimeStepIndexDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMTimeStepIndexDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

