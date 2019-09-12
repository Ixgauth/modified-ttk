// python wrapper for vtkSMArraySelectionDomain
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
#include "vtkSMArraySelectionDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMArraySelectionDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMArraySelectionDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMStringListDomain_ClassNew
extern "C" { PyObject *PyvtkSMStringListDomain_ClassNew(); }
#define DECLARED_PyvtkSMStringListDomain_ClassNew
#endif

static const char *PyvtkSMArraySelectionDomain_Doc =
  "vtkSMArraySelectionDomain - used on properties that allow users to\nselect arrays.\n\n"
  "Superclass: vtkSMStringListDomain\n\n"
  "vtkSMArraySelectionDomain is a domain that can be for used for\n"
  "properties that allow users to set selection-statuses for multiple\n"
  "arrays (or similar items). This is similar to vtkSMArrayListDomain,\n"
  "the only different is that vtkSMArrayListDomain is designed to work\n"
  "with data-information obtained from the required Input property,\n"
  "while vtkSMArraySelectionDomain depends on a required\n"
  "information-only property (\"ArrayList\") that provides the arrays\n"
  "available.\n\n"
  "Supported Required-Property functions:\n"
  "\\li ArrayList : points a string-vector property that produces the\n"
  "(array_name, status) tuples. This is typically an information-only\n"
  "property.\n\n";


static PyObject *
PyvtkSMArraySelectionDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMArraySelectionDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArraySelectionDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArraySelectionDomain *op = static_cast<vtkSMArraySelectionDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMArraySelectionDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArraySelectionDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMArraySelectionDomain *tempr = vtkSMArraySelectionDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArraySelectionDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArraySelectionDomain *op = static_cast<vtkSMArraySelectionDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMArraySelectionDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMArraySelectionDomain::NewInstance());

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
PyvtkSMArraySelectionDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMArraySelectionDomain *op = static_cast<vtkSMArraySelectionDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMArraySelectionDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMArraySelectionDomain_SetLoadAllVariables(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetLoadAllVariables");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMArraySelectionDomain::SetLoadAllVariables(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMArraySelectionDomain_GetLoadAllVariables(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLoadAllVariables");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkSMArraySelectionDomain::GetLoadAllVariables();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMArraySelectionDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMArraySelectionDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMArraySelectionDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMArraySelectionDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMArraySelectionDomain\nC++: static vtkSMArraySelectionDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMArraySelectionDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMArraySelectionDomain\nC++: vtkSMArraySelectionDomain *NewInstance()\n\n"},
  {"SetDefaultValues", PyvtkSMArraySelectionDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values) override;\n\nSince this domain relies on an information only property to get\nthe default status, we override this method to copy the values\nthe info property as the default array selection.\n"},
  {"SetLoadAllVariables", PyvtkSMArraySelectionDomain_SetLoadAllVariables, METH_VARARGS,
   "V.SetLoadAllVariables(bool)\nC++: static void SetLoadAllVariables(bool choice)\n\nGlobal flag to toggle between (a) the default behavior of setting\ndefault values according to infoProperty and (b) setting all\ndefault values to on.\n"},
  {"GetLoadAllVariables", PyvtkSMArraySelectionDomain_GetLoadAllVariables, METH_VARARGS,
   "V.GetLoadAllVariables() -> bool\nC++: static bool GetLoadAllVariables()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMArraySelectionDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMArraySelectionDomain", // tp_name
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
  PyvtkSMArraySelectionDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMArraySelectionDomain_StaticNew()
{
  return vtkSMArraySelectionDomain::New();
}

PyObject *PyvtkSMArraySelectionDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMArraySelectionDomain_Type, PyvtkSMArraySelectionDomain_Methods,
    "vtkSMArraySelectionDomain",
 &PyvtkSMArraySelectionDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMArraySelectionDomain_Type;

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

void PyVTKAddFile_vtkSMArraySelectionDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMArraySelectionDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMArraySelectionDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

