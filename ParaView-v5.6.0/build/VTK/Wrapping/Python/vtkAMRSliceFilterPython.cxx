// python wrapper for vtkAMRSliceFilter
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
#include "vtkInformationVector.h"
#include "vtkAMRSliceFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRSliceFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRSliceFilter_ClassNew(); }

#ifndef DECLARED_PyvtkOverlappingAMRAlgorithm_ClassNew
extern "C" { PyObject *PyvtkOverlappingAMRAlgorithm_ClassNew(); }
#define DECLARED_PyvtkOverlappingAMRAlgorithm_ClassNew
#endif

static const char *PyvtkAMRSliceFilter_Doc =
  "vtkAMRSliceFilter -  A concrete instance of\nvtkOverlappingAMRAlgorithm which implements\n functionality for extracting slices from AMR data.\n\n"
  "Superclass: vtkOverlappingAMRAlgorithm\n\n"
  "Unlike the conventional\n"
  " slice filter, the output of this filter is a 2-D AMR dataset itself.\n\n";

static PyTypeObject PyvtkAMRSliceFilter_NormalTag_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersAMRPython.vtkAMRSliceFilter.NormalTag", // tp_name
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

PyObject *PyvtkAMRSliceFilter_NormalTag_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAMRSliceFilter_NormalTag_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAMRSliceFilter_NormalTag_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkAMRSliceFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRSliceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRSliceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRSliceFilter *tempr = vtkAMRSliceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRSliceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRSliceFilter::NewInstance());

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
PyvtkAMRSliceFilter_SetOffsetFromOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffsetFromOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffsetFromOrigin(temp0);
    }
    else
    {
      op->vtkAMRSliceFilter::SetOffsetFromOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetOffsetFromOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetFromOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffsetFromOrigin() :
      op->vtkAMRSliceFilter::GetOffsetFromOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetMaxResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxResolution(temp0);
    }
    else
    {
      op->vtkAMRSliceFilter::SetMaxResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetMaxResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaxResolution() :
      op->vtkAMRSliceFilter::GetMaxResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkAMRSliceFilter::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkAMRSliceFilter::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

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
      op->vtkAMRSliceFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRSliceFilter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkAMRSliceFilter::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkAMRSliceFilter::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRSliceFilter_Methods[] = {
  {"IsTypeOf", PyvtkAMRSliceFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRSliceFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRSliceFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRSliceFilter\nC++: static vtkAMRSliceFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRSliceFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRSliceFilter\nC++: vtkAMRSliceFilter *NewInstance()\n\n"},
  {"SetOffsetFromOrigin", PyvtkAMRSliceFilter_SetOffsetFromOrigin, METH_VARARGS,
   "V.SetOffsetFromOrigin(float)\nC++: virtual void SetOffsetFromOrigin(double _arg)\n\nSet/Get the offset-from-origin of the slicing plane.\n"},
  {"GetOffsetFromOrigin", PyvtkAMRSliceFilter_GetOffsetFromOrigin, METH_VARARGS,
   "V.GetOffsetFromOrigin() -> float\nC++: virtual double GetOffsetFromOrigin()\n\nSet/Get the offset-from-origin of the slicing plane.\n"},
  {"SetMaxResolution", PyvtkAMRSliceFilter_SetMaxResolution, METH_VARARGS,
   "V.SetMaxResolution(int)\nC++: virtual void SetMaxResolution(unsigned int _arg)\n\nSet/Get the maximum resolution used in this instance.\n"},
  {"GetMaxResolution", PyvtkAMRSliceFilter_GetMaxResolution, METH_VARARGS,
   "V.GetMaxResolution() -> int\nC++: virtual unsigned int GetMaxResolution()\n\nSet/Get the maximum resolution used in this instance.\n"},
  {"SetNormal", PyvtkAMRSliceFilter_SetNormal, METH_VARARGS,
   "V.SetNormal(int)\nC++: virtual void SetNormal(int _arg)\n\nSet/Get the Axis normal. The accpetable values are defined in the\nNormalTag enum.\n"},
  {"GetNormal", PyvtkAMRSliceFilter_GetNormal, METH_VARARGS,
   "V.GetNormal() -> int\nC++: virtual int GetNormal()\n\nSet/Get the Axis normal. The accpetable values are defined in the\nNormalTag enum.\n"},
  {"SetController", PyvtkAMRSliceFilter_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *_arg)\n\nSet/Get a multiprocess controller for paralle processing. By\ndefault this parameter is set to nullptr by the constructor.\n"},
  {"GetController", PyvtkAMRSliceFilter_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet/Get a multiprocess controller for paralle processing. By\ndefault this parameter is set to nullptr by the constructor.\n"},
  {"FillInputPortInformation", PyvtkAMRSliceFilter_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nSee algorithm for more info.\n"},
  {"FillOutputPortInformation", PyvtkAMRSliceFilter_FillOutputPortInformation, METH_VARARGS,
   "V.FillOutputPortInformation(int, vtkInformation) -> int\nC++: int FillOutputPortInformation(int port, vtkInformation *info)\n     override;\n\nSee algorithm for more info.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRSliceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersAMRPython.vtkAMRSliceFilter", // tp_name
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
  PyvtkAMRSliceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRSliceFilter_StaticNew()
{
  return vtkAMRSliceFilter::New();
}

PyObject *PyvtkAMRSliceFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRSliceFilter_Type, PyvtkAMRSliceFilter_Methods,
    "vtkAMRSliceFilter",
 &PyvtkAMRSliceFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRSliceFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOverlappingAMRAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAMRSliceFilter_NormalTag_Type);
  PyvtkAMRSliceFilter_NormalTag_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAMRSliceFilter_NormalTag_Type);

  o = (PyObject *)&PyvtkAMRSliceFilter_NormalTag_Type;
  if (PyDict_SetItemString(d, "NormalTag", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkAMRSliceFilter::NormalTag cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "X_NORMAL", vtkAMRSliceFilter::X_NORMAL },
        { "Y_NORMAL", vtkAMRSliceFilter::Y_NORMAL },
        { "Z_NORMAL", vtkAMRSliceFilter::Z_NORMAL },
      };

    o = PyvtkAMRSliceFilter_NormalTag_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRSliceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRSliceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRSliceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

