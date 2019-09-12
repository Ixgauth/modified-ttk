// python wrapper for vtkStreamingStatistics
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
#include "vtkStreamingStatistics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStreamingStatistics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStreamingStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkStreamingStatistics_Doc =
  "vtkStreamingStatistics - A class for using the statistics filters in\na streaming mode.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "A class for using the statistics filters in a streaming mode or\n"
  "perhaps an \"online, incremental, push\" mode.\n\n"
  "@par Thanks: Thanks to the Universe for unfolding in a way that\n"
  "allowed this class to be implemented, also Godzilla for not crushing\n"
  "my computer.\n\n";

static PyTypeObject PyvtkStreamingStatistics_InputPorts_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkStreamingStatistics.InputPorts", // tp_name
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

PyObject *PyvtkStreamingStatistics_InputPorts_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkStreamingStatistics_InputPorts_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStreamingStatistics_InputPorts_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkStreamingStatistics_OutputIndices_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkStreamingStatistics.OutputIndices", // tp_name
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

PyObject *PyvtkStreamingStatistics_OutputIndices_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkStreamingStatistics_OutputIndices_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStreamingStatistics_OutputIndices_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkStreamingStatistics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStreamingStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingStatistics *op = static_cast<vtkStreamingStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamingStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStreamingStatistics *tempr = vtkStreamingStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingStatistics *op = static_cast<vtkStreamingStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamingStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamingStatistics::NewInstance());

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
PyvtkStreamingStatistics_SetStatisticsAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatisticsAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingStatistics *op = static_cast<vtkStreamingStatistics *>(vp);

  vtkStatisticsAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStatisticsAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetStatisticsAlgorithm(temp0);
    }
    else
    {
      op->vtkStreamingStatistics::SetStatisticsAlgorithm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStreamingStatistics_Methods[] = {
  {"IsTypeOf", PyvtkStreamingStatistics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStreamingStatistics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStreamingStatistics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStreamingStatistics\nC++: static vtkStreamingStatistics *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStreamingStatistics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStreamingStatistics\nC++: vtkStreamingStatistics *NewInstance()\n\n"},
  {"SetStatisticsAlgorithm", PyvtkStreamingStatistics_SetStatisticsAlgorithm, METH_VARARGS,
   "V.SetStatisticsAlgorithm(vtkStatisticsAlgorithm)\nC++: virtual void SetStatisticsAlgorithm(vtkStatisticsAlgorithm *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStreamingStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkStreamingStatistics", // tp_name
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
  PyvtkStreamingStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStreamingStatistics_StaticNew()
{
  return vtkStreamingStatistics::New();
}

PyObject *PyvtkStreamingStatistics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStreamingStatistics_Type, PyvtkStreamingStatistics_Methods,
    "vtkStreamingStatistics",
 &PyvtkStreamingStatistics_StaticNew);

  PyTypeObject *pytype = &PyvtkStreamingStatistics_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkStreamingStatistics_InputPorts_Type);
  PyvtkStreamingStatistics_InputPorts_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkStreamingStatistics_InputPorts_Type);

  o = (PyObject *)&PyvtkStreamingStatistics_InputPorts_Type;
  if (PyDict_SetItemString(d, "InputPorts", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkStreamingStatistics_OutputIndices_Type);
  PyvtkStreamingStatistics_OutputIndices_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkStreamingStatistics_OutputIndices_Type);

  o = (PyObject *)&PyvtkStreamingStatistics_OutputIndices_Type;
  if (PyDict_SetItemString(d, "OutputIndices", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkStreamingStatistics::InputPorts cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "INPUT_DATA", vtkStreamingStatistics::INPUT_DATA },
        { "LEARN_PARAMETERS", vtkStreamingStatistics::LEARN_PARAMETERS },
        { "INPUT_MODEL", vtkStreamingStatistics::INPUT_MODEL },
      };

    o = PyvtkStreamingStatistics_InputPorts_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkStreamingStatistics::OutputIndices cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "OUTPUT_DATA", vtkStreamingStatistics::OUTPUT_DATA },
        { "OUTPUT_MODEL", vtkStreamingStatistics::OUTPUT_MODEL },
        { "OUTPUT_TEST", vtkStreamingStatistics::OUTPUT_TEST },
      };

    o = PyvtkStreamingStatistics_OutputIndices_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStreamingStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStreamingStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStreamingStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

