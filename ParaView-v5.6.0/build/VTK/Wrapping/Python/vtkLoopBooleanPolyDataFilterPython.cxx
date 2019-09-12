// python wrapper for vtkLoopBooleanPolyDataFilter
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
#include "vtkLoopBooleanPolyDataFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLoopBooleanPolyDataFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLoopBooleanPolyDataFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkLoopBooleanPolyDataFilter_Doc =
  "vtkLoopBooleanPolyDataFilter - Computes the boundary of the union,\nintersection, or difference volume computed from the volumes defined\nby two input surfaces.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "The two surfaces do not need to be manifold, but if they are not,\n"
  "unexpected results may be obtained. The resulting surface is\n"
  "available in the first output of the filter. The second output\n"
  "contains a set of polylines that represent the intersection between\n"
  "the two input surfaces. The filter uses\n"
  "vtkIntersectionPolyDataFilter. Must have information about the cells\n"
  "on mesh that the intersection lines touch. Filter assumes this\n"
  "information is given. The output result will have data about the\n"
  "Original Surface, BoundaryPoints, Boundary Cells, Free Edges, and Bad\n"
  "Triangles\n\n";

static PyTypeObject PyvtkLoopBooleanPolyDataFilter_OperationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkLoopBooleanPolyDataFilter.OperationType", // tp_name
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

PyObject *PyvtkLoopBooleanPolyDataFilter_OperationType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLoopBooleanPolyDataFilter_OperationType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLoopBooleanPolyDataFilter_OperationType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkLoopBooleanPolyDataFilter.NoIntersectionOutputType", // tp_name
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

PyObject *PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLoopBooleanPolyDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLoopBooleanPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLoopBooleanPolyDataFilter *tempr = vtkLoopBooleanPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLoopBooleanPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLoopBooleanPolyDataFilter::NewInstance());

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
PyvtkLoopBooleanPolyDataFilter_GetNumberOfIntersectionPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntersectionPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIntersectionPoints() :
      op->vtkLoopBooleanPolyDataFilter::GetNumberOfIntersectionPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetNumberOfIntersectionLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntersectionLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIntersectionLines() :
      op->vtkLoopBooleanPolyDataFilter::GetNumberOfIntersectionLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetNoIntersectionOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoIntersectionOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoIntersectionOutput() :
      op->vtkLoopBooleanPolyDataFilter::GetNoIntersectionOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetNoIntersectionOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoIntersectionOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoIntersectionOutput(temp0);
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::SetNoIntersectionOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NoIntersectionOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NoIntersectionOutputOn();
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::NoIntersectionOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NoIntersectionOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NoIntersectionOutputOff();
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::NoIntersectionOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

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
      op->vtkLoopBooleanPolyDataFilter::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMinValue() :
      op->vtkLoopBooleanPolyDataFilter::GetOperationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMaxValue() :
      op->vtkLoopBooleanPolyDataFilter::GetOperationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkLoopBooleanPolyDataFilter::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetOperationToUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToUnion();
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::SetOperationToUnion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetOperationToIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToIntersection();
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::SetOperationToIntersection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetOperationToDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToDifference();
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::SetOperationToDifference();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStatus() :
      op->vtkLoopBooleanPolyDataFilter::GetStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkLoopBooleanPolyDataFilter::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

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
      op->vtkLoopBooleanPolyDataFilter::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLoopBooleanPolyDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkLoopBooleanPolyDataFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLoopBooleanPolyDataFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLoopBooleanPolyDataFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLoopBooleanPolyDataFilter\nC++: static vtkLoopBooleanPolyDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLoopBooleanPolyDataFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLoopBooleanPolyDataFilter\nC++: vtkLoopBooleanPolyDataFilter *NewInstance()\n\n"},
  {"GetNumberOfIntersectionPoints", PyvtkLoopBooleanPolyDataFilter_GetNumberOfIntersectionPoints, METH_VARARGS,
   "V.GetNumberOfIntersectionPoints() -> int\nC++: virtual int GetNumberOfIntersectionPoints()\n\nInteger describing the number of intersection points and lines\n"},
  {"GetNumberOfIntersectionLines", PyvtkLoopBooleanPolyDataFilter_GetNumberOfIntersectionLines, METH_VARARGS,
   "V.GetNumberOfIntersectionLines() -> int\nC++: virtual int GetNumberOfIntersectionLines()\n\nInteger describing the number of intersection points and lines\n"},
  {"GetNoIntersectionOutput", PyvtkLoopBooleanPolyDataFilter_GetNoIntersectionOutput, METH_VARARGS,
   "V.GetNoIntersectionOutput() -> int\nC++: virtual int GetNoIntersectionOutput()\n\nONLY USED IF NO INTERSECTION BETWEEN SURFACES Variable to\ndetermine what is output if no intersection occurs. 0 = neither\n(default), 1 = first, 2 = second, 3 = both\n"},
  {"SetNoIntersectionOutput", PyvtkLoopBooleanPolyDataFilter_SetNoIntersectionOutput, METH_VARARGS,
   "V.SetNoIntersectionOutput(int)\nC++: virtual void SetNoIntersectionOutput(int _arg)\n\nONLY USED IF NO INTERSECTION BETWEEN SURFACES Variable to\ndetermine what is output if no intersection occurs. 0 = neither\n(default), 1 = first, 2 = second, 3 = both\n"},
  {"NoIntersectionOutputOn", PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputOn, METH_VARARGS,
   "V.NoIntersectionOutputOn()\nC++: virtual void NoIntersectionOutputOn()\n\nONLY USED IF NO INTERSECTION BETWEEN SURFACES Variable to\ndetermine what is output if no intersection occurs. 0 = neither\n(default), 1 = first, 2 = second, 3 = both\n"},
  {"NoIntersectionOutputOff", PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputOff, METH_VARARGS,
   "V.NoIntersectionOutputOff()\nC++: virtual void NoIntersectionOutputOff()\n\nONLY USED IF NO INTERSECTION BETWEEN SURFACES Variable to\ndetermine what is output if no intersection occurs. 0 = neither\n(default), 1 = first, 2 = second, 3 = both\n"},
  {"SetOperation", PyvtkLoopBooleanPolyDataFilter_SetOperation, METH_VARARGS,
   "V.SetOperation(int)\nC++: virtual void SetOperation(int _arg)\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"GetOperationMinValue", PyvtkLoopBooleanPolyDataFilter_GetOperationMinValue, METH_VARARGS,
   "V.GetOperationMinValue() -> int\nC++: virtual int GetOperationMinValue()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"GetOperationMaxValue", PyvtkLoopBooleanPolyDataFilter_GetOperationMaxValue, METH_VARARGS,
   "V.GetOperationMaxValue() -> int\nC++: virtual int GetOperationMaxValue()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"GetOperation", PyvtkLoopBooleanPolyDataFilter_GetOperation, METH_VARARGS,
   "V.GetOperation() -> int\nC++: virtual int GetOperation()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"SetOperationToUnion", PyvtkLoopBooleanPolyDataFilter_SetOperationToUnion, METH_VARARGS,
   "V.SetOperationToUnion()\nC++: void SetOperationToUnion()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"SetOperationToIntersection", PyvtkLoopBooleanPolyDataFilter_SetOperationToIntersection, METH_VARARGS,
   "V.SetOperationToIntersection()\nC++: void SetOperationToIntersection()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"SetOperationToDifference", PyvtkLoopBooleanPolyDataFilter_SetOperationToDifference, METH_VARARGS,
   "V.SetOperationToDifference()\nC++: void SetOperationToDifference()\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"GetStatus", PyvtkLoopBooleanPolyDataFilter_GetStatus, METH_VARARGS,
   "V.GetStatus() -> int\nC++: virtual int GetStatus()\n\nCheck the status of the filter after update. If the status is\nzero, there was an error in the operation. If status is one,\neverything went smoothly\n"},
  {"GetTolerance", PyvtkLoopBooleanPolyDataFilter_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSet the tolerance for geometric tests\n"},
  {"SetTolerance", PyvtkLoopBooleanPolyDataFilter_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSet the tolerance for geometric tests\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLoopBooleanPolyDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkLoopBooleanPolyDataFilter", // tp_name
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
  PyvtkLoopBooleanPolyDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLoopBooleanPolyDataFilter_StaticNew()
{
  return vtkLoopBooleanPolyDataFilter::New();
}

PyObject *PyvtkLoopBooleanPolyDataFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLoopBooleanPolyDataFilter_Type, PyvtkLoopBooleanPolyDataFilter_Methods,
    "vtkLoopBooleanPolyDataFilter",
 &PyvtkLoopBooleanPolyDataFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkLoopBooleanPolyDataFilter_Type;

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

  PyType_Ready(&PyvtkLoopBooleanPolyDataFilter_OperationType_Type);
  PyvtkLoopBooleanPolyDataFilter_OperationType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLoopBooleanPolyDataFilter_OperationType_Type);

  o = (PyObject *)&PyvtkLoopBooleanPolyDataFilter_OperationType_Type;
  if (PyDict_SetItemString(d, "OperationType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type);
  PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type);

  o = (PyObject *)&PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type;
  if (PyDict_SetItemString(d, "NoIntersectionOutputType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkLoopBooleanPolyDataFilter::OperationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VTK_UNION", vtkLoopBooleanPolyDataFilter::VTK_UNION },
        { "VTK_INTERSECTION", vtkLoopBooleanPolyDataFilter::VTK_INTERSECTION },
        { "VTK_DIFFERENCE", vtkLoopBooleanPolyDataFilter::VTK_DIFFERENCE },
      };

    o = PyvtkLoopBooleanPolyDataFilter_OperationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkLoopBooleanPolyDataFilter::NoIntersectionOutputType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_NEITHER", vtkLoopBooleanPolyDataFilter::VTK_NEITHER },
        { "VTK_FIRST", vtkLoopBooleanPolyDataFilter::VTK_FIRST },
        { "VTK_SECOND", vtkLoopBooleanPolyDataFilter::VTK_SECOND },
        { "VTK_BOTH", vtkLoopBooleanPolyDataFilter::VTK_BOTH },
      };

    o = PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLoopBooleanPolyDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLoopBooleanPolyDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLoopBooleanPolyDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

