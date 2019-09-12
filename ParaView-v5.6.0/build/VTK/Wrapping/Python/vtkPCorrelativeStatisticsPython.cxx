// python wrapper for vtkPCorrelativeStatistics
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
#include "vtkPCorrelativeStatistics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPCorrelativeStatistics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPCorrelativeStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkCorrelativeStatistics_ClassNew
extern "C" { PyObject *PyvtkCorrelativeStatistics_ClassNew(); }
#define DECLARED_PyvtkCorrelativeStatistics_ClassNew
#endif

static const char *PyvtkPCorrelativeStatistics_Doc =
  "vtkPCorrelativeStatistics - A class for parallel bivariate\ncorrelative statistics\n\n"
  "Superclass: vtkCorrelativeStatistics\n\n"
  "vtkPCorrelativeStatistics is vtkCorrelativeStatistics subclass for\n"
  "parallel datasets. It learns and derives the global statistical model\n"
  "on each node, but assesses each individual data points on the node\n"
  "that owns it.\n\n"
  "@par Thanks: Thanks to Philippe Pebay from Sandia National\n"
  "Laboratories for implementing this class.\n\n";


static PyObject *
PyvtkPCorrelativeStatistics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPCorrelativeStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCorrelativeStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPCorrelativeStatistics *tempr = vtkPCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPCorrelativeStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCorrelativeStatistics::NewInstance());

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
PyvtkPCorrelativeStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

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
      op->vtkPCorrelativeStatistics::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPCorrelativeStatistics::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_Learn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Learn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

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
      op->vtkPCorrelativeStatistics::Learn(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_Test(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Test");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

  vtkTable *temp0 = nullptr;
  vtkMultiBlockDataSet *temp1 = nullptr;
  vtkTable *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet") &&
      ap.GetVTKObject(temp2, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->Test(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPCorrelativeStatistics::Test(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPCorrelativeStatistics_Methods[] = {
  {"IsTypeOf", PyvtkPCorrelativeStatistics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPCorrelativeStatistics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPCorrelativeStatistics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPCorrelativeStatistics\nC++: static vtkPCorrelativeStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPCorrelativeStatistics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPCorrelativeStatistics\nC++: vtkPCorrelativeStatistics *NewInstance()\n\n"},
  {"SetController", PyvtkPCorrelativeStatistics_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {"GetController", PyvtkPCorrelativeStatistics_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {"Learn", PyvtkPCorrelativeStatistics_Learn, METH_VARARGS,
   "V.Learn(vtkTable, vtkTable, vtkMultiBlockDataSet)\nC++: void Learn(vtkTable *inData, vtkTable *inParameters,\n    vtkMultiBlockDataSet *outMeta) override;\n\nExecute the parallel calculations required by the Learn option.\n"},
  {"Test", PyvtkPCorrelativeStatistics_Test, METH_VARARGS,
   "V.Test(vtkTable, vtkMultiBlockDataSet, vtkTable)\nC++: void Test(vtkTable *, vtkMultiBlockDataSet *, vtkTable *)\n    override;\n\nExecute the calculations required by the Test option. NB: Not\nimplemented for more than 1 processor\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPCorrelativeStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelStatisticsPython.vtkPCorrelativeStatistics", // tp_name
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
  PyvtkPCorrelativeStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPCorrelativeStatistics_StaticNew()
{
  return vtkPCorrelativeStatistics::New();
}

PyObject *PyvtkPCorrelativeStatistics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPCorrelativeStatistics_Type, PyvtkPCorrelativeStatistics_Methods,
    "vtkPCorrelativeStatistics",
 &PyvtkPCorrelativeStatistics_StaticNew);

  PyTypeObject *pytype = &PyvtkPCorrelativeStatistics_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCorrelativeStatistics_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPCorrelativeStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPCorrelativeStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPCorrelativeStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

