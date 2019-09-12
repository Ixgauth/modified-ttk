// python wrapper for vtkSMSelectionHelper
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
#include "vtkSMSelectionHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSelectionHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSelectionHelper_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMSelectionHelper_Doc =
  "vtkSMSelectionHelper - Utility class to help with selection tasks\n\n"
  "Superclass: vtkSMObject\n\n"
  "This class contains several static methods that help with the\n"
  "complicated selection task.\n\n";


static PyObject *
PyvtkSMSelectionHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSelectionHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionHelper *op = static_cast<vtkSMSelectionHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSelectionHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSelectionHelper *tempr = vtkSMSelectionHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionHelper *op = static_cast<vtkSMSelectionHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSelectionHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSelectionHelper::NewInstance());

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
PyvtkSMSelectionHelper_NewSelectionSourceFromSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NewSelectionSourceFromSelection");

  vtkSMSession *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkSMSession") &&
      ap.GetVTKObject(temp1, "vtkSelection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkSMProxy *tempr = vtkSMSelectionHelper::NewSelectionSourceFromSelection(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_NewSelectionSourcesFromSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NewSelectionSourcesFromSelection");

  vtkSelection *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  vtkCollection *temp2 = nullptr;
  vtkCollection *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetVTKObject(temp2, "vtkCollection") &&
      ap.GetVTKObject(temp3, "vtkCollection"))
  {
    vtkSMSelectionHelper::NewSelectionSourcesFromSelection(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_ConvertSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertSelection");

  int temp0;
  vtkSMProxy *temp1 = nullptr;
  vtkSMSourceProxy *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetVTKObject(temp2, "vtkSMSourceProxy") &&
      ap.GetValue(temp3))
  {
    vtkSMProxy *tempr = vtkSMSelectionHelper::ConvertSelection(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_MergeSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MergeSelection");

  vtkSMSourceProxy *temp0 = nullptr;
  vtkSMSourceProxy *temp1 = nullptr;
  vtkSMSourceProxy *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp2, "vtkSMSourceProxy") &&
      ap.GetValue(temp3))
  {
    bool tempr = vtkSMSelectionHelper::MergeSelection(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_SubtractSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SubtractSelection");

  vtkSMSourceProxy *temp0 = nullptr;
  vtkSMSourceProxy *temp1 = nullptr;
  vtkSMSourceProxy *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp2, "vtkSMSourceProxy") &&
      ap.GetValue(temp3))
  {
    bool tempr = vtkSMSelectionHelper::SubtractSelection(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionHelper_ToggleSelection(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ToggleSelection");

  vtkSMSourceProxy *temp0 = nullptr;
  vtkSMSourceProxy *temp1 = nullptr;
  vtkSMSourceProxy *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp2, "vtkSMSourceProxy") &&
      ap.GetValue(temp3))
  {
    bool tempr = vtkSMSelectionHelper::ToggleSelection(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSelectionHelper_Methods[] = {
  {"IsTypeOf", PyvtkSMSelectionHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSelectionHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSelectionHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSelectionHelper\nC++: static vtkSMSelectionHelper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSelectionHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSelectionHelper\nC++: vtkSMSelectionHelper *NewInstance()\n\n"},
  {"NewSelectionSourceFromSelection", PyvtkSMSelectionHelper_NewSelectionSourceFromSelection, METH_VARARGS,
   "V.NewSelectionSourceFromSelection(vtkSMSession, vtkSelection,\n    bool) -> vtkSMProxy\nC++: static vtkSMProxy *NewSelectionSourceFromSelection(\n    vtkSMSession *session, vtkSelection *selection,\n    bool ignore_composite_keys=false)\n\nGiven a selection, returns a proxy for a selection source that\nhas the ids specified by it. This source can then be used as\ninput to a vtkExtractSelection filter. CAVEAT: Make sure to\nspecify the connection id for the server on which the selection\nwas performed. This method can only handle 3 types of selection\nFRUSTUM, INDICES and GLOBALIDS. We can easily change this to\nhandle all other types of selection but that's not required\ncurrently and hence we not adding that code.\n"},
  {"NewSelectionSourcesFromSelection", PyvtkSMSelectionHelper_NewSelectionSourcesFromSelection, METH_VARARGS,
   "V.NewSelectionSourcesFromSelection(vtkSelection, vtkSMProxy,\n    vtkCollection, vtkCollection)\nC++: static void NewSelectionSourcesFromSelection(\n    vtkSelection *selection, vtkSMProxy *view,\n    vtkCollection *selSources, vtkCollection *selRepresentations)\n\n"},
  {"ConvertSelection", PyvtkSMSelectionHelper_ConvertSelection, METH_VARARGS,
   "V.ConvertSelection(int, vtkSMProxy, vtkSMSourceProxy, int)\n    -> vtkSMProxy\nC++: static vtkSMProxy *ConvertSelection(int outputType,\n    vtkSMProxy *selectionSourceProxy,\n    vtkSMSourceProxy *dataSource, int outputport)\n\nGiven the ContentType for an output vtkSelection, this create a\nnew source proxy generating the selection, the input\nselectionSourceProxy is used to fill the default values for\ncreated selection source.\n"},
  {"MergeSelection", PyvtkSMSelectionHelper_MergeSelection, METH_VARARGS,
   "V.MergeSelection(vtkSMSourceProxy, vtkSMSourceProxy,\n    vtkSMSourceProxy, int) -> bool\nC++: static bool MergeSelection(vtkSMSourceProxy *output,\n    vtkSMSourceProxy *input, vtkSMSourceProxy *dataSource,\n    int outputport)\n\nUpdates output to be a combination of (input | output) if the two\nselection sources are mergeable. Returns true if merge\nsuccessful. dataSource and outputport are needed if a conversion\nis needed to make the input expandable to the type of the output.\n"},
  {"SubtractSelection", PyvtkSMSelectionHelper_SubtractSelection, METH_VARARGS,
   "V.SubtractSelection(vtkSMSourceProxy, vtkSMSourceProxy,\n    vtkSMSourceProxy, int) -> bool\nC++: static bool SubtractSelection(vtkSMSourceProxy *output,\n    vtkSMSourceProxy *input, vtkSMSourceProxy *dataSource,\n    int outputport)\n\nUpdates output to be a subtraction of input and output (input -\noutput) if the two selection sources are mergeable. Returns true\nif the subtraction is successful. dataSource and outputport are\nneeded if a conversion is needed to make the input expandable to\nthe type of the output.\n"},
  {"ToggleSelection", PyvtkSMSelectionHelper_ToggleSelection, METH_VARARGS,
   "V.ToggleSelection(vtkSMSourceProxy, vtkSMSourceProxy,\n    vtkSMSourceProxy, int) -> bool\nC++: static bool ToggleSelection(vtkSMSourceProxy *output,\n    vtkSMSourceProxy *input, vtkSMSourceProxy *dataSource,\n    int outputport)\n\nUpdates output to be a toggle of input and output (input + (input\n| output ) - (input & output ) ) if the two selection sources are\nmergeable. Returns true if the toggling is successful. dataSource\nand outputport are needed if a conversion is needed to make the\ninput expandable to the type of the output.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSelectionHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMSelectionHelper", // tp_name
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
  PyvtkSMSelectionHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSelectionHelper_StaticNew()
{
  return vtkSMSelectionHelper::New();
}

PyObject *PyvtkSMSelectionHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSelectionHelper_Type, PyvtkSMSelectionHelper_Methods,
    "vtkSMSelectionHelper",
 &PyvtkSMSelectionHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSelectionHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSelectionHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSelectionHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSelectionHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

