// python wrapper for vtkSMSILDomain
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
#include "vtkSMSILDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSILDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSILDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMArraySelectionDomain_ClassNew
extern "C" { PyObject *PyvtkSMArraySelectionDomain_ClassNew(); }
#define DECLARED_PyvtkSMArraySelectionDomain_ClassNew
#endif

static const char *PyvtkSMSILDomain_Doc =
  "vtkSMSILDomain - is a specialization for vtkSMArraySelectionDomain\nwith access to the SIL.\n\n"
  "Superclass: vtkSMArraySelectionDomain\n\n"
  "vtkSMSILDomain is basically a vtkSMArraySelectionDomain with a method\n"
  "to access the SIL. Having a separate domain also makes it possible to\n"
  "automatically create SIL widgets in the GUI.\n\n"
  "vtkSMSILDomain needs a required property with function=\"ArrayList\"\n"
  "which is typically an information property with the array selection\n"
  "statuses (exactly similar to vtkSMArraySelectionDomain) with one\n"
  "notable exception. This information property typically uses the\n"
  "vtkSMSILInformationHelper which is used to access the SIL if\n"
  "requested by using GetSIL().\n\n"
  "@section vtkSMSILDomainLegacyWarning Legacy Warning\n\n"
  "While not deprecated, this class exists to support readers that use\n"
  "legacy representation for SIL which used a `vtkGraph` to represent\n"
  "the SIL. It is recommended that newer code uses\n"
  "vtkSubsetInclusionLattice (or subclass) to represent the SIL. In that\n"
  "case, you should use vtkSMSubsetInclusionLatticeDomain instead.\n\n";


static PyObject *
PyvtkSMSILDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSILDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILDomain *op = static_cast<vtkSMSILDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSILDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSILDomain *tempr = vtkSMSILDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILDomain *op = static_cast<vtkSMSILDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSILDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSILDomain::NewInstance());

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
PyvtkSMSILDomain_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILDomain *op = static_cast<vtkSMSILDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkSMSILDomain::GetSIL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILDomain_GetSubTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILDomain *op = static_cast<vtkSMSILDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSubTree() :
      op->vtkSMSILDomain::GetSubTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSILDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSILDomain *op = static_cast<vtkSMSILDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMSILDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSILDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMSILDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSILDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSILDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSILDomain\nC++: static vtkSMSILDomain *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSILDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSILDomain\nC++: vtkSMSILDomain *NewInstance()\n\n"},
  {"GetSIL", PyvtkSMSILDomain_GetSIL, METH_VARARGS,
   "V.GetSIL() -> vtkGraph\nC++: vtkGraph *GetSIL()\n\nGet the SIL. This does not result in the re-fetching of the SIL,\nit simply returns the most recently fetched SIL. To re-fetch the\nSIL, try calling UpdatePropertyInformation() on the reader proxy.\nThat will result in requesting the vtkSMSILInformationHelper to\nfetch the SIL.\n"},
  {"GetSubTree", PyvtkSMSILDomain_GetSubTree, METH_VARARGS,
   "V.GetSubTree() -> string\nC++: virtual char *GetSubTree()\n\nProvide an access to the subtree attribute from the XML\ndefinition of the sub-domaine\n"},
  {"SetDefaultValues", PyvtkSMSILDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *, bool) override;\n\nOverridden to leave defaults unchanged.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSILDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSILDomain", // tp_name
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
  PyvtkSMSILDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSILDomain_StaticNew()
{
  return vtkSMSILDomain::New();
}

PyObject *PyvtkSMSILDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSILDomain_Type, PyvtkSMSILDomain_Methods,
    "vtkSMSILDomain",
 &PyvtkSMSILDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSILDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMArraySelectionDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSILDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSILDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSILDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

