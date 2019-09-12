// python wrapper for vtkSMSubsetInclusionLatticeDomain
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
#include "vtkSMSubsetInclusionLatticeDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSubsetInclusionLatticeDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSubsetInclusionLatticeDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMStringListDomain_ClassNew
extern "C" { PyObject *PyvtkSMStringListDomain_ClassNew(); }
#define DECLARED_PyvtkSMStringListDomain_ClassNew
#endif

static const char *PyvtkSMSubsetInclusionLatticeDomain_Doc =
  "vtkSMSubsetInclusionLatticeDomain - domain for block selection\nproperties using a vtkSubsetInclusionLattice.\n\n"
  "Superclass: vtkSMStringListDomain\n\n"
  "vtkSMSubsetInclusionLatticeDomain is the domain to use for a\n"
  "vtkSMStringVectorProperty permitting uses to select blocks with\n"
  "structure described using vtkSubsetInclusionLattice or subclass.\n\n"
  "vtkSMSubsetInclusionLatticeDomain replaces vtkSMSILDomain.\n"
  "vtkSMSILDomain is available for old-style readers that have not been\n"
  "updated to produce vtkSubsetInclusionLattice and instead simply\n"
  "generate a vtkGraph for representing the SIL.\n\n"
  "@section ExampleServerManagerXML Example Server-Manager configuration\n"
  "XML\n\n"
  "{xml}\n"
  " <StringVectorProperty ...>\n"
  "   <SubsetInclusionLatticeDomain name=\"sil\"\n"
  "class=\"vtkCGNSSubsetInclusionLattice\"\n"
  "default_path=\"//Grid\">\n"
  "     \n"
  "         <Property name=\"SILUpdateStamp\" function=\"TimeStamp\" />\n"
  "     \n"
  "   \n"
  " \n\n"
  "@section SupportedAttributes Supported Attributes\n\n"
  "vtkSMSubsetInclusionLatticeDomain supports that following attributes\n"
  "that can be specified in the XML configuration for the domain.\n\n"
  "@subsection ClassAttribute class attribute\n\n"
  "vtkSubsetInclusionLattice is the default, if not specified. However\n"
  "readers often create subclasses for vtkSubsetInclusionLattice that\n"
  "make it easier to identify nodes in the SIL using native terminology\n"
  "for the file format e.g. `vtkCGNSSubsetInclusionLattice`. To indicate\n"
  "to the domain to create a specific subclass, one can use the `class`\n"
  "attribute.\n\n"
  "@subsection DefaultPathAttribute default_path attribute\n\n"
  "`default_path` attribute can be set to a string that defines a path\n"
  "to use to select nodes by default. If not empty, same as calling\n"
  "`vtkSubsetInclusionLattice::SelectAll` during initialization to pick\n"
  "default block selection state.\n\n"
  "@section RequiredProperties Supported required properties.\n\n"
  "vtkSubsetInclusionLattice depends on a required property with\n"
  "function `TimeStamp` which is an `information_only` property of type\n"
  "`vtkSMIdTypeVectorProperty`. This property indicates a time-stamp for\n"
  "when the SIL was rebuilt by the reader. This is used to limit\n"
  "fetching of SIL from the server only when it has changed.\n\n"
  "@sa vtkSMSILDomain\n\n";


static PyObject *
PyvtkSMSubsetInclusionLatticeDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSubsetInclusionLatticeDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSubsetInclusionLatticeDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSubsetInclusionLatticeDomain *op = static_cast<vtkSMSubsetInclusionLatticeDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSubsetInclusionLatticeDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSubsetInclusionLatticeDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSubsetInclusionLatticeDomain *tempr = vtkSMSubsetInclusionLatticeDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSubsetInclusionLatticeDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSubsetInclusionLatticeDomain *op = static_cast<vtkSMSubsetInclusionLatticeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSubsetInclusionLatticeDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSubsetInclusionLatticeDomain::NewInstance());

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
PyvtkSMSubsetInclusionLatticeDomain_IsInDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSubsetInclusionLatticeDomain *op = static_cast<vtkSMSubsetInclusionLatticeDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsInDomain(temp0) :
      op->vtkSMSubsetInclusionLatticeDomain::IsInDomain(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSubsetInclusionLatticeDomain_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSubsetInclusionLatticeDomain *op = static_cast<vtkSMSubsetInclusionLatticeDomain *>(vp);

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
      op->vtkSMSubsetInclusionLatticeDomain::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSubsetInclusionLatticeDomain_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSubsetInclusionLatticeDomain *op = static_cast<vtkSMSubsetInclusionLatticeDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSubsetInclusionLattice *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkSMSubsetInclusionLatticeDomain::GetSIL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSubsetInclusionLatticeDomain_SetDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSubsetInclusionLatticeDomain *op = static_cast<vtkSMSubsetInclusionLatticeDomain *>(vp);

  vtkSMProperty *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProperty") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetDefaultValues(temp0, temp1) :
      op->vtkSMSubsetInclusionLatticeDomain::SetDefaultValues(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSubsetInclusionLatticeDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMSubsetInclusionLatticeDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSubsetInclusionLatticeDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSubsetInclusionLatticeDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSubsetInclusionLatticeDomain\nC++: static vtkSMSubsetInclusionLatticeDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSubsetInclusionLatticeDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSubsetInclusionLatticeDomain\nC++: vtkSMSubsetInclusionLatticeDomain *NewInstance()\n\n"},
  {"IsInDomain", PyvtkSMSubsetInclusionLatticeDomain_IsInDomain, METH_VARARGS,
   "V.IsInDomain(vtkSMProperty) -> int\nC++: int IsInDomain(vtkSMProperty *) override;\n\nReturns 1 always. vtkSMSubsetInclusionLatticeDomain doesn't\nvalidate values currently.\n"},
  {"Update", PyvtkSMSubsetInclusionLatticeDomain_Update, METH_VARARGS,
   "V.Update(vtkSMProperty)\nC++: void Update(vtkSMProperty *requestingProperty) override;\n\nThe SIL may have changed. Update it.\n"},
  {"GetSIL", PyvtkSMSubsetInclusionLatticeDomain_GetSIL, METH_VARARGS,
   "V.GetSIL() -> vtkSubsetInclusionLattice\nC++: vtkSubsetInclusionLattice *GetSIL()\n\nReturns the vtkSubsetInclusionLattice. May return an empty SIL,\nbut never a nullptr.\n"},
  {"SetDefaultValues", PyvtkSMSubsetInclusionLatticeDomain_SetDefaultValues, METH_VARARGS,
   "V.SetDefaultValues(vtkSMProperty, bool) -> int\nC++: int SetDefaultValues(vtkSMProperty *,\n    bool use_unchecked_values) override;\n\nOverridden to set default from SIL.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSubsetInclusionLatticeDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSubsetInclusionLatticeDomain", // tp_name
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
  PyvtkSMSubsetInclusionLatticeDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSubsetInclusionLatticeDomain_StaticNew()
{
  return vtkSMSubsetInclusionLatticeDomain::New();
}

PyObject *PyvtkSMSubsetInclusionLatticeDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSubsetInclusionLatticeDomain_Type, PyvtkSMSubsetInclusionLatticeDomain_Methods,
    "vtkSMSubsetInclusionLatticeDomain",
 &PyvtkSMSubsetInclusionLatticeDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSubsetInclusionLatticeDomain_Type;

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

void PyVTKAddFile_vtkSMSubsetInclusionLatticeDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSubsetInclusionLatticeDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSubsetInclusionLatticeDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

