// python wrapper for vtkImageLogarithmicScale
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
#include "vtkImageLogarithmicScale.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageLogarithmicScale(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageLogarithmicScale_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageLogarithmicScale_Doc =
  "vtkImageLogarithmicScale - Passes each pixel through log function.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageLogarithmicScale passes each pixel through the function\n"
  "c*log(1+x).  It also handles negative values with the function\n"
  "-c*log(1-x).\n\n";


static PyObject *
PyvtkImageLogarithmicScale_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageLogarithmicScale::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogarithmicScale_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogarithmicScale *op = static_cast<vtkImageLogarithmicScale *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageLogarithmicScale::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogarithmicScale_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageLogarithmicScale *tempr = vtkImageLogarithmicScale::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogarithmicScale_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogarithmicScale *op = static_cast<vtkImageLogarithmicScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageLogarithmicScale *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageLogarithmicScale::NewInstance());

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
PyvtkImageLogarithmicScale_SetConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogarithmicScale *op = static_cast<vtkImageLogarithmicScale *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstant(temp0);
    }
    else
    {
      op->vtkImageLogarithmicScale::SetConstant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogarithmicScale_GetConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogarithmicScale *op = static_cast<vtkImageLogarithmicScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConstant() :
      op->vtkImageLogarithmicScale::GetConstant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageLogarithmicScale_Methods[] = {
  {"IsTypeOf", PyvtkImageLogarithmicScale_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageLogarithmicScale_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageLogarithmicScale_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageLogarithmicScale\nC++: static vtkImageLogarithmicScale *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageLogarithmicScale_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageLogarithmicScale\nC++: vtkImageLogarithmicScale *NewInstance()\n\n"},
  {"SetConstant", PyvtkImageLogarithmicScale_SetConstant, METH_VARARGS,
   "V.SetConstant(float)\nC++: virtual void SetConstant(double _arg)\n\nSet/Get the scale factor for the logarithmic function.\n"},
  {"GetConstant", PyvtkImageLogarithmicScale_GetConstant, METH_VARARGS,
   "V.GetConstant() -> float\nC++: virtual double GetConstant()\n\nSet/Get the scale factor for the logarithmic function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageLogarithmicScale_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMathPython.vtkImageLogarithmicScale", // tp_name
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
  PyvtkImageLogarithmicScale_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageLogarithmicScale_StaticNew()
{
  return vtkImageLogarithmicScale::New();
}

PyObject *PyvtkImageLogarithmicScale_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageLogarithmicScale_Type, PyvtkImageLogarithmicScale_Methods,
    "vtkImageLogarithmicScale",
 &PyvtkImageLogarithmicScale_StaticNew);

  PyTypeObject *pytype = &PyvtkImageLogarithmicScale_Type;

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

void PyVTKAddFile_vtkImageLogarithmicScale(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageLogarithmicScale_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageLogarithmicScale", o) != 0)
  {
    Py_DECREF(o);
  }

}

