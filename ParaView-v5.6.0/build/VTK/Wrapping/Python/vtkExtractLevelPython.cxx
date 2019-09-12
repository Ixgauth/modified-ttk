// python wrapper for vtkExtractLevel
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
#include "vtkExtractLevel.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractLevel(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractLevel_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkExtractLevel_Doc =
  "vtkExtractLevel - extract levels between min and max from a\nhierarchical box dataset.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkExtractLevel filter extracts the levels between (and including)\n"
  "the user specified min and max levels.\n\n";


static PyObject *
PyvtkExtractLevel_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractLevel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractLevel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractLevel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractLevel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractLevel *tempr = vtkExtractLevel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractLevel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractLevel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractLevel::NewInstance());

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
PyvtkExtractLevel_AddLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddLevel(temp0);
    }
    else
    {
      op->vtkExtractLevel::AddLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractLevel_RemoveLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveLevel(temp0);
    }
    else
    {
      op->vtkExtractLevel::RemoveLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractLevel_RemoveAllLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractLevel *op = static_cast<vtkExtractLevel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLevels();
    }
    else
    {
      op->vtkExtractLevel::RemoveAllLevels();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractLevel_Methods[] = {
  {"IsTypeOf", PyvtkExtractLevel_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractLevel_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractLevel_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractLevel\nC++: static vtkExtractLevel *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractLevel_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractLevel\nC++: vtkExtractLevel *NewInstance()\n\n"},
  {"AddLevel", PyvtkExtractLevel_AddLevel, METH_VARARGS,
   "V.AddLevel(int)\nC++: void AddLevel(unsigned int level)\n\nSelect the levels that should be extracted. All other levels will\nhave no datasets in them.\n"},
  {"RemoveLevel", PyvtkExtractLevel_RemoveLevel, METH_VARARGS,
   "V.RemoveLevel(int)\nC++: void RemoveLevel(unsigned int level)\n\nSelect the levels that should be extracted. All other levels will\nhave no datasets in them.\n"},
  {"RemoveAllLevels", PyvtkExtractLevel_RemoveAllLevels, METH_VARARGS,
   "V.RemoveAllLevels()\nC++: void RemoveAllLevels()\n\nSelect the levels that should be extracted. All other levels will\nhave no datasets in them.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractLevel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractLevel", // tp_name
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
  PyvtkExtractLevel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractLevel_StaticNew()
{
  return vtkExtractLevel::New();
}

PyObject *PyvtkExtractLevel_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractLevel_Type, PyvtkExtractLevel_Methods,
    "vtkExtractLevel",
 &PyvtkExtractLevel_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractLevel_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractLevel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractLevel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractLevel", o) != 0)
  {
    Py_DECREF(o);
  }

}

