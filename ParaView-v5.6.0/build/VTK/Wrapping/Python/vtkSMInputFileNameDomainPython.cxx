// python wrapper for vtkSMInputFileNameDomain
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
#include "vtkSMInputFileNameDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMInputFileNameDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMInputFileNameDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMStringListDomain_ClassNew
extern "C" { PyObject *PyvtkSMStringListDomain_ClassNew(); }
#define DECLARED_PyvtkSMStringListDomain_ClassNew
#endif

static const char *PyvtkSMInputFileNameDomain_Doc =
  "vtkSMInputFileNameDomain - a string domain that can be set\nautomatically with the source file name\n\n"
  "Superclass: vtkSMStringListDomain\n\n"
  "vtkSMInputFileNameDomain does not really restrict the values of the\n"
  "property that contains it. All string values are valid. Rather, it is\n"
  "used to annotate a pipeline with the source name. This domain works\n"
  "with only vtkSMStringVectorProperty.\n"
  "@sa\n"
  "vtkSMDomain vtkSMStringVectorProperty\n\n";


static PyObject *
PyvtkSMInputFileNameDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMInputFileNameDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputFileNameDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputFileNameDomain *op = static_cast<vtkSMInputFileNameDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMInputFileNameDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputFileNameDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMInputFileNameDomain *tempr = vtkSMInputFileNameDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputFileNameDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputFileNameDomain *op = static_cast<vtkSMInputFileNameDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMInputFileNameDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMInputFileNameDomain::NewInstance());

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
PyvtkSMInputFileNameDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputFileNameDomain *op = static_cast<vtkSMInputFileNameDomain *>(vp);

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
      op->vtkSMInputFileNameDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputFileNameDomain_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputFileNameDomain *op = static_cast<vtkSMInputFileNameDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSMInputFileNameDomain::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInputFileNameDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInputFileNameDomain *op = static_cast<vtkSMInputFileNameDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMInputFileNameDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMInputFileNameDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMInputFileNameDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMInputFileNameDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMInputFileNameDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMInputFileNameDomain\nC++: static vtkSMInputFileNameDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMInputFileNameDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMInputFileNameDomain\nC++: vtkSMInputFileNameDomain *NewInstance()\n\n"},
  {"Update", PyvtkSMInputFileNameDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *) override;\n\nUpdate self checking the \"unchecked\" values of all required\nproperties. Overwritten by sub-classes.\n"},
  {"GetFileName", PyvtkSMInputFileNameDomain_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual std::string GetFileName()\n\n"},
  {"SetDefaultValues", PyvtkSMInputFileNameDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values) override;\n\nThis method is over-written to automatically update the default\nfilename at run time. The default filename depends on the\nfilename of the source. Returns 1 if the domain updated the\nproperty.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMInputFileNameDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMInputFileNameDomain", // tp_name
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
  PyvtkSMInputFileNameDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMInputFileNameDomain_StaticNew()
{
  return vtkSMInputFileNameDomain::New();
}

PyObject *PyvtkSMInputFileNameDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMInputFileNameDomain_Type, PyvtkSMInputFileNameDomain_Methods,
    "vtkSMInputFileNameDomain",
 &PyvtkSMInputFileNameDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMInputFileNameDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMStringListDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMInputFileNameDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMInputFileNameDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMInputFileNameDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}
