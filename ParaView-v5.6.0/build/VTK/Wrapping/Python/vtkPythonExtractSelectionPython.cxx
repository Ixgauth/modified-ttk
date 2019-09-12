// python wrapper for vtkPythonExtractSelection
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
#include "vtkPythonExtractSelection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPythonExtractSelection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPythonExtractSelection_ClassNew(); }

#ifndef DECLARED_PyvtkExtractSelectionBase_ClassNew
extern "C" { PyObject *PyvtkExtractSelectionBase_ClassNew(); }
#define DECLARED_PyvtkExtractSelectionBase_ClassNew
#endif

static const char *PyvtkPythonExtractSelection_Doc =
  "vtkPythonExtractSelection - vtkPythonExtractSelection is a used to\nextra cells/points using numpy.\n\n"
  "Superclass: vtkExtractSelectionBase\n\n"
  "This enables creation of arbitrary queries to be used as the\n"
  "selection criteria.\n\n";


static PyObject *
PyvtkPythonExtractSelection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPythonExtractSelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonExtractSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonExtractSelection *op = static_cast<vtkPythonExtractSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonExtractSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonExtractSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPythonExtractSelection *tempr = vtkPythonExtractSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonExtractSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonExtractSelection *op = static_cast<vtkPythonExtractSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPythonExtractSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonExtractSelection::NewInstance());

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
PyvtkPythonExtractSelection_ExtractElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonExtractSelection *op = static_cast<vtkPythonExtractSelection *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  vtkDataObject *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetVTKObject(temp2, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->ExtractElements(temp0, temp1, temp2) :
      op->vtkPythonExtractSelection::ExtractElements(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPythonExtractSelection_ExtractElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonExtractSelection *op = static_cast<vtkPythonExtractSelection *>(vp);

  int temp0;
  vtkCompositeDataSet *temp1 = nullptr;
  vtkCompositeDataSet *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCompositeDataSet") &&
      ap.GetVTKObject(temp2, "vtkCompositeDataSet"))
  {
    bool tempr = (ap.IsBound() ?
      op->ExtractElements(temp0, temp1, temp2) :
      op->vtkPythonExtractSelection::ExtractElements(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPythonExtractSelection_ExtractElements_Methods[] = {
  {nullptr, PyvtkPythonExtractSelection_ExtractElements_s1, METH_VARARGS,
   "@iVV *vtkDataObject *vtkDataObject"},
  {nullptr, PyvtkPythonExtractSelection_ExtractElements_s2, METH_VARARGS,
   "@iVV *vtkCompositeDataSet *vtkCompositeDataSet"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPythonExtractSelection_ExtractElements(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPythonExtractSelection_ExtractElements_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ExtractElements");
  return nullptr;
}


static PyMethodDef PyvtkPythonExtractSelection_Methods[] = {
  {"IsTypeOf", PyvtkPythonExtractSelection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPythonExtractSelection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPythonExtractSelection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPythonExtractSelection\nC++: static vtkPythonExtractSelection *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPythonExtractSelection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPythonExtractSelection\nC++: vtkPythonExtractSelection *NewInstance()\n\n"},
  {"ExtractElements", PyvtkPythonExtractSelection_ExtractElements, METH_VARARGS,
   "V.ExtractElements(int, vtkDataObject, vtkDataObject) -> bool\nC++: bool ExtractElements(int attributeType, vtkDataObject *input,\n     vtkDataObject *output)\nV.ExtractElements(int, vtkCompositeDataSet, vtkCompositeDataSet)\n    -> bool\nC++: bool ExtractElements(int attributeType,\n    vtkCompositeDataSet *input, vtkCompositeDataSet *output)\n\nMethod called by Python code to handle the extraction\nlogic.attributeType is vtkDataObject::AttributeTypes and not to\nbe confused with vtkSelectionNode::SelectionField\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPythonExtractSelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPythonExtractSelection", // tp_name
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
  PyvtkPythonExtractSelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPythonExtractSelection_StaticNew()
{
  return vtkPythonExtractSelection::New();
}

PyObject *PyvtkPythonExtractSelection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPythonExtractSelection_Type, PyvtkPythonExtractSelection_Methods,
    "vtkPythonExtractSelection",
 &PyvtkPythonExtractSelection_StaticNew);

  PyTypeObject *pytype = &PyvtkPythonExtractSelection_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExtractSelectionBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPythonExtractSelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPythonExtractSelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPythonExtractSelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

