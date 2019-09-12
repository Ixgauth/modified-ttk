// python wrapper for vtkTemporalSnapToTimeStep
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
#include "vtkTemporalSnapToTimeStep.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalSnapToTimeStep(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTemporalSnapToTimeStep_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkTemporalSnapToTimeStep_Doc =
  "vtkTemporalSnapToTimeStep - modify the time range/steps of temporal\ndata\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkTemporalSnapToTimeStep  modify the time range or time steps of the\n"
  "data without changing the data itself. The data is not resampled by\n"
  "this filter, only the information accompanying the data is modified.\n\n"
  "@par Thanks: John Bidiscombe of CSCS - Swiss National Supercomputing\n"
  "Centre for creating and contributing this class. For related\n"
  "material, please refer to : John Biddiscombe, Berk Geveci, Ken\n"
  "Martin, Kenneth Moreland, David Thompson, \"Time Dependent Processing in a Parallel Pipeline\n"
  "Architecture\", IEEE Visualization 2007.\n\n";


static PyObject *
PyvtkTemporalSnapToTimeStep_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalSnapToTimeStep::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalSnapToTimeStep::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalSnapToTimeStep *tempr = vtkTemporalSnapToTimeStep::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalSnapToTimeStep *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalSnapToTimeStep::NewInstance());

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
PyvtkTemporalSnapToTimeStep_SetSnapMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapMode(temp0);
    }
    else
    {
      op->vtkTemporalSnapToTimeStep::SetSnapMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_GetSnapMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSnapMode() :
      op->vtkTemporalSnapToTimeStep::GetSnapMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSnapModeToNearest();
    }
    else
    {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNearest();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNextBelowOrEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNextBelowOrEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSnapModeToNextBelowOrEqual();
    }
    else
    {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNextBelowOrEqual();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalSnapToTimeStep_SetSnapModeToNextAboveOrEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapModeToNextAboveOrEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalSnapToTimeStep *op = static_cast<vtkTemporalSnapToTimeStep *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSnapModeToNextAboveOrEqual();
    }
    else
    {
      op->vtkTemporalSnapToTimeStep::SetSnapModeToNextAboveOrEqual();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalSnapToTimeStep_Methods[] = {
  {"IsTypeOf", PyvtkTemporalSnapToTimeStep_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalSnapToTimeStep_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalSnapToTimeStep_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTemporalSnapToTimeStep\nC++: static vtkTemporalSnapToTimeStep *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalSnapToTimeStep_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTemporalSnapToTimeStep\nC++: vtkTemporalSnapToTimeStep *NewInstance()\n\n"},
  {"SetSnapMode", PyvtkTemporalSnapToTimeStep_SetSnapMode, METH_VARARGS,
   "V.SetSnapMode(int)\nC++: virtual void SetSnapMode(int _arg)\n\n"},
  {"GetSnapMode", PyvtkTemporalSnapToTimeStep_GetSnapMode, METH_VARARGS,
   "V.GetSnapMode() -> int\nC++: virtual int GetSnapMode()\n\n"},
  {"SetSnapModeToNearest", PyvtkTemporalSnapToTimeStep_SetSnapModeToNearest, METH_VARARGS,
   "V.SetSnapModeToNearest()\nC++: void SetSnapModeToNearest()\n\n"},
  {"SetSnapModeToNextBelowOrEqual", PyvtkTemporalSnapToTimeStep_SetSnapModeToNextBelowOrEqual, METH_VARARGS,
   "V.SetSnapModeToNextBelowOrEqual()\nC++: void SetSnapModeToNextBelowOrEqual()\n\n"},
  {"SetSnapModeToNextAboveOrEqual", PyvtkTemporalSnapToTimeStep_SetSnapModeToNextAboveOrEqual, METH_VARARGS,
   "V.SetSnapModeToNextAboveOrEqual()\nC++: void SetSnapModeToNextAboveOrEqual()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTemporalSnapToTimeStep_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkTemporalSnapToTimeStep", // tp_name
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
  PyvtkTemporalSnapToTimeStep_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalSnapToTimeStep_StaticNew()
{
  return vtkTemporalSnapToTimeStep::New();
}

PyObject *PyvtkTemporalSnapToTimeStep_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTemporalSnapToTimeStep_Type, PyvtkTemporalSnapToTimeStep_Methods,
    "vtkTemporalSnapToTimeStep",
 &PyvtkTemporalSnapToTimeStep_StaticNew);

  PyTypeObject *pytype = &PyvtkTemporalSnapToTimeStep_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_SNAP_NEAREST", vtkTemporalSnapToTimeStep::VTK_SNAP_NEAREST },
        { "VTK_SNAP_NEXTBELOW_OR_EQUAL", vtkTemporalSnapToTimeStep::VTK_SNAP_NEXTBELOW_OR_EQUAL },
        { "VTK_SNAP_NEXTABOVE_OR_EQUAL", vtkTemporalSnapToTimeStep::VTK_SNAP_NEXTABOVE_OR_EQUAL },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalSnapToTimeStep(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalSnapToTimeStep_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalSnapToTimeStep", o) != 0)
  {
    Py_DECREF(o);
  }

}

