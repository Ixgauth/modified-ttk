// python wrapper for vtkImageContinuousDilate3D
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
#include "vtkImageContinuousDilate3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageContinuousDilate3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageContinuousDilate3D_ClassNew(); }

#ifndef DECLARED_PyvtkImageSpatialAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageSpatialAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageSpatialAlgorithm_ClassNew
#endif

static const char *PyvtkImageContinuousDilate3D_Doc =
  "vtkImageContinuousDilate3D - Dilate implemented as a maximum.\n\n"
  "Superclass: vtkImageSpatialAlgorithm\n\n"
  "vtkImageContinuousDilate3D replaces a pixel with the maximum over an\n"
  "ellipsoidal neighborhood.  If KernelSize of an axis is 1, no\n"
  "processing is done on that axis.\n\n";


static PyObject *
PyvtkImageContinuousDilate3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageContinuousDilate3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageContinuousDilate3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousDilate3D *op = static_cast<vtkImageContinuousDilate3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageContinuousDilate3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageContinuousDilate3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageContinuousDilate3D *tempr = vtkImageContinuousDilate3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageContinuousDilate3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousDilate3D *op = static_cast<vtkImageContinuousDilate3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageContinuousDilate3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageContinuousDilate3D::NewInstance());

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
PyvtkImageContinuousDilate3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageContinuousDilate3D *op = static_cast<vtkImageContinuousDilate3D *>(vp);

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
      op->vtkImageContinuousDilate3D::SetKernelSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageContinuousDilate3D_Methods[] = {
  {"IsTypeOf", PyvtkImageContinuousDilate3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {"IsA", PyvtkImageContinuousDilate3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {"SafeDownCast", PyvtkImageContinuousDilate3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageContinuousDilate3D\nC++: static vtkImageContinuousDilate3D *SafeDownCast(\n    vtkObjectBase *o)\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {"NewInstance", PyvtkImageContinuousDilate3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageContinuousDilate3D\nC++: vtkImageContinuousDilate3D *NewInstance()\n\nConstruct an instance of vtkImageContinuousDilate3D filter. By\ndefault zero values are dilated.\n"},
  {"SetKernelSize", PyvtkImageContinuousDilate3D_SetKernelSize, METH_VARARGS,
   "V.SetKernelSize(int, int, int)\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nThis method sets the size of the neighborhood.  It also sets the\ndefault middle of the neighborhood and computes the elliptical\nfoot print.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageContinuousDilate3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMorphologicalPython.vtkImageContinuousDilate3D", // tp_name
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
  PyvtkImageContinuousDilate3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageContinuousDilate3D_StaticNew()
{
  return vtkImageContinuousDilate3D::New();
}

PyObject *PyvtkImageContinuousDilate3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageContinuousDilate3D_Type, PyvtkImageContinuousDilate3D_Methods,
    "vtkImageContinuousDilate3D",
 &PyvtkImageContinuousDilate3D_StaticNew);

  PyTypeObject *pytype = &PyvtkImageContinuousDilate3D_Type;

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

void PyVTKAddFile_vtkImageContinuousDilate3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageContinuousDilate3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageContinuousDilate3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

