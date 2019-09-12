// python wrapper for vtkAdjacencyMatrixToEdgeTable
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
#include "vtkAdjacencyMatrixToEdgeTable.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAdjacencyMatrixToEdgeTable(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAdjacencyMatrixToEdgeTable_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkAdjacencyMatrixToEdgeTable_Doc =
  "vtkAdjacencyMatrixToEdgeTable - Treats a dense 2-way array of doubles\nas an adacency matrix and converts it into a vtkTable suitable for\nuse as an edge table with vtkTableToGraph.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAdjacencyMatrixToEdgeTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAdjacencyMatrixToEdgeTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAdjacencyMatrixToEdgeTable *tempr = vtkAdjacencyMatrixToEdgeTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAdjacencyMatrixToEdgeTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAdjacencyMatrixToEdgeTable::NewInstance());

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
PyvtkAdjacencyMatrixToEdgeTable_GetSourceDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSourceDimension() :
      op->vtkAdjacencyMatrixToEdgeTable::GetSourceDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_SetSourceDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceDimension(temp0);
    }
    else
    {
      op->vtkAdjacencyMatrixToEdgeTable::SetSourceDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_GetValueArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetValueArrayName() :
      op->vtkAdjacencyMatrixToEdgeTable::GetValueArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_SetValueArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValueArrayName(temp0);
    }
    else
    {
      op->vtkAdjacencyMatrixToEdgeTable::SetValueArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_GetMinimumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMinimumCount() :
      op->vtkAdjacencyMatrixToEdgeTable::GetMinimumCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_SetMinimumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumCount(temp0);
    }
    else
    {
      op->vtkAdjacencyMatrixToEdgeTable::SetMinimumCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_GetMinimumThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumThreshold() :
      op->vtkAdjacencyMatrixToEdgeTable::GetMinimumThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdjacencyMatrixToEdgeTable_SetMinimumThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacencyMatrixToEdgeTable *op = static_cast<vtkAdjacencyMatrixToEdgeTable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumThreshold(temp0);
    }
    else
    {
      op->vtkAdjacencyMatrixToEdgeTable::SetMinimumThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAdjacencyMatrixToEdgeTable_Methods[] = {
  {"IsTypeOf", PyvtkAdjacencyMatrixToEdgeTable_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAdjacencyMatrixToEdgeTable_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAdjacencyMatrixToEdgeTable_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAdjacencyMatrixToEdgeTable\nC++: static vtkAdjacencyMatrixToEdgeTable *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAdjacencyMatrixToEdgeTable_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAdjacencyMatrixToEdgeTable\nC++: vtkAdjacencyMatrixToEdgeTable *NewInstance()\n\n"},
  {"GetSourceDimension", PyvtkAdjacencyMatrixToEdgeTable_GetSourceDimension, METH_VARARGS,
   "V.GetSourceDimension() -> int\nC++: virtual vtkIdType GetSourceDimension()\n\nSpecifies whether rows or columns become the \"source\" in the\noutput edge table. 0 = rows, 1 = columns.  Default: 0\n"},
  {"SetSourceDimension", PyvtkAdjacencyMatrixToEdgeTable_SetSourceDimension, METH_VARARGS,
   "V.SetSourceDimension(int)\nC++: virtual void SetSourceDimension(vtkIdType _arg)\n\nSpecifies whether rows or columns become the \"source\" in the\noutput edge table. 0 = rows, 1 = columns.  Default: 0\n"},
  {"GetValueArrayName", PyvtkAdjacencyMatrixToEdgeTable_GetValueArrayName, METH_VARARGS,
   "V.GetValueArrayName() -> string\nC++: virtual char *GetValueArrayName()\n\nControls the name of the output table column that contains edge\nweights. Default: \"value\"\n"},
  {"SetValueArrayName", PyvtkAdjacencyMatrixToEdgeTable_SetValueArrayName, METH_VARARGS,
   "V.SetValueArrayName(string)\nC++: virtual void SetValueArrayName(const char *_arg)\n\nControls the name of the output table column that contains edge\nweights. Default: \"value\"\n"},
  {"GetMinimumCount", PyvtkAdjacencyMatrixToEdgeTable_GetMinimumCount, METH_VARARGS,
   "V.GetMinimumCount() -> int\nC++: virtual vtkIdType GetMinimumCount()\n\nSpecifies the minimum number of adjacent edges to include for\neach source vertex. Default: 0\n"},
  {"SetMinimumCount", PyvtkAdjacencyMatrixToEdgeTable_SetMinimumCount, METH_VARARGS,
   "V.SetMinimumCount(int)\nC++: virtual void SetMinimumCount(vtkIdType _arg)\n\nSpecifies the minimum number of adjacent edges to include for\neach source vertex. Default: 0\n"},
  {"GetMinimumThreshold", PyvtkAdjacencyMatrixToEdgeTable_GetMinimumThreshold, METH_VARARGS,
   "V.GetMinimumThreshold() -> float\nC++: virtual double GetMinimumThreshold()\n\nSpecifies a minimum threshold that an edge weight must exceed to\nbe included in the output. Default: 0.5\n"},
  {"SetMinimumThreshold", PyvtkAdjacencyMatrixToEdgeTable_SetMinimumThreshold, METH_VARARGS,
   "V.SetMinimumThreshold(float)\nC++: virtual void SetMinimumThreshold(double _arg)\n\nSpecifies a minimum threshold that an edge weight must exceed to\nbe included in the output. Default: 0.5\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAdjacencyMatrixToEdgeTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkAdjacencyMatrixToEdgeTable", // tp_name
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
  PyvtkAdjacencyMatrixToEdgeTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAdjacencyMatrixToEdgeTable_StaticNew()
{
  return vtkAdjacencyMatrixToEdgeTable::New();
}

PyObject *PyvtkAdjacencyMatrixToEdgeTable_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAdjacencyMatrixToEdgeTable_Type, PyvtkAdjacencyMatrixToEdgeTable_Methods,
    "vtkAdjacencyMatrixToEdgeTable",
 &PyvtkAdjacencyMatrixToEdgeTable_StaticNew);

  PyTypeObject *pytype = &PyvtkAdjacencyMatrixToEdgeTable_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAdjacencyMatrixToEdgeTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAdjacencyMatrixToEdgeTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAdjacencyMatrixToEdgeTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

