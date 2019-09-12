// python wrapper for vtkPVExtractSelection
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
#include "vtkPVExtractSelection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVExtractSelection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVExtractSelection_ClassNew(); }

#ifndef DECLARED_PyvtkExtractSelection_ClassNew
extern "C" { PyObject *PyvtkExtractSelection_ClassNew(); }
#define DECLARED_PyvtkExtractSelection_ClassNew
#endif

static const char *PyvtkPVExtractSelection_Doc =
  "vtkPVExtractSelection - Adds a two more output ports to\nvtkExtractSelection, the second port contains an id selection and the\nthird is simply the input selection.\n\n"
  "Superclass: vtkExtractSelection\n\n"
  "vtkPVExtractSelection adds a second port to vtkExtractSelection.\n"
  "\\li Output port 0 -- is the output from the superclass. It's nothing\n"
  "    but the\n"
  "extracted dataset.\n\n"
  "\\li Output port 1 -- is a vtkSelection consisting of indices of the\n"
  "    cells/points\n"
  "extracted. If vtkSelection used as the input to this filter is of the\n"
  "field type vtkSelection::CELL, then the output vtkSelection has both\n"
  "the cell indicides as well as point indices of the cells/points that\n"
  "were extracted. If input field type is vtkSelection::POINT, then the\n"
  "output vtkSelection only has the indices of the points that were\n"
  "extracted. This second output is useful for correlating particular\n"
  "cells in the subset with the original data set. This is used, for\n"
  "instance, by Chart representations to show selections.\n\n"
  "\\li Output port 2 -- is simply the input vtkSelection. We currently\n"
  "    use this\n"
  "for Histogram View/Representation. Since that view cannot show\n"
  "arbitrary ID based selections, it needs to get to the original\n"
  "vtkSelection to determine if the particular selection can be shown in\n"
  "the view at all.\n"
  "@sa\n"
  "vtkExtractSelection vtkSelection\n\n";


static PyObject *
PyvtkPVExtractSelection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVExtractSelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractSelection *op = static_cast<vtkPVExtractSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVExtractSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVExtractSelection *tempr = vtkPVExtractSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExtractSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractSelection *op = static_cast<vtkPVExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVExtractSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVExtractSelection::NewInstance());

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
PyvtkPVExtractSelection_RemoveAllSelectionsInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSelectionsInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExtractSelection *op = static_cast<vtkPVExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSelectionsInputs();
    }
    else
    {
      op->vtkPVExtractSelection::RemoveAllSelectionsInputs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVExtractSelection_Methods[] = {
  {"IsTypeOf", PyvtkPVExtractSelection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVExtractSelection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVExtractSelection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVExtractSelection\nC++: static vtkPVExtractSelection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVExtractSelection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVExtractSelection\nC++: vtkPVExtractSelection *NewInstance()\n\n"},
  {"RemoveAllSelectionsInputs", PyvtkPVExtractSelection_RemoveAllSelectionsInputs, METH_VARARGS,
   "V.RemoveAllSelectionsInputs()\nC++: void RemoveAllSelectionsInputs()\n\nRemoves all inputs from input port 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVExtractSelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVExtractSelection", // tp_name
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
  PyvtkPVExtractSelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVExtractSelection_StaticNew()
{
  return vtkPVExtractSelection::New();
}

PyObject *PyvtkPVExtractSelection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVExtractSelection_Type, PyvtkPVExtractSelection_Methods,
    "vtkPVExtractSelection",
 &PyvtkPVExtractSelection_StaticNew);

  PyTypeObject *pytype = &PyvtkPVExtractSelection_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExtractSelection_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "OUTPUT_PORT_EXTRACTED_DATASET", 0 },
        { "OUTPUT_PORT_SELECTION_IDS", 1 },
        { "OUTPUT_PORT_SELECTION_ORIGINAL", 2 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVExtractSelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVExtractSelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVExtractSelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

