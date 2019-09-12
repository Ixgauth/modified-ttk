// python wrapper for vtkTemporalArrayOperatorFilter
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
#include "vtkTemporalArrayOperatorFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalArrayOperatorFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTemporalArrayOperatorFilter_ClassNew(); }

#ifndef DECLARED_PyvtkMultiTimeStepAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiTimeStepAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiTimeStepAlgorithm_ClassNew
#endif

static const char *PyvtkTemporalArrayOperatorFilter_Doc =
  "vtkTemporalArrayOperatorFilter - perform simple mathematical\noperation on a data array at different time\n\n"
  "Superclass: vtkMultiTimeStepAlgorithm\n\n"
  "This filter computes a simple operation between two time steps of one\n"
  "data array.\n\n"
  "@sa\n"
  "vtkArrayCalulator\n\n";

static PyTypeObject PyvtkTemporalArrayOperatorFilter_OperatorType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkTemporalArrayOperatorFilter.OperatorType", // tp_name
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

PyObject *PyvtkTemporalArrayOperatorFilter_OperatorType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkTemporalArrayOperatorFilter_OperatorType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkTemporalArrayOperatorFilter_OperatorType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalArrayOperatorFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalArrayOperatorFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalArrayOperatorFilter *tempr = vtkTemporalArrayOperatorFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalArrayOperatorFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalArrayOperatorFilter::NewInstance());

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
PyvtkTemporalArrayOperatorFilter_SetOperator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperator(temp0);
    }
    else
    {
      op->vtkTemporalArrayOperatorFilter::SetOperator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_GetOperator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperator() :
      op->vtkTemporalArrayOperatorFilter::GetOperator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_SetFirstTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFirstTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFirstTimeStepIndex(temp0);
    }
    else
    {
      op->vtkTemporalArrayOperatorFilter::SetFirstTimeStepIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_GetFirstTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFirstTimeStepIndex() :
      op->vtkTemporalArrayOperatorFilter::GetFirstTimeStepIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_SetSecondTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondTimeStepIndex(temp0);
    }
    else
    {
      op->vtkTemporalArrayOperatorFilter::SetSecondTimeStepIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_GetSecondTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSecondTimeStepIndex() :
      op->vtkTemporalArrayOperatorFilter::GetSecondTimeStepIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_SetOutputArrayNameSuffix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayNameSuffix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputArrayNameSuffix(temp0);
    }
    else
    {
      op->vtkTemporalArrayOperatorFilter::SetOutputArrayNameSuffix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_GetOutputArrayNameSuffix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayNameSuffix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputArrayNameSuffix() :
      op->vtkTemporalArrayOperatorFilter::GetOutputArrayNameSuffix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalArrayOperatorFilter_Methods[] = {
  {"IsTypeOf", PyvtkTemporalArrayOperatorFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalArrayOperatorFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalArrayOperatorFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTemporalArrayOperatorFilter\nC++: static vtkTemporalArrayOperatorFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalArrayOperatorFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTemporalArrayOperatorFilter\nC++: vtkTemporalArrayOperatorFilter *NewInstance()\n\n"},
  {"SetOperator", PyvtkTemporalArrayOperatorFilter_SetOperator, METH_VARARGS,
   "V.SetOperator(int)\nC++: virtual void SetOperator(int _arg)\n\nSet/Get the operator to apply. Default is ADD (0).\n"},
  {"GetOperator", PyvtkTemporalArrayOperatorFilter_GetOperator, METH_VARARGS,
   "V.GetOperator() -> int\nC++: virtual int GetOperator()\n\nSet/Get the operator to apply. Default is ADD (0).\n"},
  {"SetFirstTimeStepIndex", PyvtkTemporalArrayOperatorFilter_SetFirstTimeStepIndex, METH_VARARGS,
   "V.SetFirstTimeStepIndex(int)\nC++: virtual void SetFirstTimeStepIndex(int _arg)\n\nSet/Get the first time step.\n"},
  {"GetFirstTimeStepIndex", PyvtkTemporalArrayOperatorFilter_GetFirstTimeStepIndex, METH_VARARGS,
   "V.GetFirstTimeStepIndex() -> int\nC++: virtual int GetFirstTimeStepIndex()\n\nSet/Get the first time step.\n"},
  {"SetSecondTimeStepIndex", PyvtkTemporalArrayOperatorFilter_SetSecondTimeStepIndex, METH_VARARGS,
   "V.SetSecondTimeStepIndex(int)\nC++: virtual void SetSecondTimeStepIndex(int _arg)\n\nSet/Get the second time step.\n"},
  {"GetSecondTimeStepIndex", PyvtkTemporalArrayOperatorFilter_GetSecondTimeStepIndex, METH_VARARGS,
   "V.GetSecondTimeStepIndex() -> int\nC++: virtual int GetSecondTimeStepIndex()\n\nSet/Get the second time step.\n"},
  {"SetOutputArrayNameSuffix", PyvtkTemporalArrayOperatorFilter_SetOutputArrayNameSuffix, METH_VARARGS,
   "V.SetOutputArrayNameSuffix(string)\nC++: virtual void SetOutputArrayNameSuffix(const char *_arg)\n\nSet/Get the suffix to be append to the output array name.\nIf not specified, output will be suffixed with '_' and the\noperation type (eg. myarrayname_add).\n"},
  {"GetOutputArrayNameSuffix", PyvtkTemporalArrayOperatorFilter_GetOutputArrayNameSuffix, METH_VARARGS,
   "V.GetOutputArrayNameSuffix() -> string\nC++: virtual char *GetOutputArrayNameSuffix()\n\nSet/Get the suffix to be append to the output array name.\nIf not specified, output will be suffixed with '_' and the\noperation type (eg. myarrayname_add).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTemporalArrayOperatorFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkTemporalArrayOperatorFilter", // tp_name
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
  PyvtkTemporalArrayOperatorFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalArrayOperatorFilter_StaticNew()
{
  return vtkTemporalArrayOperatorFilter::New();
}

PyObject *PyvtkTemporalArrayOperatorFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTemporalArrayOperatorFilter_Type, PyvtkTemporalArrayOperatorFilter_Methods,
    "vtkTemporalArrayOperatorFilter",
 &PyvtkTemporalArrayOperatorFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkTemporalArrayOperatorFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiTimeStepAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkTemporalArrayOperatorFilter_OperatorType_Type);
  PyvtkTemporalArrayOperatorFilter_OperatorType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkTemporalArrayOperatorFilter_OperatorType_Type);

  o = (PyObject *)&PyvtkTemporalArrayOperatorFilter_OperatorType_Type;
  if (PyDict_SetItemString(d, "OperatorType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkTemporalArrayOperatorFilter::OperatorType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "ADD", vtkTemporalArrayOperatorFilter::ADD },
        { "SUB", vtkTemporalArrayOperatorFilter::SUB },
        { "MUL", vtkTemporalArrayOperatorFilter::MUL },
        { "DIV", vtkTemporalArrayOperatorFilter::DIV },
      };

    o = PyvtkTemporalArrayOperatorFilter_OperatorType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalArrayOperatorFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalArrayOperatorFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalArrayOperatorFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

