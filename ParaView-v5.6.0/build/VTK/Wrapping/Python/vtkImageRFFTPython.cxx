// python wrapper for vtkImageRFFT
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkImageRFFT.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageRFFT(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageRFFT_ClassNew(); }

#ifndef DECLARED_PyvtkImageFourierFilter_ClassNew
extern "C" { PyObject *PyvtkImageFourierFilter_ClassNew(); }
#define DECLARED_PyvtkImageFourierFilter_ClassNew
#endif

static const char *PyvtkImageRFFT_Doc =
  "vtkImageRFFT - Reverse Fast Fourier Transform.\n\n"
  "Superclass: vtkImageFourierFilter\n\n"
  "vtkImageRFFT implements the reverse fast Fourier transform.  The\n"
  "input can have real or complex data in any components and data types,\n"
  "but the output is always complex doubles with real values in\n"
  "component0, and imaginary values in component1.  The filter is\n"
  "fastest for images that have power of two sizes.  The filter uses\n"
  "butterfly filters for each prime factor of the dimension.  This makes\n"
  "images with prime number dimensions (i.e. 17x17) much slower to\n"
  "compute.  Multi dimensional (i.e volumes) FFT's are decomposed so\n"
  "that each axis executes in series. In most cases the RFFT will\n"
  "produce an image whose imaginary values are all zero's. In this case\n"
  "vtkImageExtractComponents can be used to remove this imaginary\n"
  "components leaving only the real image.\n\n"
  "@sa\n"
  "vtkImageExtractComponenents\n\n";


static PyObject *
PyvtkImageRFFT_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageRFFT::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageRFFT_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRFFT *op = static_cast<vtkImageRFFT *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageRFFT::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageRFFT_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageRFFT *tempr = vtkImageRFFT::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageRFFT_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRFFT *op = static_cast<vtkImageRFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageRFFT *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageRFFT::NewInstance());

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

static PyMethodDef PyvtkImageRFFT_Methods[] = {
  {"IsTypeOf", PyvtkImageRFFT_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"IsA", PyvtkImageRFFT_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"SafeDownCast", PyvtkImageRFFT_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageRFFT\nC++: static vtkImageRFFT *SafeDownCast(vtkObjectBase *o)\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {"NewInstance", PyvtkImageRFFT_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageRFFT\nC++: vtkImageRFFT *NewInstance()\n\nConstruct an instance of vtkImageDecomposeFilter filter with\ndefault dimensionality 3.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageRFFT_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingFourierPython.vtkImageRFFT", // tp_name
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
  PyvtkImageRFFT_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageRFFT_StaticNew()
{
  return vtkImageRFFT::New();
}

PyObject *PyvtkImageRFFT_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageRFFT_Type, PyvtkImageRFFT_Methods,
    "vtkImageRFFT",
 &PyvtkImageRFFT_StaticNew);

  PyTypeObject *pytype = &PyvtkImageRFFT_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageFourierFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageRFFT(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageRFFT_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageRFFT", o) != 0)
  {
    Py_DECREF(o);
  }

}

