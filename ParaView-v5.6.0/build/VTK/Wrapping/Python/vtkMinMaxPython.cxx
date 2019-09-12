// python wrapper for vtkMinMax
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
#include "vtkMinMax.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMinMax(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMinMax_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkMinMax_Doc =
  "vtkMinMax - Finds the min, max, or sum of all of its input data\nattributes.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter lets the user choose from a set of operations and then\n"
  "runs that operation on all of the attribute data of its input(s). For\n"
  "example if MIN is requested, it finds the minimum values in all of\n"
  "its input data arrays. If this filter has multiple input data sets\n"
  "attached to its first input port, it will run the operation on each\n"
  "input data set in turn, producing a global minimum value over all the\n"
  "inputs. In parallel runs this filter REQUIRES ghost arrays to skip\n"
  "redundant information. The output of this filter will always be a\n"
  "single vtkPolyData that contains exactly one point and one cell (a\n"
  "VTK_VERTEX).\n\n";

static PyTypeObject PyvtkMinMax_Operations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkMinMax.Operations", // tp_name
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

PyObject *PyvtkMinMax_Operations_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkMinMax_Operations_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMinMax_Operations_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkMinMax_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMinMax::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinMax_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMinMax::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinMax_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMinMax *tempr = vtkMinMax::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinMax_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMinMax *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMinMax::NewInstance());

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
PyvtkMinMax_SetOperation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

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
      op->vtkMinMax::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMinMax_SetOperation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkMinMax::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMinMax_SetOperation_Methods[] = {
  {nullptr, PyvtkMinMax_SetOperation_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkMinMax_SetOperation_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMinMax_SetOperation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMinMax_SetOperation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOperation");
  return nullptr;
}



static PyObject *
PyvtkMinMax_GetOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMinValue() :
      op->vtkMinMax::GetOperationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinMax_GetOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMaxValue() :
      op->vtkMinMax::GetOperationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinMax_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkMinMax::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinMax_GetMismatchOccurred(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMismatchOccurred");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMismatchOccurred() :
      op->vtkMinMax::GetMismatchOccurred());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinMax_GetFirstPasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstPasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFirstPasses() :
      op->vtkMinMax::GetFirstPasses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMinMax_FlagsForPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlagsForPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlagsForPoints();
    }
    else
    {
      op->vtkMinMax::FlagsForPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMinMax_FlagsForCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlagsForCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMinMax *op = static_cast<vtkMinMax *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlagsForCells();
    }
    else
    {
      op->vtkMinMax::FlagsForCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMinMax_Methods[] = {
  {"IsTypeOf", PyvtkMinMax_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMinMax_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMinMax_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMinMax\nC++: static vtkMinMax *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMinMax_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMinMax\nC++: vtkMinMax *NewInstance()\n\n"},
  {"SetOperation", PyvtkMinMax_SetOperation, METH_VARARGS,
   "V.SetOperation(int)\nC++: virtual void SetOperation(int _arg)\nV.SetOperation(string)\nC++: void SetOperation(const char *op)\n\n"},
  {"GetOperationMinValue", PyvtkMinMax_GetOperationMinValue, METH_VARARGS,
   "V.GetOperationMinValue() -> int\nC++: virtual int GetOperationMinValue()\n\n"},
  {"GetOperationMaxValue", PyvtkMinMax_GetOperationMaxValue, METH_VARARGS,
   "V.GetOperationMaxValue() -> int\nC++: virtual int GetOperationMaxValue()\n\n"},
  {"GetOperation", PyvtkMinMax_GetOperation, METH_VARARGS,
   "V.GetOperation() -> int\nC++: virtual int GetOperation()\n\n"},
  {"GetMismatchOccurred", PyvtkMinMax_GetMismatchOccurred, METH_VARARGS,
   "V.GetMismatchOccurred() -> int\nC++: virtual int GetMismatchOccurred()\n\nA diagnostic that should be zero. One indicates that some array\ndidn't match up exactly.\n"},
  {"GetFirstPasses", PyvtkMinMax_GetFirstPasses, METH_VARARGS,
   "V.GetFirstPasses() -> string\nC++: virtual char *GetFirstPasses()\n\nContains a flag for each component of each (Point or Cell) array\nthat indicates if any of the results were never initialized.\n"},
  {"FlagsForPoints", PyvtkMinMax_FlagsForPoints, METH_VARARGS,
   "V.FlagsForPoints()\nC++: void FlagsForPoints()\n\nContains a flag for each component of each (Point or Cell) array\nthat indicates if any of the results were never initialized.\n"},
  {"FlagsForCells", PyvtkMinMax_FlagsForCells, METH_VARARGS,
   "V.FlagsForCells()\nC++: void FlagsForCells()\n\nContains a flag for each component of each (Point or Cell) array\nthat indicates if any of the results were never initialized.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMinMax_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkMinMax", // tp_name
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
  PyvtkMinMax_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMinMax_StaticNew()
{
  return vtkMinMax::New();
}

PyObject *PyvtkMinMax_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMinMax_Type, PyvtkMinMax_Methods,
    "vtkMinMax",
 &PyvtkMinMax_StaticNew);

  PyTypeObject *pytype = &PyvtkMinMax_Type;

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

  PyType_Ready(&PyvtkMinMax_Operations_Type);
  PyvtkMinMax_Operations_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkMinMax_Operations_Type);

  o = (PyObject *)&PyvtkMinMax_Operations_Type;
  if (PyDict_SetItemString(d, "Operations", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMinMax::Operations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "MIN", vtkMinMax::MIN },
        { "MAX", vtkMinMax::MAX },
        { "SUM", vtkMinMax::SUM },
      };

    o = PyvtkMinMax_Operations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMinMax(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMinMax_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMinMax", o) != 0)
  {
    Py_DECREF(o);
  }

}

