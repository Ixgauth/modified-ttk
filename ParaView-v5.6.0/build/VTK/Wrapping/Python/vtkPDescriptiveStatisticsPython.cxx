// python wrapper for vtkPDescriptiveStatistics
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
#include "vtkPDescriptiveStatistics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPDescriptiveStatistics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPDescriptiveStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkDescriptiveStatistics_ClassNew
extern "C" { PyObject *PyvtkDescriptiveStatistics_ClassNew(); }
#define DECLARED_PyvtkDescriptiveStatistics_ClassNew
#endif

static const char *PyvtkPDescriptiveStatistics_Doc =
  "vtkPDescriptiveStatistics - A class for parallel univariate\ndescriptive statistics\n\n"
  "Superclass: vtkDescriptiveStatistics\n\n"
  "vtkPDescriptiveStatistics is vtkDescriptiveStatistics subclass for\n"
  "parallel datasets. It learns and derives the global statistical model\n"
  "on each node, but assesses each individual data points on the node\n"
  "that owns it.\n\n"
  "@par Thanks: Thanks to Philippe Pebay from Sandia National\n"
  "Laboratories for implementing this class.\n\n";


static PyObject *
PyvtkPDescriptiveStatistics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPDescriptiveStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPDescriptiveStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPDescriptiveStatistics *tempr = vtkPDescriptiveStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPDescriptiveStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPDescriptiveStatistics::NewInstance());

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
PyvtkPDescriptiveStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

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
      op->vtkPDescriptiveStatistics::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPDescriptiveStatistics::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_Learn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Learn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  vtkTable *temp0 = nullptr;
  vtkTable *temp1 = nullptr;
  vtkMultiBlockDataSet *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetVTKObject(temp2, "vtkMultiBlockDataSet"))
  {
    if (ap.IsBound())
    {
      op->Learn(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPDescriptiveStatistics::Learn(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPDescriptiveStatistics_Methods[] = {
  {"IsTypeOf", PyvtkPDescriptiveStatistics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPDescriptiveStatistics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPDescriptiveStatistics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPDescriptiveStatistics\nC++: static vtkPDescriptiveStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPDescriptiveStatistics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPDescriptiveStatistics\nC++: vtkPDescriptiveStatistics *NewInstance()\n\n"},
  {"SetController", PyvtkPDescriptiveStatistics_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {"GetController", PyvtkPDescriptiveStatistics_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {"Learn", PyvtkPDescriptiveStatistics_Learn, METH_VARARGS,
   "V.Learn(vtkTable, vtkTable, vtkMultiBlockDataSet)\nC++: void Learn(vtkTable *inData, vtkTable *inParameters,\n    vtkMultiBlockDataSet *outMeta) override;\n\nExecute the parallel calculations required by the Learn option.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPDescriptiveStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelStatisticsPython.vtkPDescriptiveStatistics", // tp_name
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
  PyvtkPDescriptiveStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPDescriptiveStatistics_StaticNew()
{
  return vtkPDescriptiveStatistics::New();
}

PyObject *PyvtkPDescriptiveStatistics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPDescriptiveStatistics_Type, PyvtkPDescriptiveStatistics_Methods,
    "vtkPDescriptiveStatistics",
 &PyvtkPDescriptiveStatistics_StaticNew);

  PyTypeObject *pytype = &PyvtkPDescriptiveStatistics_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDescriptiveStatistics_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPDescriptiveStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPDescriptiveStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPDescriptiveStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

