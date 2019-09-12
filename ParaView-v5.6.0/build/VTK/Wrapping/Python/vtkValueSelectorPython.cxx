// python wrapper for vtkValueSelector
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
#include "vtkValueSelector.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkValueSelector(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkValueSelector_ClassNew(); }

#ifndef DECLARED_PyvtkSelector_ClassNew
extern "C" { PyObject *PyvtkSelector_ClassNew(); }
#define DECLARED_PyvtkSelector_ClassNew
#endif

static const char *PyvtkValueSelector_Doc =
  "vtkValueSelector - selects elements matching chosen values.\n\n"
  "Superclass: vtkSelector\n\n"
  "vtkValueSelector is a vtkSelector that can select elements matching\n"
  "values. This can handle a wide array of\n"
  "vtkSelectionNode::SelectionContent types. These include\n"
  "vtkSelectionNode::GLOBALIDS, vtkSelectionNode::PEDIGREEIDS,\n"
  "vtkSelectionNode::VALUES, vtkSelectionNode::INDICES, and\n"
  "vtkSelectionNode::THRESHOLDS.\n\n"
  "A few things to note:\n\n"
  "* vtkSelectionNode::SelectionList must be 2-component array for\n"
  "  content-type = vtkSelectionNode::THRESHOLDS and 1-component array\n"
  "  for all other support content-types. For 1-component selection\n"
  "  list, this will match items where the field array (or index) value\n"
  "  matches any value in the selection list. For 2-component selection\n"
  "  list, this will match those items with values in inclusive-range\n"
  "  specified by the two components.\n\n"
  "* For vtkSelectionNode::VALUES or vtkSelectionNode::THRESHOLDS, the\n"
  "  field array to select on is defined by the name given the\n"
  "  SelectionList itself. If the SelectionList has no name (or is an\n"
  "  empty string), then the active scalars from the dataset will be\n"
  "  chosen.\n\n";


static PyObject *
PyvtkValueSelector_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkValueSelector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValueSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValueSelector *op = static_cast<vtkValueSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkValueSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValueSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkValueSelector *tempr = vtkValueSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValueSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValueSelector *op = static_cast<vtkValueSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkValueSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkValueSelector::NewInstance());

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
PyvtkValueSelector_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValueSelector *op = static_cast<vtkValueSelector *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkValueSelector::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkValueSelector_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValueSelector *op = static_cast<vtkValueSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkValueSelector::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkValueSelector_Methods[] = {
  {"IsTypeOf", PyvtkValueSelector_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkValueSelector_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkValueSelector_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkValueSelector\nC++: static vtkValueSelector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkValueSelector_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkValueSelector\nC++: vtkValueSelector *NewInstance()\n\n"},
  {"Initialize", PyvtkValueSelector_Initialize, METH_VARARGS,
   "V.Initialize(vtkSelectionNode, string)\nC++: void Initialize(vtkSelectionNode *node,\n    const std::string &insidednessArrayName) override;\n\nSets the vtkSelectionNode used by this selection operator and\ninitializes the data structures in the selection operator based\non the selection.\n\n(for example in the vtkFrustumSelector this creates the vtkPlanes\nimplicit function to represent the frustum).\n\n@param node The selection node that determines the behavior of\n    this operator.\n@param insidednessArrayName The name of the insidedness array to\n    add to the output\n       from this operator.\n"},
  {"Finalize", PyvtkValueSelector_Finalize, METH_VARARGS,
   "V.Finalize()\nC++: void Finalize() override;\n\nDoes any cleanup of objects created in Initialize\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkValueSelector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkValueSelector", // tp_name
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
  PyvtkValueSelector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkValueSelector_StaticNew()
{
  return vtkValueSelector::New();
}

PyObject *PyvtkValueSelector_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkValueSelector_Type, PyvtkValueSelector_Methods,
    "vtkValueSelector",
 &PyvtkValueSelector_StaticNew);

  PyTypeObject *pytype = &PyvtkValueSelector_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSelector_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkValueSelector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkValueSelector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkValueSelector", o) != 0)
  {
    Py_DECREF(o);
  }

}

