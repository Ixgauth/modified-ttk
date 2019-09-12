// python wrapper for vtkImageDilateErode3D
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
#include "vtkImageDilateErode3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageDilateErode3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageDilateErode3D_ClassNew(); }

#ifndef DECLARED_PyvtkImageSpatialAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageSpatialAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageSpatialAlgorithm_ClassNew
#endif

static const char *PyvtkImageDilateErode3D_Doc =
  "vtkImageDilateErode3D - Dilates one value and erodes another.\n\n"
  "Superclass: vtkImageSpatialAlgorithm\n\n"
  "vtkImageDilateErode3D will dilate one value and erode another. It\n"
  "uses an elliptical foot print, and only erodes/dilates on the\n"
  "boundary of the two values.  The filter is restricted to the X, Y,\n"
  "and Z axes for now.  It can degenerate to a 2 or 1 dimensional filter\n"
  "by setting the kernel size to 1 for a specific axis.\n\n";


static PyObject *
PyvtkImageDilateErode3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageDilateErode3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDilateErode3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageDilateErode3D *tempr = vtkImageDilateErode3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDilateErode3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDilateErode3D::NewInstance());

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
PyvtkImageDilateErode3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetKernelSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageDilateErode3D::SetKernelSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_SetDilateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDilateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDilateValue(temp0);
    }
    else
    {
      op->vtkImageDilateErode3D::SetDilateValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_GetDilateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDilateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDilateValue() :
      op->vtkImageDilateErode3D::GetDilateValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_SetErodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetErodeValue(temp0);
    }
    else
    {
      op->vtkImageDilateErode3D::SetErodeValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_GetErodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetErodeValue() :
      op->vtkImageDilateErode3D::GetErodeValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageDilateErode3D_Methods[] = {
  {"IsTypeOf", PyvtkImageDilateErode3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct an instance of vtkImageDilateErode3D filter. By default\nzero values are dilated.\n"},
  {"IsA", PyvtkImageDilateErode3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct an instance of vtkImageDilateErode3D filter. By default\nzero values are dilated.\n"},
  {"SafeDownCast", PyvtkImageDilateErode3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageDilateErode3D\nC++: static vtkImageDilateErode3D *SafeDownCast(vtkObjectBase *o)\n\nConstruct an instance of vtkImageDilateErode3D filter. By default\nzero values are dilated.\n"},
  {"NewInstance", PyvtkImageDilateErode3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageDilateErode3D\nC++: vtkImageDilateErode3D *NewInstance()\n\nConstruct an instance of vtkImageDilateErode3D filter. By default\nzero values are dilated.\n"},
  {"SetKernelSize", PyvtkImageDilateErode3D_SetKernelSize, METH_VARARGS,
   "V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nThis method sets the size of the neighborhood.  It also sets the\ndefault middle of the neighborhood and computes the elliptical\nfoot print.\n"},
  {"SetDilateValue", PyvtkImageDilateErode3D_SetDilateValue, METH_VARARGS,
   "V.SetDilateValue(float)\nC++: virtual void SetDilateValue(double _arg)\n\nSet/Get the Dilate and Erode values to be used by this filter.\n"},
  {"GetDilateValue", PyvtkImageDilateErode3D_GetDilateValue, METH_VARARGS,
   "V.GetDilateValue() -> float\nC++: virtual double GetDilateValue()\n\nSet/Get the Dilate and Erode values to be used by this filter.\n"},
  {"SetErodeValue", PyvtkImageDilateErode3D_SetErodeValue, METH_VARARGS,
   "V.SetErodeValue(float)\nC++: virtual void SetErodeValue(double _arg)\n\nSet/Get the Dilate and Erode values to be used by this filter.\n"},
  {"GetErodeValue", PyvtkImageDilateErode3D_GetErodeValue, METH_VARARGS,
   "V.GetErodeValue() -> float\nC++: virtual double GetErodeValue()\n\nSet/Get the Dilate and Erode values to be used by this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageDilateErode3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMorphologicalPython.vtkImageDilateErode3D", // tp_name
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
  PyvtkImageDilateErode3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageDilateErode3D_StaticNew()
{
  return vtkImageDilateErode3D::New();
}

PyObject *PyvtkImageDilateErode3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageDilateErode3D_Type, PyvtkImageDilateErode3D_Methods,
    "vtkImageDilateErode3D",
 &PyvtkImageDilateErode3D_StaticNew);

  PyTypeObject *pytype = &PyvtkImageDilateErode3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageSpatialAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageDilateErode3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageDilateErode3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageDilateErode3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

