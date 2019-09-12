// python wrapper for vtkImageFlip
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
#include "vtkImageFlip.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageFlip(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageFlip_ClassNew(); }

#ifndef DECLARED_PyvtkImageReslice_ClassNew
extern "C" { PyObject *PyvtkImageReslice_ClassNew(); }
#define DECLARED_PyvtkImageReslice_ClassNew
#endif

static const char *PyvtkImageFlip_Doc =
  "vtkImageFlip - This flips an axis of an image.\n\n"
  "Superclass: vtkImageReslice\n\n"
  "Right becomes left ...\n\n"
  "vtkImageFlip will reflect the data along the filtered axis.  This\n"
  "filter is actually a thin wrapper around vtkImageReslice.\n\n";


static PyObject *
PyvtkImageFlip_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageFlip::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageFlip::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageFlip *tempr = vtkImageFlip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageFlip *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageFlip::NewInstance());

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
PyvtkImageFlip_SetFilteredAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilteredAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilteredAxis(temp0);
    }
    else
    {
      op->vtkImageFlip::SetFilteredAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_GetFilteredAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilteredAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFilteredAxis() :
      op->vtkImageFlip::GetFilteredAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_SetFlipAboutOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipAboutOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipAboutOrigin(temp0);
    }
    else
    {
      op->vtkImageFlip::SetFlipAboutOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_GetFlipAboutOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipAboutOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlipAboutOrigin() :
      op->vtkImageFlip::GetFlipAboutOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_FlipAboutOriginOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipAboutOriginOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipAboutOriginOn();
    }
    else
    {
      op->vtkImageFlip::FlipAboutOriginOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_FlipAboutOriginOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipAboutOriginOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipAboutOriginOff();
    }
    else
    {
      op->vtkImageFlip::FlipAboutOriginOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_SetFilteredAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilteredAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilteredAxes(temp0);
    }
    else
    {
      op->vtkImageFlip::SetFilteredAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_GetFilteredAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilteredAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFilteredAxes() :
      op->vtkImageFlip::GetFilteredAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_SetPreserveImageExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveImageExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveImageExtent(temp0);
    }
    else
    {
      op->vtkImageFlip::SetPreserveImageExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_GetPreserveImageExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveImageExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreserveImageExtent() :
      op->vtkImageFlip::GetPreserveImageExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_PreserveImageExtentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveImageExtentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveImageExtentOn();
    }
    else
    {
      op->vtkImageFlip::PreserveImageExtentOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageFlip_PreserveImageExtentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveImageExtentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFlip *op = static_cast<vtkImageFlip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveImageExtentOff();
    }
    else
    {
      op->vtkImageFlip::PreserveImageExtentOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageFlip_Methods[] = {
  {"IsTypeOf", PyvtkImageFlip_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageFlip_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageFlip_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageFlip\nC++: static vtkImageFlip *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageFlip_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageFlip\nC++: vtkImageFlip *NewInstance()\n\n"},
  {"SetFilteredAxis", PyvtkImageFlip_SetFilteredAxis, METH_VARARGS,
   "V.SetFilteredAxis(int)\nC++: virtual void SetFilteredAxis(int _arg)\n\nSpecify which axis will be flipped.  This must be an integer\nbetween 0 (for x) and 2 (for z). Initial value is 0.\n"},
  {"GetFilteredAxis", PyvtkImageFlip_GetFilteredAxis, METH_VARARGS,
   "V.GetFilteredAxis() -> int\nC++: virtual int GetFilteredAxis()\n\nSpecify which axis will be flipped.  This must be an integer\nbetween 0 (for x) and 2 (for z). Initial value is 0.\n"},
  {"SetFlipAboutOrigin", PyvtkImageFlip_SetFlipAboutOrigin, METH_VARARGS,
   "V.SetFlipAboutOrigin(int)\nC++: virtual void SetFlipAboutOrigin(vtkTypeBool _arg)\n\nBy default the image will be flipped about its center, and the\nOrigin, Spacing and Extent of the output will be identical to the\ninput.  However, if you have a coordinate system associated with\nthe image and you want to use the flip to convert +ve values\nalong one axis to -ve values (and vice versa) then you actually\nwant to flip the image about coordinate (0,0,0) instead of about\nthe center of the image.  This method will adjust the Origin of\nthe output such that the flip occurs about (0,0,0).  Note that\nthis method only changes the Origin (and hence the coordinate\nsystem) the output data: the actual pixel values are the same\nwhether or not this method is used.  Also note that the Origin in\nthis method name refers to (0,0,0) in the coordinate system\nassociated with the image, it does not refer to the Origin ivar\nthat is associated with a vtkImageData.\n"},
  {"GetFlipAboutOrigin", PyvtkImageFlip_GetFlipAboutOrigin, METH_VARARGS,
   "V.GetFlipAboutOrigin() -> int\nC++: virtual vtkTypeBool GetFlipAboutOrigin()\n\nBy default the image will be flipped about its center, and the\nOrigin, Spacing and Extent of the output will be identical to the\ninput.  However, if you have a coordinate system associated with\nthe image and you want to use the flip to convert +ve values\nalong one axis to -ve values (and vice versa) then you actually\nwant to flip the image about coordinate (0,0,0) instead of about\nthe center of the image.  This method will adjust the Origin of\nthe output such that the flip occurs about (0,0,0).  Note that\nthis method only changes the Origin (and hence the coordinate\nsystem) the output data: the actual pixel values are the same\nwhether or not this method is used.  Also note that the Origin in\nthis method name refers to (0,0,0) in the coordinate system\nassociated with the image, it does not refer to the Origin ivar\nthat is associated with a vtkImageData.\n"},
  {"FlipAboutOriginOn", PyvtkImageFlip_FlipAboutOriginOn, METH_VARARGS,
   "V.FlipAboutOriginOn()\nC++: virtual void FlipAboutOriginOn()\n\nBy default the image will be flipped about its center, and the\nOrigin, Spacing and Extent of the output will be identical to the\ninput.  However, if you have a coordinate system associated with\nthe image and you want to use the flip to convert +ve values\nalong one axis to -ve values (and vice versa) then you actually\nwant to flip the image about coordinate (0,0,0) instead of about\nthe center of the image.  This method will adjust the Origin of\nthe output such that the flip occurs about (0,0,0).  Note that\nthis method only changes the Origin (and hence the coordinate\nsystem) the output data: the actual pixel values are the same\nwhether or not this method is used.  Also note that the Origin in\nthis method name refers to (0,0,0) in the coordinate system\nassociated with the image, it does not refer to the Origin ivar\nthat is associated with a vtkImageData.\n"},
  {"FlipAboutOriginOff", PyvtkImageFlip_FlipAboutOriginOff, METH_VARARGS,
   "V.FlipAboutOriginOff()\nC++: virtual void FlipAboutOriginOff()\n\nBy default the image will be flipped about its center, and the\nOrigin, Spacing and Extent of the output will be identical to the\ninput.  However, if you have a coordinate system associated with\nthe image and you want to use the flip to convert +ve values\nalong one axis to -ve values (and vice versa) then you actually\nwant to flip the image about coordinate (0,0,0) instead of about\nthe center of the image.  This method will adjust the Origin of\nthe output such that the flip occurs about (0,0,0).  Note that\nthis method only changes the Origin (and hence the coordinate\nsystem) the output data: the actual pixel values are the same\nwhether or not this method is used.  Also note that the Origin in\nthis method name refers to (0,0,0) in the coordinate system\nassociated with the image, it does not refer to the Origin ivar\nthat is associated with a vtkImageData.\n"},
  {"SetFilteredAxes", PyvtkImageFlip_SetFilteredAxes, METH_VARARGS,
   "V.SetFilteredAxes(int)\nC++: void SetFilteredAxes(int axis)\n\nKeep the mis-named Axes variations around for compatibility with\nold scripts. Axis is singular, not plural...\n"},
  {"GetFilteredAxes", PyvtkImageFlip_GetFilteredAxes, METH_VARARGS,
   "V.GetFilteredAxes() -> int\nC++: int GetFilteredAxes()\n\n"},
  {"SetPreserveImageExtent", PyvtkImageFlip_SetPreserveImageExtent, METH_VARARGS,
   "V.SetPreserveImageExtent(int)\nC++: virtual void SetPreserveImageExtent(vtkTypeBool _arg)\n\nPreserveImageExtentOff wasn't covered by test scripts and its\nimplementation was broken.  It is deprecated now and it has no\neffect (i.e. the ImageExtent is always preserved).\n"},
  {"GetPreserveImageExtent", PyvtkImageFlip_GetPreserveImageExtent, METH_VARARGS,
   "V.GetPreserveImageExtent() -> int\nC++: virtual vtkTypeBool GetPreserveImageExtent()\n\nPreserveImageExtentOff wasn't covered by test scripts and its\nimplementation was broken.  It is deprecated now and it has no\neffect (i.e. the ImageExtent is always preserved).\n"},
  {"PreserveImageExtentOn", PyvtkImageFlip_PreserveImageExtentOn, METH_VARARGS,
   "V.PreserveImageExtentOn()\nC++: virtual void PreserveImageExtentOn()\n\nPreserveImageExtentOff wasn't covered by test scripts and its\nimplementation was broken.  It is deprecated now and it has no\neffect (i.e. the ImageExtent is always preserved).\n"},
  {"PreserveImageExtentOff", PyvtkImageFlip_PreserveImageExtentOff, METH_VARARGS,
   "V.PreserveImageExtentOff()\nC++: virtual void PreserveImageExtentOff()\n\nPreserveImageExtentOff wasn't covered by test scripts and its\nimplementation was broken.  It is deprecated now and it has no\neffect (i.e. the ImageExtent is always preserved).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageFlip_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageFlip", // tp_name
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
  PyvtkImageFlip_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageFlip_StaticNew()
{
  return vtkImageFlip::New();
}

PyObject *PyvtkImageFlip_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageFlip_Type, PyvtkImageFlip_Methods,
    "vtkImageFlip",
 &PyvtkImageFlip_StaticNew);

  PyTypeObject *pytype = &PyvtkImageFlip_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageReslice_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageFlip(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageFlip_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageFlip", o) != 0)
  {
    Py_DECREF(o);
  }

}

