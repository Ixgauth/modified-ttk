// python wrapper for vtkMoleculeAppend
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMoleculeAppend.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMoleculeAppend(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMoleculeAppend_ClassNew(); }

#ifndef DECLARED_PyvtkMoleculeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMoleculeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMoleculeAlgorithm_ClassNew
#endif

static const char *PyvtkMoleculeAppend_Doc =
  "vtkMoleculeAppend - Appends one or more molecules into a single\nmolecule\n\n"
  "Superclass: vtkMoleculeAlgorithm\n\n"
  "vtkMoleculeAppend appends molecule into a single molecule. It also\n"
  "appends the associated atom data and edge data. Note that input data\n"
  "arrays should match (same number of arrays with same names in each\n"
  "input)\n\n"
  "Option MergeCoincidentAtoms specifies if coincident atoms should be\n"
  "merged or not. This may be useful in Parallel mode to remove ghost\n"
  "atoms when gather molecule on a rank. When merging, use the data of\n"
  "the non ghost atom. If none, use the data of the last coincident\n"
  "atom. This option is active by default.\n\n";


static PyObject *
PyvtkMoleculeAppend_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMoleculeAppend::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeAppend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeAppend *op = static_cast<vtkMoleculeAppend *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeAppend::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeAppend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMoleculeAppend *tempr = vtkMoleculeAppend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeAppend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeAppend *op = static_cast<vtkMoleculeAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMoleculeAppend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeAppend::NewInstance());

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
PyvtkMoleculeAppend_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeAppend *op = static_cast<vtkMoleculeAppend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkMoleculeAppend::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeAppend_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeAppend *op = static_cast<vtkMoleculeAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkMoleculeAppend::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeAppend_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMoleculeAppend_GetInput_s1(self, args);
    case 0:
      return PyvtkMoleculeAppend_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}



static PyObject *
PyvtkMoleculeAppend_GetMergeCoincidentAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeCoincidentAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeAppend *op = static_cast<vtkMoleculeAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergeCoincidentAtoms() :
      op->vtkMoleculeAppend::GetMergeCoincidentAtoms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeAppend_SetMergeCoincidentAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeCoincidentAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeAppend *op = static_cast<vtkMoleculeAppend *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeCoincidentAtoms(temp0);
    }
    else
    {
      op->vtkMoleculeAppend::SetMergeCoincidentAtoms(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeAppend_MergeCoincidentAtomsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeCoincidentAtomsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeAppend *op = static_cast<vtkMoleculeAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeCoincidentAtomsOn();
    }
    else
    {
      op->vtkMoleculeAppend::MergeCoincidentAtomsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeAppend_MergeCoincidentAtomsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeCoincidentAtomsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeAppend *op = static_cast<vtkMoleculeAppend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeCoincidentAtomsOff();
    }
    else
    {
      op->vtkMoleculeAppend::MergeCoincidentAtomsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMoleculeAppend_Methods[] = {
  {"IsTypeOf", PyvtkMoleculeAppend_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMoleculeAppend_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMoleculeAppend_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMoleculeAppend\nC++: static vtkMoleculeAppend *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMoleculeAppend_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMoleculeAppend\nC++: vtkMoleculeAppend *NewInstance()\n\n"},
  {"GetInput", PyvtkMoleculeAppend_GetInput, METH_VARARGS,
   "V.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int num)\nV.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet one input to this filter. This method is only for support of\nold-style pipeline connections.  When writing new code you should\nuse vtkAlgorithm::GetInputConnection(0, num).\n"},
  {"GetMergeCoincidentAtoms", PyvtkMoleculeAppend_GetMergeCoincidentAtoms, METH_VARARGS,
   "V.GetMergeCoincidentAtoms() -> bool\nC++: virtual bool GetMergeCoincidentAtoms()\n\nSpecify if coincident atoms (atom with exactly the same position)\nshould be merged into one. True by default.\n"},
  {"SetMergeCoincidentAtoms", PyvtkMoleculeAppend_SetMergeCoincidentAtoms, METH_VARARGS,
   "V.SetMergeCoincidentAtoms(bool)\nC++: virtual void SetMergeCoincidentAtoms(bool _arg)\n\nSpecify if coincident atoms (atom with exactly the same position)\nshould be merged into one. True by default.\n"},
  {"MergeCoincidentAtomsOn", PyvtkMoleculeAppend_MergeCoincidentAtomsOn, METH_VARARGS,
   "V.MergeCoincidentAtomsOn()\nC++: virtual void MergeCoincidentAtomsOn()\n\nSpecify if coincident atoms (atom with exactly the same position)\nshould be merged into one. True by default.\n"},
  {"MergeCoincidentAtomsOff", PyvtkMoleculeAppend_MergeCoincidentAtomsOff, METH_VARARGS,
   "V.MergeCoincidentAtomsOff()\nC++: virtual void MergeCoincidentAtomsOff()\n\nSpecify if coincident atoms (atom with exactly the same position)\nshould be merged into one. True by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMoleculeAppend_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkMoleculeAppend", // tp_name
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
  PyvtkMoleculeAppend_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMoleculeAppend_StaticNew()
{
  return vtkMoleculeAppend::New();
}

PyObject *PyvtkMoleculeAppend_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMoleculeAppend_Type, PyvtkMoleculeAppend_Methods,
    "vtkMoleculeAppend",
 &PyvtkMoleculeAppend_StaticNew);

  PyTypeObject *pytype = &PyvtkMoleculeAppend_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMoleculeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMoleculeAppend(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMoleculeAppend_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMoleculeAppend", o) != 0)
  {
    Py_DECREF(o);
  }

}

