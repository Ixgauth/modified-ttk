// python wrapper for vtkPolyDataToReebGraphFilter
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
#include "vtkPolyDataToReebGraphFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataToReebGraphFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolyDataToReebGraphFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDirectedGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDirectedGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDirectedGraphAlgorithm_ClassNew
#endif

static const char *PyvtkPolyDataToReebGraphFilter_Doc =
  "vtkPolyDataToReebGraphFilter - generate a Reeb graph from a scalar\nfield defined on a vtkPolyData.\n\n"
  "Superclass: vtkDirectedGraphAlgorithm\n\n"
  "The filter will first try to pull as a scalar field the vtkDataArray\n"
  "with Id 'fieldId' of the mesh's vtkPointData. If this field does not\n"
  "exist, the filter will use the vtkElevationFilter to generate a\n"
  "default scalar field.\n\n";


static PyObject *
PyvtkPolyDataToReebGraphFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataToReebGraphFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToReebGraphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToReebGraphFilter *op = static_cast<vtkPolyDataToReebGraphFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataToReebGraphFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToReebGraphFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataToReebGraphFilter *tempr = vtkPolyDataToReebGraphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToReebGraphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToReebGraphFilter *op = static_cast<vtkPolyDataToReebGraphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataToReebGraphFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataToReebGraphFilter::NewInstance());

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
PyvtkPolyDataToReebGraphFilter_SetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToReebGraphFilter *op = static_cast<vtkPolyDataToReebGraphFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldId(temp0);
    }
    else
    {
      op->vtkPolyDataToReebGraphFilter::SetFieldId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToReebGraphFilter_GetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToReebGraphFilter *op = static_cast<vtkPolyDataToReebGraphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldId() :
      op->vtkPolyDataToReebGraphFilter::GetFieldId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToReebGraphFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToReebGraphFilter *op = static_cast<vtkPolyDataToReebGraphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkReebGraph *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkPolyDataToReebGraphFilter::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataToReebGraphFilter_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataToReebGraphFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataToReebGraphFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataToReebGraphFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolyDataToReebGraphFilter\nC++: static vtkPolyDataToReebGraphFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataToReebGraphFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolyDataToReebGraphFilter\nC++: vtkPolyDataToReebGraphFilter *NewInstance()\n\n"},
  {"SetFieldId", PyvtkPolyDataToReebGraphFilter_SetFieldId, METH_VARARGS,
   "V.SetFieldId(int)\nC++: virtual void SetFieldId(int _arg)\n\nSet the scalar field id (default = 0).\n"},
  {"GetFieldId", PyvtkPolyDataToReebGraphFilter_GetFieldId, METH_VARARGS,
   "V.GetFieldId() -> int\nC++: virtual int GetFieldId()\n\nSet the scalar field id (default = 0).\n"},
  {"GetOutput", PyvtkPolyDataToReebGraphFilter_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkReebGraph\nC++: vtkReebGraph *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolyDataToReebGraphFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkPolyDataToReebGraphFilter", // tp_name
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
  PyvtkPolyDataToReebGraphFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataToReebGraphFilter_StaticNew()
{
  return vtkPolyDataToReebGraphFilter::New();
}

PyObject *PyvtkPolyDataToReebGraphFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolyDataToReebGraphFilter_Type, PyvtkPolyDataToReebGraphFilter_Methods,
    "vtkPolyDataToReebGraphFilter",
 &PyvtkPolyDataToReebGraphFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPolyDataToReebGraphFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDirectedGraphAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataToReebGraphFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataToReebGraphFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataToReebGraphFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

