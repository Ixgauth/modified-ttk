// python wrapper for vtkImageMagnify
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
#include "vtkImageMagnify.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMagnify(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageMagnify_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageMagnify_Doc =
  "vtkImageMagnify - magnify an image by an integer value\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageMagnify maps each pixel of the input onto a nxmx... region of\n"
  "the output.  Location (0,0,...) remains in the same place. The\n"
  "magnification occurs via pixel replication, or if Interpolate is on,\n"
  "by bilinear interpolation. Initially, interpolation is off and\n"
  "magnification factors are set to 1 in all directions.\n\n";


static PyObject *
PyvtkImageMagnify_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMagnify::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMagnify_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMagnify::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMagnify_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMagnify *tempr = vtkImageMagnify::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMagnify_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMagnify *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMagnify::NewInstance());

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
PyvtkImageMagnify_SetMagnificationFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

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
      op->SetMagnificationFactors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageMagnify::SetMagnificationFactors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMagnify_SetMagnificationFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMagnificationFactors(temp0);
    }
    else
    {
      op->vtkImageMagnify::SetMagnificationFactors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMagnify_SetMagnificationFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageMagnify_SetMagnificationFactors_s1(self, args);
    case 1:
      return PyvtkImageMagnify_SetMagnificationFactors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMagnificationFactors");
  return nullptr;
}



static PyObject *
PyvtkImageMagnify_GetMagnificationFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMagnificationFactors() :
      op->vtkImageMagnify::GetMagnificationFactors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMagnify_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolate(temp0);
    }
    else
    {
      op->vtkImageMagnify::SetInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMagnify_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkImageMagnify::GetInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMagnify_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOn();
    }
    else
    {
      op->vtkImageMagnify::InterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMagnify_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOff();
    }
    else
    {
      op->vtkImageMagnify::InterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMagnify_Methods[] = {
  {"IsTypeOf", PyvtkImageMagnify_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMagnify_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMagnify_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageMagnify\nC++: static vtkImageMagnify *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMagnify_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageMagnify\nC++: vtkImageMagnify *NewInstance()\n\n"},
  {"SetMagnificationFactors", PyvtkImageMagnify_SetMagnificationFactors, METH_VARARGS,
   "V.SetMagnificationFactors(int, int, int)\nC++: void SetMagnificationFactors(int, int, int)\nV.SetMagnificationFactors((int, int, int))\nC++: void SetMagnificationFactors(int a[3])\n\n"},
  {"GetMagnificationFactors", PyvtkImageMagnify_GetMagnificationFactors, METH_VARARGS,
   "V.GetMagnificationFactors() -> (int, int, int)\nC++: int *GetMagnificationFactors()\n\n"},
  {"SetInterpolate", PyvtkImageMagnify_SetInterpolate, METH_VARARGS,
   "V.SetInterpolate(int)\nC++: virtual void SetInterpolate(vtkTypeBool _arg)\n\nTurn interpolation on and off (pixel replication is used when\noff). Initially, interpolation is off.\n"},
  {"GetInterpolate", PyvtkImageMagnify_GetInterpolate, METH_VARARGS,
   "V.GetInterpolate() -> int\nC++: virtual vtkTypeBool GetInterpolate()\n\nTurn interpolation on and off (pixel replication is used when\noff). Initially, interpolation is off.\n"},
  {"InterpolateOn", PyvtkImageMagnify_InterpolateOn, METH_VARARGS,
   "V.InterpolateOn()\nC++: virtual void InterpolateOn()\n\nTurn interpolation on and off (pixel replication is used when\noff). Initially, interpolation is off.\n"},
  {"InterpolateOff", PyvtkImageMagnify_InterpolateOff, METH_VARARGS,
   "V.InterpolateOff()\nC++: virtual void InterpolateOff()\n\nTurn interpolation on and off (pixel replication is used when\noff). Initially, interpolation is off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageMagnify_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageMagnify", // tp_name
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
  PyvtkImageMagnify_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageMagnify_StaticNew()
{
  return vtkImageMagnify::New();
}

PyObject *PyvtkImageMagnify_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageMagnify_Type, PyvtkImageMagnify_Methods,
    "vtkImageMagnify",
 &PyvtkImageMagnify_StaticNew);

  PyTypeObject *pytype = &PyvtkImageMagnify_Type;

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

void PyVTKAddFile_vtkImageMagnify(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMagnify_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMagnify", o) != 0)
  {
    Py_DECREF(o);
  }

}

