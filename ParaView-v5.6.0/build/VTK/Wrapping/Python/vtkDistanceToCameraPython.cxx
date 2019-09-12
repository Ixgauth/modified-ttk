// python wrapper for vtkDistanceToCamera
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
#include "vtkDistanceToCamera.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDistanceToCamera(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDistanceToCamera_ClassNew(); }

#ifndef DECLARED_PyvtkPointSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPointSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPointSetAlgorithm_ClassNew
#endif

static const char *PyvtkDistanceToCamera_Doc =
  "vtkDistanceToCamera - calculates distance from points to the camera.\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "This filter adds a double array containing the distance from each\n"
  "point to the camera. If Scaling is on, it will use the values in the\n"
  "input array to process in order to scale the size of the points.\n"
  "ScreenSize sets the size in screen pixels that you would want a\n"
  "rendered rectangle at that point to be, if it was scaled by the\n"
  "output array.\n\n";


static PyObject *
PyvtkDistanceToCamera_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDistanceToCamera::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistanceToCamera::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDistanceToCamera *tempr = vtkDistanceToCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDistanceToCamera *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistanceToCamera::NewInstance());

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
PyvtkDistanceToCamera_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkDistanceToCamera::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkDistanceToCamera::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScreenSize(temp0);
    }
    else
    {
      op->vtkDistanceToCamera::SetScreenSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkDistanceToCamera::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaling(temp0);
    }
    else
    {
      op->vtkDistanceToCamera::SetScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkDistanceToCamera::GetScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOn();
    }
    else
    {
      op->vtkDistanceToCamera::ScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOff();
    }
    else
    {
      op->vtkDistanceToCamera::ScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_SetDistanceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceArrayName(temp0);
    }
    else
    {
      op->vtkDistanceToCamera::SetDistanceArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetDistanceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDistanceArrayName() :
      op->vtkDistanceToCamera::GetDistanceArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceToCamera_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceToCamera *op = static_cast<vtkDistanceToCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDistanceToCamera::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDistanceToCamera_Methods[] = {
  {"IsTypeOf", PyvtkDistanceToCamera_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDistanceToCamera_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDistanceToCamera_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDistanceToCamera\nC++: static vtkDistanceToCamera *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDistanceToCamera_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDistanceToCamera\nC++: vtkDistanceToCamera *NewInstance()\n\n"},
  {"SetRenderer", PyvtkDistanceToCamera_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *ren)\n\nThe renderer which will ultimately render these points.\n"},
  {"GetRenderer", PyvtkDistanceToCamera_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nThe renderer which will ultimately render these points.\n"},
  {"SetScreenSize", PyvtkDistanceToCamera_SetScreenSize, METH_VARARGS,
   "V.SetScreenSize(float)\nC++: virtual void SetScreenSize(double _arg)\n\nThe desired screen size obtained by scaling glyphs by the\ndistance array. It assumes the glyph at each point will be unit\nsize.\n"},
  {"GetScreenSize", PyvtkDistanceToCamera_GetScreenSize, METH_VARARGS,
   "V.GetScreenSize() -> float\nC++: virtual double GetScreenSize()\n\nThe desired screen size obtained by scaling glyphs by the\ndistance array. It assumes the glyph at each point will be unit\nsize.\n"},
  {"SetScaling", PyvtkDistanceToCamera_SetScaling, METH_VARARGS,
   "V.SetScaling(bool)\nC++: virtual void SetScaling(bool _arg)\n\nWhether to scale the distance by the input array to process.\n"},
  {"GetScaling", PyvtkDistanceToCamera_GetScaling, METH_VARARGS,
   "V.GetScaling() -> bool\nC++: virtual bool GetScaling()\n\nWhether to scale the distance by the input array to process.\n"},
  {"ScalingOn", PyvtkDistanceToCamera_ScalingOn, METH_VARARGS,
   "V.ScalingOn()\nC++: virtual void ScalingOn()\n\nWhether to scale the distance by the input array to process.\n"},
  {"ScalingOff", PyvtkDistanceToCamera_ScalingOff, METH_VARARGS,
   "V.ScalingOff()\nC++: virtual void ScalingOff()\n\nWhether to scale the distance by the input array to process.\n"},
  {"SetDistanceArrayName", PyvtkDistanceToCamera_SetDistanceArrayName, METH_VARARGS,
   "V.SetDistanceArrayName(string)\nC++: virtual void SetDistanceArrayName(const char *_arg)\n\nThe name of the distance array. If not set, the array is named\n'DistanceToCamera'.\n"},
  {"GetDistanceArrayName", PyvtkDistanceToCamera_GetDistanceArrayName, METH_VARARGS,
   "V.GetDistanceArrayName() -> string\nC++: virtual char *GetDistanceArrayName()\n\nThe name of the distance array. If not set, the array is named\n'DistanceToCamera'.\n"},
  {"GetMTime", PyvtkDistanceToCamera_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time of this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDistanceToCamera_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkDistanceToCamera", // tp_name
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
  PyvtkDistanceToCamera_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDistanceToCamera_StaticNew()
{
  return vtkDistanceToCamera::New();
}

PyObject *PyvtkDistanceToCamera_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDistanceToCamera_Type, PyvtkDistanceToCamera_Methods,
    "vtkDistanceToCamera",
 &PyvtkDistanceToCamera_StaticNew);

  PyTypeObject *pytype = &PyvtkDistanceToCamera_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDistanceToCamera(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDistanceToCamera_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDistanceToCamera", o) != 0)
  {
    Py_DECREF(o);
  }

}

