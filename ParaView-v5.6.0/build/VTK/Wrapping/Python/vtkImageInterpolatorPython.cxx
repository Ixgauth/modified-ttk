// python wrapper for vtkImageInterpolator
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
#include "vtkImageInterpolator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageInterpolator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractImageInterpolator_ClassNew
extern "C" { PyObject *PyvtkAbstractImageInterpolator_ClassNew(); }
#define DECLARED_PyvtkAbstractImageInterpolator_ClassNew
#endif

static const char *PyvtkImageInterpolator_Doc =
  "vtkImageInterpolator - interpolate data values from images\n\n"
  "Superclass: vtkAbstractImageInterpolator\n\n"
  "vtkImageInterpolator provides a simple interface for interpolating\n"
  "image data.  It provides linear, cubic, and nearest-neighbor\n"
  "interpolation.@par Thanks: Thanks to David Gobbi at the Seaman Family\n"
  "MR Centre and Dept. of Clinical Neurosciences, Foothills Medical\n"
  "Centre, Calgary, for providing this class.\n"
  "@sa\n"
  "vtkImageReslice\n\n";


static PyObject *
PyvtkImageInterpolator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageInterpolator *tempr = vtkImageInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageInterpolator::NewInstance());

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
PyvtkImageInterpolator_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationMode(temp0);
    }
    else
    {
      op->vtkImageInterpolator::SetInterpolationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageInterpolator_SetInterpolationModeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToNearest();
    }
    else
    {
      op->vtkImageInterpolator::SetInterpolationModeToNearest();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageInterpolator_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToLinear();
    }
    else
    {
      op->vtkImageInterpolator::SetInterpolationModeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageInterpolator_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToCubic();
    }
    else
    {
      op->vtkImageInterpolator::SetInterpolationModeToCubic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageInterpolator_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkImageInterpolator::GetInterpolationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageInterpolator_GetInterpolationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInterpolationModeAsString() :
      op->vtkImageInterpolator::GetInterpolationModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageInterpolator_ComputeSupportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSupportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeSupportSize(temp0, temp1);
    }
    else
    {
      op->vtkImageInterpolator::ComputeSupportSize(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageInterpolator_IsSeparable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSeparable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageInterpolator *op = static_cast<vtkImageInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSeparable() :
      op->vtkImageInterpolator::IsSeparable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkImageInterpolator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageInterpolator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageInterpolator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageInterpolator\nC++: static vtkImageInterpolator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageInterpolator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageInterpolator\nC++: vtkImageInterpolator *NewInstance()\n\n"},
  {"SetInterpolationMode", PyvtkImageInterpolator_SetInterpolationMode, METH_VARARGS,
   "V.SetInterpolationMode(int)\nC++: virtual void SetInterpolationMode(int mode)\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {"SetInterpolationModeToNearest", PyvtkImageInterpolator_SetInterpolationModeToNearest, METH_VARARGS,
   "V.SetInterpolationModeToNearest()\nC++: void SetInterpolationModeToNearest()\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {"SetInterpolationModeToLinear", PyvtkImageInterpolator_SetInterpolationModeToLinear, METH_VARARGS,
   "V.SetInterpolationModeToLinear()\nC++: void SetInterpolationModeToLinear()\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {"SetInterpolationModeToCubic", PyvtkImageInterpolator_SetInterpolationModeToCubic, METH_VARARGS,
   "V.SetInterpolationModeToCubic()\nC++: void SetInterpolationModeToCubic()\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {"GetInterpolationMode", PyvtkImageInterpolator_GetInterpolationMode, METH_VARARGS,
   "V.GetInterpolationMode() -> int\nC++: int GetInterpolationMode()\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {"GetInterpolationModeAsString", PyvtkImageInterpolator_GetInterpolationModeAsString, METH_VARARGS,
   "V.GetInterpolationModeAsString() -> string\nC++: virtual const char *GetInterpolationModeAsString()\n\nThe interpolation mode for point scalars (default: linear). \nSubclasses will provide additional interpolation modes, so this\nis a virtual method.\n"},
  {"ComputeSupportSize", PyvtkImageInterpolator_ComputeSupportSize, METH_VARARGS,
   "V.ComputeSupportSize((float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), [int, int, int])\nC++: void ComputeSupportSize(const double matrix[16],\n    int support[3]) override;\n\nGet the support size for use in computing update extents.  If the\ndata will be sampled on a regular grid, then pass a matrix\ndescribing the structured coordinate transformation between the\noutput and the input. Otherwise, pass nullptr as the matrix to\nretrieve the full kernel size.\n"},
  {"IsSeparable", PyvtkImageInterpolator_IsSeparable, METH_VARARGS,
   "V.IsSeparable() -> bool\nC++: bool IsSeparable() override;\n\nReturns true if the interpolator supports weight precomputation.\nThis will always return true for this interpolator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageInterpolator", // tp_name
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
  PyvtkImageInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageInterpolator_StaticNew()
{
  return vtkImageInterpolator::New();
}

PyObject *PyvtkImageInterpolator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageInterpolator_Type, PyvtkImageInterpolator_Methods,
    "vtkImageInterpolator",
 &PyvtkImageInterpolator_StaticNew);

  PyTypeObject *pytype = &PyvtkImageInterpolator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractImageInterpolator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

