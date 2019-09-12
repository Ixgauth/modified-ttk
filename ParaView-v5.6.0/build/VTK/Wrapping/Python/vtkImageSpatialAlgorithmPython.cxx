// python wrapper for vtkImageSpatialAlgorithm
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
#include "vtkImageSpatialAlgorithm.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSpatialAlgorithm(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageSpatialAlgorithm_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageSpatialAlgorithm_Doc =
  "vtkImageSpatialAlgorithm - Filters that operate on pixel\nneighborhoods.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageSpatialAlgorithm is a super class for filters that operate on\n"
  "an input neighborhood for each output pixel. It handles even sized\n"
  "neighborhoods, but their can be a half pixel shift associated with\n"
  "processing.  This superclass has some logic for handling boundaries. \n"
  "It can split regions into boundary and non-boundary pieces and call\n"
  "different execute methods.\n\n";


static PyObject *
PyvtkImageSpatialAlgorithm_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSpatialAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSpatialAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialAlgorithm *op = static_cast<vtkImageSpatialAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSpatialAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSpatialAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSpatialAlgorithm *tempr = vtkImageSpatialAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSpatialAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialAlgorithm *op = static_cast<vtkImageSpatialAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSpatialAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSpatialAlgorithm::NewInstance());

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
PyvtkImageSpatialAlgorithm_GetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialAlgorithm *op = static_cast<vtkImageSpatialAlgorithm *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetKernelSize() :
      op->vtkImageSpatialAlgorithm::GetKernelSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSpatialAlgorithm_GetKernelMiddle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelMiddle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSpatialAlgorithm *op = static_cast<vtkImageSpatialAlgorithm *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetKernelMiddle() :
      op->vtkImageSpatialAlgorithm::GetKernelMiddle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSpatialAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkImageSpatialAlgorithm_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSpatialAlgorithm_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSpatialAlgorithm_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageSpatialAlgorithm\nC++: static vtkImageSpatialAlgorithm *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSpatialAlgorithm_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageSpatialAlgorithm\nC++: vtkImageSpatialAlgorithm *NewInstance()\n\n"},
  {"GetKernelSize", PyvtkImageSpatialAlgorithm_GetKernelSize, METH_VARARGS,
   "V.GetKernelSize() -> (int, int, int)\nC++: int *GetKernelSize()\n\n"},
  {"GetKernelMiddle", PyvtkImageSpatialAlgorithm_GetKernelMiddle, METH_VARARGS,
   "V.GetKernelMiddle() -> (int, int, int)\nC++: int *GetKernelMiddle()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageSpatialAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingGeneralPython.vtkImageSpatialAlgorithm", // tp_name
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
  PyvtkImageSpatialAlgorithm_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSpatialAlgorithm_StaticNew()
{
  return vtkImageSpatialAlgorithm::New();
}

PyObject *PyvtkImageSpatialAlgorithm_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageSpatialAlgorithm_Type, PyvtkImageSpatialAlgorithm_Methods,
    "vtkImageSpatialAlgorithm",
 &PyvtkImageSpatialAlgorithm_StaticNew);

  PyTypeObject *pytype = &PyvtkImageSpatialAlgorithm_Type;

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

void PyVTKAddFile_vtkImageSpatialAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSpatialAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSpatialAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

