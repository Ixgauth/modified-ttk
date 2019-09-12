// python wrapper for vtkPVSILInformation
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
#include "vtkPVSILInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSILInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSILInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVSILInformation_Doc =
  "vtkPVSILInformation - vtkPVInformation subclass to fetch SIL.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "Information object used to retrieve the SIL from an algorithm. It\n"
  "supports both legacy representation of SIL (using a vtkGraph) or the\n"
  "newer form (using vtkSubsetInclusionLattice or subclass).\n\n"
  "If `CopyFromObject` is called with vtkAlgorithmOutput as the\n"
  "argument, it looks for presence of\n"
  "`vtkSubsetInclusionLattice::SUBSET_INCLUSION_LATTICE()` or\n"
  "`vtkDataObject::SIL()` (for legacy SIL) key in the output information\n"
  "for the corresponding `vtkAlgorithm`.\n\n";


static PyObject *
PyvtkPVSILInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSILInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSILInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSILInformation *op = static_cast<vtkPVSILInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSILInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSILInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSILInformation *tempr = vtkPVSILInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSILInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSILInformation *op = static_cast<vtkPVSILInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSILInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSILInformation::NewInstance());

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
PyvtkPVSILInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSILInformation *op = static_cast<vtkPVSILInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkPVSILInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSILInformation_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSILInformation *op = static_cast<vtkPVSILInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkPVSILInformation::GetSIL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSILInformation_GetSubsetInclusionLattice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsetInclusionLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSILInformation *op = static_cast<vtkPVSILInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSubsetInclusionLattice *tempr = (ap.IsBound() ?
      op->GetSubsetInclusionLattice() :
      op->vtkPVSILInformation::GetSubsetInclusionLattice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSILInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVSILInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSILInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSILInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSILInformation\nC++: static vtkPVSILInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSILInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSILInformation\nC++: vtkPVSILInformation *NewInstance()\n\n"},
  {"CopyFromObject", PyvtkPVSILInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"GetSIL", PyvtkPVSILInformation_GetSIL, METH_VARARGS,
   "V.GetSIL() -> vtkGraph\nC++: virtual vtkGraph *GetSIL()\n\nReturns the SIL. This returns the legacy SIL representation, if\nany.\n"},
  {"GetSubsetInclusionLattice", PyvtkPVSILInformation_GetSubsetInclusionLattice, METH_VARARGS,
   "V.GetSubsetInclusionLattice() -> vtkSubsetInclusionLattice\nC++: vtkSubsetInclusionLattice *GetSubsetInclusionLattice()\n\nReturns the SIL represented using vtkSubsetInclusionLattice.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSILInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVSILInformation", // tp_name
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
  PyvtkPVSILInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVSILInformation_StaticNew()
{
  return vtkPVSILInformation::New();
}

PyObject *PyvtkPVSILInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSILInformation_Type, PyvtkPVSILInformation_Methods,
    "vtkPVSILInformation",
 &PyvtkPVSILInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVSILInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVSILInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSILInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSILInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

