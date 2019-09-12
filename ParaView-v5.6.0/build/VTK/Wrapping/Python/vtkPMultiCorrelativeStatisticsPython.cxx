// python wrapper for vtkPMultiCorrelativeStatistics
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
#include "vtkPMultiCorrelativeStatistics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPMultiCorrelativeStatistics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPMultiCorrelativeStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkMultiCorrelativeStatistics_ClassNew
extern "C" { PyObject *PyvtkMultiCorrelativeStatistics_ClassNew(); }
#define DECLARED_PyvtkMultiCorrelativeStatistics_ClassNew
#endif

static const char *PyvtkPMultiCorrelativeStatistics_Doc =
  "vtkPMultiCorrelativeStatistics - A class for parallel bivariate\ncorrelative statistics\n\n"
  "Superclass: vtkMultiCorrelativeStatistics\n\n"
  "vtkPMultiCorrelativeStatistics is vtkMultiCorrelativeStatistics\n"
  "subclass for parallel datasets. It learns and derives the global\n"
  "statistical model on each node, but assesses each individual data\n"
  "points on the node that owns it.\n\n"
  "@par Thanks: Thanks to Philippe Pebay and David Thompson from Sandia\n"
  "National Laboratories for implementing this class.\n\n";


static PyObject *
PyvtkPMultiCorrelativeStatistics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPMultiCorrelativeStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPMultiCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMultiCorrelativeStatistics *op = static_cast<vtkPMultiCorrelativeStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPMultiCorrelativeStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPMultiCorrelativeStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPMultiCorrelativeStatistics *tempr = vtkPMultiCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPMultiCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMultiCorrelativeStatistics *op = static_cast<vtkPMultiCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPMultiCorrelativeStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPMultiCorrelativeStatistics::NewInstance());

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
PyvtkPMultiCorrelativeStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMultiCorrelativeStatistics *op = static_cast<vtkPMultiCorrelativeStatistics *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkPMultiCorrelativeStatistics::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPMultiCorrelativeStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPMultiCorrelativeStatistics *op = static_cast<vtkPMultiCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPMultiCorrelativeStatistics::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPMultiCorrelativeStatistics_GatherStatistics(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GatherStatistics");

  vtkMultiProcessController *temp0 = nullptr;
  vtkTable *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController") &&
      ap.GetVTKObject(temp1, "vtkTable"))
  {
    vtkPMultiCorrelativeStatistics::GatherStatistics(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPMultiCorrelativeStatistics_Methods[] = {
  {"IsTypeOf", PyvtkPMultiCorrelativeStatistics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPMultiCorrelativeStatistics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPMultiCorrelativeStatistics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPMultiCorrelativeStatistics\nC++: static vtkPMultiCorrelativeStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPMultiCorrelativeStatistics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPMultiCorrelativeStatistics\nC++: vtkPMultiCorrelativeStatistics *NewInstance()\n\n"},
  {"SetController", PyvtkPMultiCorrelativeStatistics_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {"GetController", PyvtkPMultiCorrelativeStatistics_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {"GatherStatistics", PyvtkPMultiCorrelativeStatistics_GatherStatistics, METH_VARARGS,
   "V.GatherStatistics(vtkMultiProcessController, vtkTable)\nC++: static void GatherStatistics(\n    vtkMultiProcessController *curController, vtkTable *sparseCov)\n\nPerforms Reduction\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPMultiCorrelativeStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelStatisticsPython.vtkPMultiCorrelativeStatistics", // tp_name
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
  PyvtkPMultiCorrelativeStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPMultiCorrelativeStatistics_StaticNew()
{
  return vtkPMultiCorrelativeStatistics::New();
}

PyObject *PyvtkPMultiCorrelativeStatistics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPMultiCorrelativeStatistics_Type, PyvtkPMultiCorrelativeStatistics_Methods,
    "vtkPMultiCorrelativeStatistics",
 &PyvtkPMultiCorrelativeStatistics_StaticNew);

  PyTypeObject *pytype = &PyvtkPMultiCorrelativeStatistics_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiCorrelativeStatistics_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPMultiCorrelativeStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPMultiCorrelativeStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPMultiCorrelativeStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

