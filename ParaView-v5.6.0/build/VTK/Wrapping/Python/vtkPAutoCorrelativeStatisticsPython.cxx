// python wrapper for vtkPAutoCorrelativeStatistics
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
#include "vtkPAutoCorrelativeStatistics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPAutoCorrelativeStatistics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPAutoCorrelativeStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkAutoCorrelativeStatistics_ClassNew
extern "C" { PyObject *PyvtkAutoCorrelativeStatistics_ClassNew(); }
#define DECLARED_PyvtkAutoCorrelativeStatistics_ClassNew
#endif

static const char *PyvtkPAutoCorrelativeStatistics_Doc =
  "vtkPAutoCorrelativeStatistics - A class for parallel auto-correlative\nstatistics\n\n"
  "Superclass: vtkAutoCorrelativeStatistics\n\n"
  "vtkPAutoCorrelativeStatistics is vtkAutoCorrelativeStatistics\n"
  "subclass for parallel datasets. It learns and derives the global\n"
  "statistical model on each node, but assesses each individual data\n"
  "points on the node that owns it.\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Kitware SAS\n"
  "2012.\n\n";


static PyObject *
PyvtkPAutoCorrelativeStatistics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPAutoCorrelativeStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPAutoCorrelativeStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPAutoCorrelativeStatistics *tempr = vtkPAutoCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPAutoCorrelativeStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPAutoCorrelativeStatistics::NewInstance());

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
PyvtkPAutoCorrelativeStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

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
      op->vtkPAutoCorrelativeStatistics::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPAutoCorrelativeStatistics::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_Learn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Learn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

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
      op->vtkPAutoCorrelativeStatistics::Learn(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPAutoCorrelativeStatistics_Test(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Test");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPAutoCorrelativeStatistics *op = static_cast<vtkPAutoCorrelativeStatistics *>(vp);

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
      op->vtkPAutoCorrelativeStatistics::Test(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPAutoCorrelativeStatistics_Methods[] = {
  {"IsTypeOf", PyvtkPAutoCorrelativeStatistics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPAutoCorrelativeStatistics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPAutoCorrelativeStatistics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPAutoCorrelativeStatistics\nC++: static vtkPAutoCorrelativeStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPAutoCorrelativeStatistics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPAutoCorrelativeStatistics\nC++: vtkPAutoCorrelativeStatistics *NewInstance()\n\n"},
  {"SetController", PyvtkPAutoCorrelativeStatistics_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {"GetController", PyvtkPAutoCorrelativeStatistics_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {"Learn", PyvtkPAutoCorrelativeStatistics_Learn, METH_VARARGS,
   "V.Learn(vtkTable, vtkTable, vtkMultiBlockDataSet)\nC++: void Learn(vtkTable *inData, vtkTable *inParameters,\n    vtkMultiBlockDataSet *outMeta) override;\n\nExecute the parallel calculations required by the Learn option.\n"},
  {"Test", PyvtkPAutoCorrelativeStatistics_Test, METH_VARARGS,
   "V.Test(vtkTable, vtkMultiBlockDataSet, vtkTable)\nC++: void Test(vtkTable *, vtkMultiBlockDataSet *, vtkTable *)\n    override;\n\nExecute the calculations required by the Test option. NB: Not\nimplemented for more than 1 processor\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPAutoCorrelativeStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelStatisticsPython.vtkPAutoCorrelativeStatistics", // tp_name
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
  PyvtkPAutoCorrelativeStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPAutoCorrelativeStatistics_StaticNew()
{
  return vtkPAutoCorrelativeStatistics::New();
}

PyObject *PyvtkPAutoCorrelativeStatistics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPAutoCorrelativeStatistics_Type, PyvtkPAutoCorrelativeStatistics_Methods,
    "vtkPAutoCorrelativeStatistics",
 &PyvtkPAutoCorrelativeStatistics_StaticNew);

  PyTypeObject *pytype = &PyvtkPAutoCorrelativeStatistics_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAutoCorrelativeStatistics_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPAutoCorrelativeStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPAutoCorrelativeStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPAutoCorrelativeStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

