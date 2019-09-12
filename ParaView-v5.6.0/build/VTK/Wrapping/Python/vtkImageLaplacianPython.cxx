// python wrapper for vtkImageLaplacian
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
#include "vtkImageLaplacian.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageLaplacian(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageLaplacian_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageLaplacian_Doc =
  "vtkImageLaplacian - Computes divergence of gradient.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageLaplacian computes the Laplacian (like a second derivative)\n"
  "of a scalar image.  The operation is the same as taking the\n"
  "divergence after a gradient.  Boundaries are handled, so the input is\n"
  "the same as the output. Dimensionality determines how the input\n"
  "regions are interpreted. (images, or volumes). The Dimensionality\n"
  "defaults to two.\n\n";


static PyObject *
PyvtkImageLaplacian_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageLaplacian::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLaplacian_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageLaplacian::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLaplacian_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageLaplacian *tempr = vtkImageLaplacian::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLaplacian_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageLaplacian *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageLaplacian::NewInstance());

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
PyvtkImageLaplacian_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensionality(temp0);
    }
    else
    {
      op->vtkImageLaplacian::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLaplacian_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMinValue() :
      op->vtkImageLaplacian::GetDimensionalityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLaplacian_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMaxValue() :
      op->vtkImageLaplacian::GetDimensionalityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLaplacian_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLaplacian *op = static_cast<vtkImageLaplacian *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageLaplacian::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageLaplacian_Methods[] = {
  {"IsTypeOf", PyvtkImageLaplacian_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageLaplacian_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageLaplacian_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageLaplacian\nC++: static vtkImageLaplacian *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageLaplacian_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageLaplacian\nC++: vtkImageLaplacian *NewInstance()\n\n"},
  {"SetDimensionality", PyvtkImageLaplacian_SetDimensionality, METH_VARARGS,
   "V.SetDimensionality(int)\nC++: virtual void SetDimensionality(int _arg)\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {"GetDimensionalityMinValue", PyvtkImageLaplacian_GetDimensionalityMinValue, METH_VARARGS,
   "V.GetDimensionalityMinValue() -> int\nC++: virtual int GetDimensionalityMinValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {"GetDimensionalityMaxValue", PyvtkImageLaplacian_GetDimensionalityMaxValue, METH_VARARGS,
   "V.GetDimensionalityMaxValue() -> int\nC++: virtual int GetDimensionalityMaxValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {"GetDimensionality", PyvtkImageLaplacian_GetDimensionality, METH_VARARGS,
   "V.GetDimensionality() -> int\nC++: virtual int GetDimensionality()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageLaplacian_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingGeneralPython.vtkImageLaplacian", // tp_name
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
  PyvtkImageLaplacian_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageLaplacian_StaticNew()
{
  return vtkImageLaplacian::New();
}

PyObject *PyvtkImageLaplacian_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageLaplacian_Type, PyvtkImageLaplacian_Methods,
    "vtkImageLaplacian",
 &PyvtkImageLaplacian_StaticNew);

  PyTypeObject *pytype = &PyvtkImageLaplacian_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkThreadedImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageLaplacian(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageLaplacian_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageLaplacian", o) != 0)
  {
    Py_DECREF(o);
  }

}

