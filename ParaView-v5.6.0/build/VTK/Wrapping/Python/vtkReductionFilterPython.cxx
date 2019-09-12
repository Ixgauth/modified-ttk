// python wrapper for vtkReductionFilter
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
#include "vtkReductionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkReductionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkReductionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkReductionFilter_Doc =
  "vtkReductionFilter - A generic filter that can reduce any type of\ndataset using any reduction algorithm.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "A generic filter that can reduce any type of dataset using any\n"
  "reduction algorithm. Actual reduction is performed by running the\n"
  "PreGatherHelper and PostGatherHelper algorithms. The PreGatherHelper\n"
  "runs on each node in parallel. Next the intermediate results are\n"
  "gathered to the root node. Then the root node then runs the\n"
  "PostGatherHelper algorithm to produce a single result. The\n"
  "PostGatherHelper must be an algorithm that takes multiple input\n"
  "connections and produces a single reduced output.\n\n"
  "In addition to doing reduction the PassThrough variable lets you\n"
  "choose to pass through the results of any one node instead of\n"
  "aggregating all of them together.\n\n";

static PyTypeObject PyvtkReductionFilter_ReductionModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkReductionFilter.ReductionModeType", // tp_name
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

PyObject *PyvtkReductionFilter_ReductionModeType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkReductionFilter_ReductionModeType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkReductionFilter_ReductionModeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkReductionFilter_Tags_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkReductionFilter.Tags", // tp_name
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

PyObject *PyvtkReductionFilter_Tags_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkReductionFilter_Tags_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkReductionFilter_Tags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkReductionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkReductionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReductionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkReductionFilter *tempr = vtkReductionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkReductionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReductionFilter::NewInstance());

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
PyvtkReductionFilter_SetReductionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReductionMode(temp0);
    }
    else
    {
      op->vtkReductionFilter::SetReductionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetReductionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReductionModeMinValue() :
      op->vtkReductionFilter::GetReductionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetReductionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReductionModeMaxValue() :
      op->vtkReductionFilter::GetReductionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetReductionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReductionMode() :
      op->vtkReductionFilter::GetReductionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetReductionProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReductionProcessId(temp0);
    }
    else
    {
      op->vtkReductionFilter::SetReductionProcessId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetReductionProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReductionProcessId() :
      op->vtkReductionFilter::GetReductionProcessId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetPreGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetPreGatherHelper(temp0);
    }
    else
    {
      op->vtkReductionFilter::SetPreGatherHelper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetPreGatherHelperName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreGatherHelperName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreGatherHelperName(temp0);
    }
    else
    {
      op->vtkReductionFilter::SetPreGatherHelperName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetPreGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetPreGatherHelper() :
      op->vtkReductionFilter::GetPreGatherHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetPostGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetPostGatherHelper(temp0);
    }
    else
    {
      op->vtkReductionFilter::SetPostGatherHelper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetPostGatherHelperName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostGatherHelperName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPostGatherHelperName(temp0);
    }
    else
    {
      op->vtkReductionFilter::SetPostGatherHelperName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetPostGatherHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostGatherHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetPostGatherHelper() :
      op->vtkReductionFilter::GetPostGatherHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

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
      op->vtkReductionFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThrough(temp0);
    }
    else
    {
      op->vtkReductionFilter::SetPassThrough(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThrough() :
      op->vtkReductionFilter::GetPassThrough());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_SetGenerateProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateProcessIds(temp0);
    }
    else
    {
      op->vtkReductionFilter::SetGenerateProcessIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReductionFilter_GetGenerateProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReductionFilter *op = static_cast<vtkReductionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateProcessIds() :
      op->vtkReductionFilter::GetGenerateProcessIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkReductionFilter_Methods[] = {
  {"IsTypeOf", PyvtkReductionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkReductionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkReductionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkReductionFilter\nC++: static vtkReductionFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkReductionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkReductionFilter\nC++: vtkReductionFilter *NewInstance()\n\n"},
  {"SetReductionMode", PyvtkReductionFilter_SetReductionMode, METH_VARARGS,
   "V.SetReductionMode(int)\nC++: virtual void SetReductionMode(int _arg)\n\nGet/Set the Reduction Mode. REDUCE_ALL_TO_ONE is the default\nbehavior. It reduces all data on a single node, while other nodes\nkeeps their data. MOVE_ALL_TO_ONE Reduce all data on a single\nnode while other nodes delete their data. ALL NODES Reduce all\ndata on all nodes.\n"},
  {"GetReductionModeMinValue", PyvtkReductionFilter_GetReductionModeMinValue, METH_VARARGS,
   "V.GetReductionModeMinValue() -> int\nC++: virtual int GetReductionModeMinValue()\n\nGet/Set the Reduction Mode. REDUCE_ALL_TO_ONE is the default\nbehavior. It reduces all data on a single node, while other nodes\nkeeps their data. MOVE_ALL_TO_ONE Reduce all data on a single\nnode while other nodes delete their data. ALL NODES Reduce all\ndata on all nodes.\n"},
  {"GetReductionModeMaxValue", PyvtkReductionFilter_GetReductionModeMaxValue, METH_VARARGS,
   "V.GetReductionModeMaxValue() -> int\nC++: virtual int GetReductionModeMaxValue()\n\nGet/Set the Reduction Mode. REDUCE_ALL_TO_ONE is the default\nbehavior. It reduces all data on a single node, while other nodes\nkeeps their data. MOVE_ALL_TO_ONE Reduce all data on a single\nnode while other nodes delete their data. ALL NODES Reduce all\ndata on all nodes.\n"},
  {"GetReductionMode", PyvtkReductionFilter_GetReductionMode, METH_VARARGS,
   "V.GetReductionMode() -> int\nC++: virtual int GetReductionMode()\n\nGet/Set the Reduction Mode. REDUCE_ALL_TO_ONE is the default\nbehavior. It reduces all data on a single node, while other nodes\nkeeps their data. MOVE_ALL_TO_ONE Reduce all data on a single\nnode while other nodes delete their data. ALL NODES Reduce all\ndata on all nodes.\n"},
  {"SetReductionProcessId", PyvtkReductionFilter_SetReductionProcessId, METH_VARARGS,
   "V.SetReductionProcessId(int)\nC++: virtual void SetReductionProcessId(int _arg)\n\nGet/Set the node to reduce to, default is 0. Not used with\nREDUCE_ALL_TO_ALL Reduction mode\n"},
  {"GetReductionProcessId", PyvtkReductionFilter_GetReductionProcessId, METH_VARARGS,
   "V.GetReductionProcessId() -> int\nC++: virtual int GetReductionProcessId()\n\nGet/Set the node to reduce to, default is 0. Not used with\nREDUCE_ALL_TO_ALL Reduction mode\n"},
  {"SetPreGatherHelper", PyvtkReductionFilter_SetPreGatherHelper, METH_VARARGS,
   "V.SetPreGatherHelper(vtkAlgorithm)\nC++: void SetPreGatherHelper(vtkAlgorithm *)\n\nGet/Set the pre-reduction helper. Pre-Reduction helper is an\nalgorithm that runs on each node's data before it is sent to the\nroot.\n"},
  {"SetPreGatherHelperName", PyvtkReductionFilter_SetPreGatherHelperName, METH_VARARGS,
   "V.SetPreGatherHelperName(string)\nC++: void SetPreGatherHelperName(const char *)\n\nGet/Set the pre-reduction helper. Pre-Reduction helper is an\nalgorithm that runs on each node's data before it is sent to the\nroot.\n"},
  {"GetPreGatherHelper", PyvtkReductionFilter_GetPreGatherHelper, METH_VARARGS,
   "V.GetPreGatherHelper() -> vtkAlgorithm\nC++: virtual vtkAlgorithm *GetPreGatherHelper()\n\nGet/Set the pre-reduction helper. Pre-Reduction helper is an\nalgorithm that runs on each node's data before it is sent to the\nroot.\n"},
  {"SetPostGatherHelper", PyvtkReductionFilter_SetPostGatherHelper, METH_VARARGS,
   "V.SetPostGatherHelper(vtkAlgorithm)\nC++: void SetPostGatherHelper(vtkAlgorithm *)\n\nGet/Set the reduction helper. Reduction helper is an algorithm\nwith multiple input connections, that produces a single output as\nthe reduced output. This is run on the root node to produce a\nresult from the gathered results of each node.\n"},
  {"SetPostGatherHelperName", PyvtkReductionFilter_SetPostGatherHelperName, METH_VARARGS,
   "V.SetPostGatherHelperName(string)\nC++: void SetPostGatherHelperName(const char *)\n\nGet/Set the reduction helper. Reduction helper is an algorithm\nwith multiple input connections, that produces a single output as\nthe reduced output. This is run on the root node to produce a\nresult from the gathered results of each node.\n"},
  {"GetPostGatherHelper", PyvtkReductionFilter_GetPostGatherHelper, METH_VARARGS,
   "V.GetPostGatherHelper() -> vtkAlgorithm\nC++: virtual vtkAlgorithm *GetPostGatherHelper()\n\nGet/Set the reduction helper. Reduction helper is an algorithm\nwith multiple input connections, that produces a single output as\nthe reduced output. This is run on the root node to produce a\nresult from the gathered results of each node.\n"},
  {"SetController", PyvtkReductionFilter_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the MPI controller used for gathering.\n"},
  {"SetPassThrough", PyvtkReductionFilter_SetPassThrough, METH_VARARGS,
   "V.SetPassThrough(int)\nC++: virtual void SetPassThrough(int _arg)\n\nGet/Set the PassThrough flag which (when set to a nonnegative\nnumber N) tells the filter to produce results that come from node\nN only. The data from that node still runs through the\nPreReduction and PostGatherHelper algorithms.\n"},
  {"GetPassThrough", PyvtkReductionFilter_GetPassThrough, METH_VARARGS,
   "V.GetPassThrough() -> int\nC++: virtual int GetPassThrough()\n\nGet/Set the PassThrough flag which (when set to a nonnegative\nnumber N) tells the filter to produce results that come from node\nN only. The data from that node still runs through the\nPreReduction and PostGatherHelper algorithms.\n"},
  {"SetGenerateProcessIds", PyvtkReductionFilter_SetGenerateProcessIds, METH_VARARGS,
   "V.SetGenerateProcessIds(int)\nC++: virtual void SetGenerateProcessIds(int _arg)\n\nWhen set, a new array vtkOriginalProcessIds will be added to the\noutput of the the pre-gather helper (or input, if no pre-gather\nhelper is set). The values in the array indicate the process id.\nNote that the array is added only if the number of processes is >\n1.\n"},
  {"GetGenerateProcessIds", PyvtkReductionFilter_GetGenerateProcessIds, METH_VARARGS,
   "V.GetGenerateProcessIds() -> int\nC++: virtual int GetGenerateProcessIds()\n\nWhen set, a new array vtkOriginalProcessIds will be added to the\noutput of the the pre-gather helper (or input, if no pre-gather\nhelper is set). The values in the array indicate the process id.\nNote that the array is added only if the number of processes is >\n1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkReductionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkReductionFilter", // tp_name
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
  PyvtkReductionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkReductionFilter_StaticNew()
{
  return vtkReductionFilter::New();
}

PyObject *PyvtkReductionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkReductionFilter_Type, PyvtkReductionFilter_Methods,
    "vtkReductionFilter",
 &PyvtkReductionFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkReductionFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkReductionFilter_ReductionModeType_Type);
  PyvtkReductionFilter_ReductionModeType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkReductionFilter_ReductionModeType_Type);

  o = (PyObject *)&PyvtkReductionFilter_ReductionModeType_Type;
  if (PyDict_SetItemString(d, "ReductionModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkReductionFilter_Tags_Type);
  PyvtkReductionFilter_Tags_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkReductionFilter_Tags_Type);

  o = (PyObject *)&PyvtkReductionFilter_Tags_Type;
  if (PyDict_SetItemString(d, "Tags", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkReductionFilter::ReductionModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "REDUCE_ALL_TO_ONE", vtkReductionFilter::REDUCE_ALL_TO_ONE },
        { "MOVE_ALL_TO_ONE", vtkReductionFilter::MOVE_ALL_TO_ONE },
        { "REDUCE_ALL_TO_ALL", vtkReductionFilter::REDUCE_ALL_TO_ALL },
      };

    o = PyvtkReductionFilter_ReductionModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyvtkReductionFilter_Tags_FromEnum(vtkReductionFilter::TRANSMIT_DATA_OBJECT);
  if (o)
  {
    PyDict_SetItemString(d, "TRANSMIT_DATA_OBJECT", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkReductionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkReductionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkReductionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

