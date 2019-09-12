// python wrapper for vtkBooleanOperationPolyDataFilter
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
#include "vtkBooleanOperationPolyDataFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBooleanOperationPolyDataFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBooleanOperationPolyDataFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkBooleanOperationPolyDataFilter_Doc =
  "vtkBooleanOperationPolyDataFilter - Computes the boundary of the\nunion, intersection, or difference volume computed from the volumes\ndefined by two input surfaces.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "The two surfaces do not need to be manifold, but if they are not,\n"
  "unexpected results may be obtained. The resulting surface is\n"
  "available in the first output of the filter. The second output\n"
  "contains a set of polylines that represent the intersection between\n"
  "the two input surfaces.\n\n"
  "This code was contributed in the VTK Journal paper: \"Boolean Operations on Surfaces in VTK Without External\n"
  "Libraries\" by Cory Quammen, Chris Weigle C., Russ Taylor\n"
  "http://hdl.handle.net/10380/3262\n"
  "http://www.midasjournal.org/browse/publication/797\n\n";

static PyTypeObject PyvtkBooleanOperationPolyDataFilter_OperationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkBooleanOperationPolyDataFilter.OperationType", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkBooleanOperationPolyDataFilter_OperationType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkBooleanOperationPolyDataFilter_OperationType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBooleanOperationPolyDataFilter_OperationType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBooleanOperationPolyDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBooleanOperationPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBooleanOperationPolyDataFilter *tempr = vtkBooleanOperationPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBooleanOperationPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBooleanOperationPolyDataFilter::NewInstance());

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
PyvtkBooleanOperationPolyDataFilter_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperation(temp0);
    }
    else
    {
      op->vtkBooleanOperationPolyDataFilter::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_GetOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMinValue() :
      op->vtkBooleanOperationPolyDataFilter::GetOperationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_GetOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMaxValue() :
      op->vtkBooleanOperationPolyDataFilter::GetOperationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkBooleanOperationPolyDataFilter::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SetOperationToUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToUnion();
    }
    else
    {
      op->vtkBooleanOperationPolyDataFilter::SetOperationToUnion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SetOperationToIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToIntersection();
    }
    else
    {
      op->vtkBooleanOperationPolyDataFilter::SetOperationToIntersection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SetOperationToDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToDifference();
    }
    else
    {
      op->vtkBooleanOperationPolyDataFilter::SetOperationToDifference();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SetReorientDifferenceCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReorientDifferenceCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReorientDifferenceCells(temp0);
    }
    else
    {
      op->vtkBooleanOperationPolyDataFilter::SetReorientDifferenceCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_GetReorientDifferenceCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReorientDifferenceCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReorientDifferenceCells() :
      op->vtkBooleanOperationPolyDataFilter::GetReorientDifferenceCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_ReorientDifferenceCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReorientDifferenceCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReorientDifferenceCellsOn();
    }
    else
    {
      op->vtkBooleanOperationPolyDataFilter::ReorientDifferenceCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_ReorientDifferenceCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReorientDifferenceCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReorientDifferenceCellsOff();
    }
    else
    {
      op->vtkBooleanOperationPolyDataFilter::ReorientDifferenceCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkBooleanOperationPolyDataFilter::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanOperationPolyDataFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanOperationPolyDataFilter *op = static_cast<vtkBooleanOperationPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkBooleanOperationPolyDataFilter::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBooleanOperationPolyDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkBooleanOperationPolyDataFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBooleanOperationPolyDataFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBooleanOperationPolyDataFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBooleanOperationPolyDataFilter\nC++: static vtkBooleanOperationPolyDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBooleanOperationPolyDataFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBooleanOperationPolyDataFilter\nC++: vtkBooleanOperationPolyDataFilter *NewInstance()\n\n"},
  {"SetOperation", PyvtkBooleanOperationPolyDataFilter_SetOperation, METH_VARARGS,
   "V.SetOperation(int)\nC++: virtual void SetOperation(int _arg)\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"GetOperationMinValue", PyvtkBooleanOperationPolyDataFilter_GetOperationMinValue, METH_VARARGS,
   "V.GetOperationMinValue() -> int\nC++: virtual int GetOperationMinValue()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"GetOperationMaxValue", PyvtkBooleanOperationPolyDataFilter_GetOperationMaxValue, METH_VARARGS,
   "V.GetOperationMaxValue() -> int\nC++: virtual int GetOperationMaxValue()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"GetOperation", PyvtkBooleanOperationPolyDataFilter_GetOperation, METH_VARARGS,
   "V.GetOperation() -> int\nC++: virtual int GetOperation()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"SetOperationToUnion", PyvtkBooleanOperationPolyDataFilter_SetOperationToUnion, METH_VARARGS,
   "V.SetOperationToUnion()\nC++: void SetOperationToUnion()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"SetOperationToIntersection", PyvtkBooleanOperationPolyDataFilter_SetOperationToIntersection, METH_VARARGS,
   "V.SetOperationToIntersection()\nC++: void SetOperationToIntersection()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"SetOperationToDifference", PyvtkBooleanOperationPolyDataFilter_SetOperationToDifference, METH_VARARGS,
   "V.SetOperationToDifference()\nC++: void SetOperationToDifference()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"SetReorientDifferenceCells", PyvtkBooleanOperationPolyDataFilter_SetReorientDifferenceCells, METH_VARARGS,
   "V.SetReorientDifferenceCells(int)\nC++: virtual void SetReorientDifferenceCells(vtkTypeBool _arg)\n\nTurn on/off cell reorientation of the intersection portion of the\nsurface when the operation is set to DIFFERENCE. Defaults to on.\n"},
  {"GetReorientDifferenceCells", PyvtkBooleanOperationPolyDataFilter_GetReorientDifferenceCells, METH_VARARGS,
   "V.GetReorientDifferenceCells() -> int\nC++: virtual vtkTypeBool GetReorientDifferenceCells()\n\nTurn on/off cell reorientation of the intersection portion of the\nsurface when the operation is set to DIFFERENCE. Defaults to on.\n"},
  {"ReorientDifferenceCellsOn", PyvtkBooleanOperationPolyDataFilter_ReorientDifferenceCellsOn, METH_VARARGS,
   "V.ReorientDifferenceCellsOn()\nC++: virtual void ReorientDifferenceCellsOn()\n\nTurn on/off cell reorientation of the intersection portion of the\nsurface when the operation is set to DIFFERENCE. Defaults to on.\n"},
  {"ReorientDifferenceCellsOff", PyvtkBooleanOperationPolyDataFilter_ReorientDifferenceCellsOff, METH_VARARGS,
   "V.ReorientDifferenceCellsOff()\nC++: virtual void ReorientDifferenceCellsOff()\n\nTurn on/off cell reorientation of the intersection portion of the\nsurface when the operation is set to DIFFERENCE. Defaults to on.\n"},
  {"SetTolerance", PyvtkBooleanOperationPolyDataFilter_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSet/get the tolerance used to determine when a point's absolute\ndistance is considered to be zero. Defaults to 1e-6.\n"},
  {"GetTolerance", PyvtkBooleanOperationPolyDataFilter_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSet/get the tolerance used to determine when a point's absolute\ndistance is considered to be zero. Defaults to 1e-6.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBooleanOperationPolyDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkBooleanOperationPolyDataFilter", // tp_name
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
  PyvtkBooleanOperationPolyDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBooleanOperationPolyDataFilter_StaticNew()
{
  return vtkBooleanOperationPolyDataFilter::New();
}

PyObject *PyvtkBooleanOperationPolyDataFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBooleanOperationPolyDataFilter_Type, PyvtkBooleanOperationPolyDataFilter_Methods,
    "vtkBooleanOperationPolyDataFilter",
 &PyvtkBooleanOperationPolyDataFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkBooleanOperationPolyDataFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkBooleanOperationPolyDataFilter_OperationType_Type);
  PyvtkBooleanOperationPolyDataFilter_OperationType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkBooleanOperationPolyDataFilter_OperationType_Type);

  o = (PyObject *)&PyvtkBooleanOperationPolyDataFilter_OperationType_Type;
  if (PyDict_SetItemString(d, "OperationType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkBooleanOperationPolyDataFilter::OperationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VTK_UNION", vtkBooleanOperationPolyDataFilter::VTK_UNION },
        { "VTK_INTERSECTION", vtkBooleanOperationPolyDataFilter::VTK_INTERSECTION },
        { "VTK_DIFFERENCE", vtkBooleanOperationPolyDataFilter::VTK_DIFFERENCE },
      };

    o = PyvtkBooleanOperationPolyDataFilter_OperationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBooleanOperationPolyDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBooleanOperationPolyDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBooleanOperationPolyDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

