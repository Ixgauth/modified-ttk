// python wrapper for vtkImageFourierFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkImageFourierFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageFourierFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageFourierFilter_ClassNew(); }

#ifndef DECLARED_PyvtkImageDecomposeFilter_ClassNew
extern "C" { PyObject *PyvtkImageDecomposeFilter_ClassNew(); }
#define DECLARED_PyvtkImageDecomposeFilter_ClassNew
#endif

static const char *PyvtkImageFourierFilter_Doc =
  "vtkImageFourierFilter - Superclass that implements complex numbers.\n\n"
  "Superclass: vtkImageDecomposeFilter\n\n"
  "vtkImageFourierFilter is a class of filters that use complex numbers\n"
  "this superclass is a container for methods that manipulate these\n"
  "structure including fast Fourier transforms.  Complex numbers may\n"
  "become a class. This should really be a helper class.\n\n";


static PyObject *
PyvtkImageFourierFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageFourierFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFourierFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageFourierFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFourierFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageFourierFilter *tempr = vtkImageFourierFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFourierFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageFourierFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageFourierFilter::NewInstance());

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
PyvtkImageFourierFilter_ExecuteFft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteFft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  vtkImageComplex *temp0 = nullptr;
  vtkImageComplex *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageComplex") &&
      ap.GetVTKObject(temp1, "vtkImageComplex") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->ExecuteFft(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageFourierFilter::ExecuteFft(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageFourierFilter_ExecuteRfft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteRfft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierFilter *op = static_cast<vtkImageFourierFilter *>(vp);

  vtkImageComplex *temp0 = nullptr;
  vtkImageComplex *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageComplex") &&
      ap.GetVTKObject(temp1, "vtkImageComplex") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->ExecuteRfft(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageFourierFilter::ExecuteRfft(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageFourierFilter_Methods[] = {
  {"IsTypeOf", PyvtkImageFourierFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"IsA", PyvtkImageFourierFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"SafeDownCast", PyvtkImageFourierFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageFourierFilter\nC++: static vtkImageFourierFilter *SafeDownCast(vtkObjectBase *o)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"NewInstance", PyvtkImageFourierFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageFourierFilter\nC++: vtkImageFourierFilter *NewInstance()\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"ExecuteFft", PyvtkImageFourierFilter_ExecuteFft, METH_VARARGS,
   "V.ExecuteFft(vtkImageComplex, vtkImageComplex, int)\nC++: void ExecuteFft(vtkImageComplex *in, vtkImageComplex *out,\n    int N)\n\nThis function calculates the whole fft of an array. The contents\nof the input array are changed. (It is engineered for no\ndecimation)\n"},
  {"ExecuteRfft", PyvtkImageFourierFilter_ExecuteRfft, METH_VARARGS,
   "V.ExecuteRfft(vtkImageComplex, vtkImageComplex, int)\nC++: void ExecuteRfft(vtkImageComplex *in, vtkImageComplex *out,\n    int N)\n\nThis function calculates the whole fft of an array. The contents\nof the input array are changed. (It is engineered for no\ndecimation)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageFourierFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingFourierPython.vtkImageFourierFilter", // tp_name
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
  PyvtkImageFourierFilter_Doc, // tp_doc
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

PyObject *PyvtkImageFourierFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageFourierFilter_Type, PyvtkImageFourierFilter_Methods,
    "vtkImageFourierFilter",
 nullptr);

  PyTypeObject *pytype = &PyvtkImageFourierFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageDecomposeFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageFourierFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageFourierFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageFourierFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

