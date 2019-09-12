// python wrapper for vtkSMPreselectionPipeline
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
#include "vtkSMPreselectionPipeline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPreselectionPipeline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMPreselectionPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSMPreselectionPipeline_Doc =
  "vtkSMPreselectionPipeline - Preselection enables the user to inspect\ncells/points without actually selecting them.\n\n"
  "Superclass: vtkObject\n\n"
  "The user moves the mouse cursor over a cell and see the cell\n"
  "highlighted. This is a global object that holds the pipeline for the\n"
  "interactive selection and the point tooltip mode.\n\n"
  "@sa\n"
  "vtkSMInteractiveSelectionPipeline vtkSMTooltipSelectionPipeline\n\n";


static PyObject *
PyvtkSMPreselectionPipeline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPreselectionPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPreselectionPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPreselectionPipeline *op = static_cast<vtkSMPreselectionPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPreselectionPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPreselectionPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPreselectionPipeline *tempr = vtkSMPreselectionPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPreselectionPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPreselectionPipeline *op = static_cast<vtkSMPreselectionPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPreselectionPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPreselectionPipeline::NewInstance());

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
PyvtkSMPreselectionPipeline_GetSelectionRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPreselectionPipeline *op = static_cast<vtkSMPreselectionPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetSelectionRepresentation() :
      op->vtkSMPreselectionPipeline::GetSelectionRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPreselectionPipeline_GetOrCreateSelectionRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrCreateSelectionRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPreselectionPipeline *op = static_cast<vtkSMPreselectionPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetOrCreateSelectionRepresentation() :
      op->vtkSMPreselectionPipeline::GetOrCreateSelectionRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPreselectionPipeline_CreateSelectionRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSelectionRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPreselectionPipeline *op = static_cast<vtkSMPreselectionPipeline *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->CreateSelectionRepresentation(temp0) :
      op->vtkSMPreselectionPipeline::CreateSelectionRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPreselectionPipeline_Show(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Show");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPreselectionPipeline *op = static_cast<vtkSMPreselectionPipeline *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  vtkSMSourceProxy *temp1 = nullptr;
  vtkSMRenderViewProxy *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy") &&
      ap.GetVTKObject(temp2, "vtkSMRenderViewProxy"))
  {
    if (ap.IsBound())
    {
      op->Show(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMPreselectionPipeline::Show(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPreselectionPipeline_Hide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPreselectionPipeline *op = static_cast<vtkSMPreselectionPipeline *>(vp);

  vtkSMRenderViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMRenderViewProxy"))
  {
    if (ap.IsBound())
    {
      op->Hide(temp0);
    }
    else
    {
      op->vtkSMPreselectionPipeline::Hide(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPreselectionPipeline_CopyLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPreselectionPipeline *op = static_cast<vtkSMPreselectionPipeline *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->CopyLabels(temp0);
    }
    else
    {
      op->vtkSMPreselectionPipeline::CopyLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPreselectionPipeline_Methods[] = {
  {"IsTypeOf", PyvtkSMPreselectionPipeline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPreselectionPipeline_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPreselectionPipeline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMPreselectionPipeline\nC++: static vtkSMPreselectionPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPreselectionPipeline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMPreselectionPipeline\nC++: vtkSMPreselectionPipeline *NewInstance()\n\n"},
  {"GetSelectionRepresentation", PyvtkSMPreselectionPipeline_GetSelectionRepresentation, METH_VARARGS,
   "V.GetSelectionRepresentation() -> vtkSMProxy\nC++: virtual vtkSMProxy *GetSelectionRepresentation()\n\nGet/Create the interactive selection representation\n"},
  {"GetOrCreateSelectionRepresentation", PyvtkSMPreselectionPipeline_GetOrCreateSelectionRepresentation, METH_VARARGS,
   "V.GetOrCreateSelectionRepresentation() -> vtkSMProxy\nC++: virtual vtkSMProxy *GetOrCreateSelectionRepresentation()\n\nGet/Create the interactive selection representation\n"},
  {"CreateSelectionRepresentation", PyvtkSMPreselectionPipeline_CreateSelectionRepresentation, METH_VARARGS,
   "V.CreateSelectionRepresentation(vtkSMSourceProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *CreateSelectionRepresentation(\n    vtkSMSourceProxy *extract)\n\nGet/Create the interactive selection representation\n"},
  {"Show", PyvtkSMPreselectionPipeline_Show, METH_VARARGS,
   "V.Show(vtkSMSourceProxy, vtkSMSourceProxy, vtkSMRenderViewProxy)\nC++: virtual void Show(vtkSMSourceProxy *sourceRepresentation,\n    vtkSMSourceProxy *selection, vtkSMRenderViewProxy *view)\n\nShows the interactive selection for 'selection' and\n'sourceRepresentation'. If either sourceRepresentation or\nselection are null it hides the interactive selection.\n"},
  {"Hide", PyvtkSMPreselectionPipeline_Hide, METH_VARARGS,
   "V.Hide(vtkSMRenderViewProxy)\nC++: virtual void Hide(vtkSMRenderViewProxy *view)\n\nHides the interactive selection\n"},
  {"CopyLabels", PyvtkSMPreselectionPipeline_CopyLabels, METH_VARARGS,
   "V.CopyLabels(vtkSMProxy)\nC++: void CopyLabels(vtkSMProxy *representation)\n\nCopies the labels for interactive selection from the selection\nlabels in the representation parameter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMPreselectionPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMPreselectionPipeline", // tp_name
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
  PyvtkSMPreselectionPipeline_Doc, // tp_doc
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

PyObject *PyvtkSMPreselectionPipeline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMPreselectionPipeline_Type, PyvtkSMPreselectionPipeline_Methods,
    "vtkSMPreselectionPipeline",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMPreselectionPipeline_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPreselectionPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPreselectionPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPreselectionPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

