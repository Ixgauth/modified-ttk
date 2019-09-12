// python wrapper for vtkImageHSIToRGB
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
#include "vtkImageHSIToRGB.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageHSIToRGB(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageHSIToRGB_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageHSIToRGB_Doc =
  "vtkImageHSIToRGB - Converts HSI components to RGB.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "For each pixel with hue, saturation and intensity components this\n"
  "filter outputs the color coded as red, green, blue.  Output type must\n"
  "be the same as input type.\n\n"
  "@sa\n"
  "vtkImageRGBToHSI\n\n";


static PyObject *
PyvtkImageHSIToRGB_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageHSIToRGB::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageHSIToRGB::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageHSIToRGB *tempr = vtkImageHSIToRGB::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageHSIToRGB *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageHSIToRGB::NewInstance());

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
PyvtkImageHSIToRGB_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximum(temp0);
    }
    else
    {
      op->vtkImageHSIToRGB::SetMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximum() :
      op->vtkImageHSIToRGB::GetMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageHSIToRGB_Methods[] = {
  {"IsTypeOf", PyvtkImageHSIToRGB_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageHSIToRGB_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageHSIToRGB_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageHSIToRGB\nC++: static vtkImageHSIToRGB *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageHSIToRGB_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageHSIToRGB\nC++: vtkImageHSIToRGB *NewInstance()\n\n"},
  {"SetMaximum", PyvtkImageHSIToRGB_SetMaximum, METH_VARARGS,
   "V.SetMaximum(float)\nC++: virtual void SetMaximum(double _arg)\n\nHue is an angle. Maximum specifies when it maps back to 0.\nHueMaximum defaults to 255 instead of 2PI, because unsigned char\nis expected as input. Maximum also specifies the maximum of the\nSaturation, and R, G, B.\n"},
  {"GetMaximum", PyvtkImageHSIToRGB_GetMaximum, METH_VARARGS,
   "V.GetMaximum() -> float\nC++: virtual double GetMaximum()\n\nHue is an angle. Maximum specifies when it maps back to 0.\nHueMaximum defaults to 255 instead of 2PI, because unsigned char\nis expected as input. Maximum also specifies the maximum of the\nSaturation, and R, G, B.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageHSIToRGB_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingColorPython.vtkImageHSIToRGB", // tp_name
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
  PyvtkImageHSIToRGB_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageHSIToRGB_StaticNew()
{
  return vtkImageHSIToRGB::New();
}

PyObject *PyvtkImageHSIToRGB_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageHSIToRGB_Type, PyvtkImageHSIToRGB_Methods,
    "vtkImageHSIToRGB",
 &PyvtkImageHSIToRGB_StaticNew);

  PyTypeObject *pytype = &PyvtkImageHSIToRGB_Type;

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

void PyVTKAddFile_vtkImageHSIToRGB(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageHSIToRGB_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageHSIToRGB", o) != 0)
  {
    Py_DECREF(o);
  }

}

