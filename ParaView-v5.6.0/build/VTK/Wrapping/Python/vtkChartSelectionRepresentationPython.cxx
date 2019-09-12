// python wrapper for vtkChartSelectionRepresentation
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
#include "vtkChartSelectionRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartSelectionRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkChartSelectionRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkChartSelectionRepresentation_Doc =
  "vtkChartSelectionRepresentation - representation for showing\nselections in chart views.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "vtkChartSelectionRepresentation is a representation showing\n"
  "selections in chart views. It works with\n"
  "vtkChartSelectionRepresentation (namely\n"
  "vtkChartSelectionRepresentation::MapSelectionToView) to map the input\n"
  "vtkSelection to selection form that the view can understand and then\n"
  "passes it alone to the vtkPVContextView. For client-server cases,\n"
  "this class also handles delivering of the selection to all\n"
  "\"rendering\" nodes.\n\n";


static PyObject *
PyvtkChartSelectionRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartSelectionRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartSelectionRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartSelectionRepresentation *op = static_cast<vtkChartSelectionRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartSelectionRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartSelectionRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartSelectionRepresentation *tempr = vtkChartSelectionRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartSelectionRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartSelectionRepresentation *op = static_cast<vtkChartSelectionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartSelectionRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartSelectionRepresentation::NewInstance());

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
PyvtkChartSelectionRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartSelectionRepresentation *op = static_cast<vtkChartSelectionRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkChartSelectionRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartSelectionRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartSelectionRepresentation *op = static_cast<vtkChartSelectionRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkChartSelectionRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartSelectionRepresentation_SetChartRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartSelectionRepresentation *op = static_cast<vtkChartSelectionRepresentation *>(vp);

  vtkChartRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkChartRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetChartRepresentation(temp0);
    }
    else
    {
      op->vtkChartSelectionRepresentation::SetChartRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkChartSelectionRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkChartSelectionRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartSelectionRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartSelectionRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkChartSelectionRepresentation\nC++: static vtkChartSelectionRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartSelectionRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkChartSelectionRepresentation\nC++: vtkChartSelectionRepresentation *NewInstance()\n\n"},
  {"MarkModified", PyvtkChartSelectionRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis needs to be called on all instances of\nvtkChartSelectionRepresentation when the input is modified.\n"},
  {"SetVisibility", PyvtkChartSelectionRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool visible) override;\n\nSet visibility of the representation.\n"},
  {"SetChartRepresentation", PyvtkChartSelectionRepresentation_SetChartRepresentation, METH_VARARGS,
   "V.SetChartRepresentation(vtkChartRepresentation)\nC++: void SetChartRepresentation(vtkChartRepresentation *repr)\n\nGet/Set the chart representation for which this is a selection\nrepresentation. This is not reference counted.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkChartSelectionRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkChartSelectionRepresentation", // tp_name
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
  PyvtkChartSelectionRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartSelectionRepresentation_StaticNew()
{
  return vtkChartSelectionRepresentation::New();
}

PyObject *PyvtkChartSelectionRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkChartSelectionRepresentation_Type, PyvtkChartSelectionRepresentation_Methods,
    "vtkChartSelectionRepresentation",
 &PyvtkChartSelectionRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkChartSelectionRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartSelectionRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartSelectionRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartSelectionRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

