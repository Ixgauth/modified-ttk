// python wrapper for vtkImageEuclideanToPolar
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
#include "vtkImageEuclideanToPolar.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageEuclideanToPolar(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageEuclideanToPolar_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageEuclideanToPolar_Doc =
  "vtkImageEuclideanToPolar - Converts 2D Euclidean coordinates to polar.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "For each pixel with vector components x,y, this filter outputs theta\n"
  "in component0, and radius in component1.\n\n";


static PyObject *
PyvtkImageEuclideanToPolar_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageEuclideanToPolar::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanToPolar_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanToPolar *op = static_cast<vtkImageEuclideanToPolar *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageEuclideanToPolar::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanToPolar_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageEuclideanToPolar *tempr = vtkImageEuclideanToPolar::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanToPolar_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanToPolar *op = static_cast<vtkImageEuclideanToPolar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageEuclideanToPolar *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageEuclideanToPolar::NewInstance());

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
PyvtkImageEuclideanToPolar_SetThetaMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanToPolar *op = static_cast<vtkImageEuclideanToPolar *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThetaMaximum(temp0);
    }
    else
    {
      op->vtkImageEuclideanToPolar::SetThetaMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageEuclideanToPolar_GetThetaMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEuclideanToPolar *op = static_cast<vtkImageEuclideanToPolar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThetaMaximum() :
      op->vtkImageEuclideanToPolar::GetThetaMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageEuclideanToPolar_Methods[] = {
  {"IsTypeOf", PyvtkImageEuclideanToPolar_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageEuclideanToPolar_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageEuclideanToPolar_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageEuclideanToPolar\nC++: static vtkImageEuclideanToPolar *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageEuclideanToPolar_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageEuclideanToPolar\nC++: vtkImageEuclideanToPolar *NewInstance()\n\n"},
  {"SetThetaMaximum", PyvtkImageEuclideanToPolar_SetThetaMaximum, METH_VARARGS,
   "V.SetThetaMaximum(float)\nC++: virtual void SetThetaMaximum(double _arg)\n\nTheta is an angle. Maximum specifies when it maps back to 0.\nThetaMaximum defaults to 255 instead of 2PI, because unsigned\nchar is expected as input. The output type must be the same as\ninput type.\n"},
  {"GetThetaMaximum", PyvtkImageEuclideanToPolar_GetThetaMaximum, METH_VARARGS,
   "V.GetThetaMaximum() -> float\nC++: virtual double GetThetaMaximum()\n\nTheta is an angle. Maximum specifies when it maps back to 0.\nThetaMaximum defaults to 255 instead of 2PI, because unsigned\nchar is expected as input. The output type must be the same as\ninput type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageEuclideanToPolar_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingGeneralPython.vtkImageEuclideanToPolar", // tp_name
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
  PyvtkImageEuclideanToPolar_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageEuclideanToPolar_StaticNew()
{
  return vtkImageEuclideanToPolar::New();
}

PyObject *PyvtkImageEuclideanToPolar_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageEuclideanToPolar_Type, PyvtkImageEuclideanToPolar_Methods,
    "vtkImageEuclideanToPolar",
 &PyvtkImageEuclideanToPolar_StaticNew);

  PyTypeObject *pytype = &PyvtkImageEuclideanToPolar_Type;

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

void PyVTKAddFile_vtkImageEuclideanToPolar(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageEuclideanToPolar_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageEuclideanToPolar", o) != 0)
  {
    Py_DECREF(o);
  }

}

