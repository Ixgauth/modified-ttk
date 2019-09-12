// python wrapper for vtkDataObjectGenerator
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
#include "vtkDataObjectGenerator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataObjectGenerator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataObjectGenerator_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkDataObjectGenerator_Doc =
  "vtkDataObjectGenerator - produces simple (composite or atomic) data\nsets for testing.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkDataObjectGenerator parses a string and produces dataobjects from\n"
  "the dataobject template names it sees in the string. For example, if\n"
  "the string contains \"ID1\" the generator will create a vtkImageData.\n"
  "\"UF1\", \"RG1\", \"SG1\", \"PD1\", and \"UG1\" will produce vtkUniformGrid,\n"
  "vtkRectilinearGrid, vtkStructuredGrid, vtkPolyData and\n"
  "vtkUnstructuredGrid respectively. \"PD2\" will produce an alternate\n"
  "vtkPolyData. You can compose composite datasets from the atomic ones\n"
  "listed above by placing them within one of the two composite dataset\n"
  "identifiers\n"
  "- \"MB{}\" or \"HB[]\". \"MB{ ID1 PD1 MB{} }\" for example will create a\n"
  "  vtkMultiBlockDataSet consisting of three blocks: image data, poly\n"
  "  data, multi-block (empty). Hierarchical Box data sets additionally\n"
  "  require the notion of groups, declared within \"()\" braces, to\n"
  "  specify AMR depth. \"HB[ (UF1)(UF1)(UF1) ]\" will create a\n"
  "  vtkHierarchicalBoxDataSet representing an octree that is three\n"
  "  levels deep, in which the firstmost cell in each level is refined.\n\n";


static PyObject *
PyvtkDataObjectGenerator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObjectGenerator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataObjectGenerator *tempr = vtkDataObjectGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObjectGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectGenerator::NewInstance());

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
PyvtkDataObjectGenerator_SetProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProgram(temp0);
    }
    else
    {
      op->vtkDataObjectGenerator::SetProgram(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_GetProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetProgram() :
      op->vtkDataObjectGenerator::GetProgram());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObjectGenerator_Methods[] = {
  {"IsTypeOf", PyvtkDataObjectGenerator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataObjectGenerator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataObjectGenerator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataObjectGenerator\nC++: static vtkDataObjectGenerator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataObjectGenerator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataObjectGenerator\nC++: vtkDataObjectGenerator *NewInstance()\n\n"},
  {"SetProgram", PyvtkDataObjectGenerator_SetProgram, METH_VARARGS,
   "V.SetProgram(string)\nC++: virtual void SetProgram(const char *_arg)\n\nThe string that will be parsed to specify a dataobject structure.\n"},
  {"GetProgram", PyvtkDataObjectGenerator_GetProgram, METH_VARARGS,
   "V.GetProgram() -> string\nC++: virtual char *GetProgram()\n\nThe string that will be parsed to specify a dataobject structure.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataObjectGenerator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkDataObjectGenerator", // tp_name
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
  PyvtkDataObjectGenerator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataObjectGenerator_StaticNew()
{
  return vtkDataObjectGenerator::New();
}

PyObject *PyvtkDataObjectGenerator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataObjectGenerator_Type, PyvtkDataObjectGenerator_Methods,
    "vtkDataObjectGenerator",
 &PyvtkDataObjectGenerator_StaticNew);

  PyTypeObject *pytype = &PyvtkDataObjectGenerator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataObjectGenerator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObjectGenerator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectGenerator", o) != 0)
  {
    Py_DECREF(o);
  }

}

