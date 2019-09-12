// python wrapper for vtkHybridProbeFilter
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
#include "vtkHybridProbeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHybridProbeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHybridProbeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkHybridProbeFilter_Doc =
  "vtkHybridProbeFilter - vtkHybridProbeFilter is a combination of\nvtkExtractSelection at a specific location and vtkProbeFilter.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "Since the 'Selection Inspector' in ParaView was removed, we were\n"
  "missing ability to extract cells based on location. This filter fills\n"
  "that gap until we get the change to extend \"Find Data\" mechanism to\n"
  "support location based selections.\n\n"
  "This filter also \"probes\" just as a convenience since the user may\n"
  "not know exactly what he/she is looking for -- interpolate at point\n"
  "location (probe) or extract cell containing the point (extract\n"
  "selection).\n\n"
  "Internally this filter uses vtkPProbeFilter and vtkExtractSelection.\n\n";

static PyTypeObject PyvtkHybridProbeFilter_ModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkHybridProbeFilter.ModeType", // tp_name
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

PyObject *PyvtkHybridProbeFilter_ModeType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkHybridProbeFilter_ModeType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkHybridProbeFilter_ModeType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkHybridProbeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHybridProbeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHybridProbeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHybridProbeFilter *tempr = vtkHybridProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHybridProbeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHybridProbeFilter::NewInstance());

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
PyvtkHybridProbeFilter_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkHybridProbeFilter::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkHybridProbeFilter::GetModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkHybridProbeFilter::GetModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkHybridProbeFilter::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_SetModeToInterpolateAtLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToInterpolateAtLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToInterpolateAtLocation();
    }
    else
    {
      op->vtkHybridProbeFilter::SetModeToInterpolateAtLocation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_SetModeToExtractCellContainingLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToExtractCellContainingLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToExtractCellContainingLocation();
    }
    else
    {
      op->vtkHybridProbeFilter::SetModeToExtractCellContainingLocation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHybridProbeFilter_SetLocation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetLocation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHybridProbeFilter::SetLocation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHybridProbeFilter_SetLocation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLocation(temp0);
    }
    else
    {
      op->vtkHybridProbeFilter::SetLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHybridProbeFilter_SetLocation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHybridProbeFilter_SetLocation_s1(self, args);
    case 1:
      return PyvtkHybridProbeFilter_SetLocation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLocation");
  return nullptr;
}



static PyObject *
PyvtkHybridProbeFilter_GetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHybridProbeFilter *op = static_cast<vtkHybridProbeFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLocation() :
      op->vtkHybridProbeFilter::GetLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkHybridProbeFilter_Methods[] = {
  {"IsTypeOf", PyvtkHybridProbeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHybridProbeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHybridProbeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHybridProbeFilter\nC++: static vtkHybridProbeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHybridProbeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHybridProbeFilter\nC++: vtkHybridProbeFilter *NewInstance()\n\n"},
  {"SetMode", PyvtkHybridProbeFilter_SetMode, METH_VARARGS,
   "V.SetMode(int)\nC++: virtual void SetMode(int _arg)\n\n"},
  {"GetModeMinValue", PyvtkHybridProbeFilter_GetModeMinValue, METH_VARARGS,
   "V.GetModeMinValue() -> int\nC++: virtual int GetModeMinValue()\n\n"},
  {"GetModeMaxValue", PyvtkHybridProbeFilter_GetModeMaxValue, METH_VARARGS,
   "V.GetModeMaxValue() -> int\nC++: virtual int GetModeMaxValue()\n\n"},
  {"GetMode", PyvtkHybridProbeFilter_GetMode, METH_VARARGS,
   "V.GetMode() -> int\nC++: virtual int GetMode()\n\n"},
  {"SetModeToInterpolateAtLocation", PyvtkHybridProbeFilter_SetModeToInterpolateAtLocation, METH_VARARGS,
   "V.SetModeToInterpolateAtLocation()\nC++: void SetModeToInterpolateAtLocation()\n\n"},
  {"SetModeToExtractCellContainingLocation", PyvtkHybridProbeFilter_SetModeToExtractCellContainingLocation, METH_VARARGS,
   "V.SetModeToExtractCellContainingLocation()\nC++: void SetModeToExtractCellContainingLocation()\n\n"},
  {"SetLocation", PyvtkHybridProbeFilter_SetLocation, METH_VARARGS,
   "V.SetLocation(float, float, float)\nC++: void SetLocation(double, double, double)\nV.SetLocation((float, float, float))\nC++: void SetLocation(double a[3])\n\n"},
  {"GetLocation", PyvtkHybridProbeFilter_GetLocation, METH_VARARGS,
   "V.GetLocation() -> (float, float, float)\nC++: double *GetLocation()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHybridProbeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkHybridProbeFilter", // tp_name
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
  PyvtkHybridProbeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHybridProbeFilter_StaticNew()
{
  return vtkHybridProbeFilter::New();
}

PyObject *PyvtkHybridProbeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHybridProbeFilter_Type, PyvtkHybridProbeFilter_Methods,
    "vtkHybridProbeFilter",
 &PyvtkHybridProbeFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkHybridProbeFilter_Type;

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

  PyType_Ready(&PyvtkHybridProbeFilter_ModeType_Type);
  PyvtkHybridProbeFilter_ModeType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkHybridProbeFilter_ModeType_Type);

  o = (PyObject *)&PyvtkHybridProbeFilter_ModeType_Type;
  if (PyDict_SetItemString(d, "ModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkHybridProbeFilter::ModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "INTERPOLATE_AT_LOCATION", vtkHybridProbeFilter::INTERPOLATE_AT_LOCATION },
        { "EXTRACT_CELL_CONTAINING_LOCATION", vtkHybridProbeFilter::EXTRACT_CELL_CONTAINING_LOCATION },
      };

    o = PyvtkHybridProbeFilter_ModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHybridProbeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHybridProbeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHybridProbeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

