// python wrapper for vtkPVCameraAnimationCue
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
#include "vtkPVCameraAnimationCue.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCameraAnimationCue(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCameraAnimationCue_ClassNew(); }

#ifndef DECLARED_PyvtkPVKeyFrameAnimationCue_ClassNew
extern "C" { PyObject *PyvtkPVKeyFrameAnimationCue_ClassNew(); }
#define DECLARED_PyvtkPVKeyFrameAnimationCue_ClassNew
#endif

static const char *PyvtkPVCameraAnimationCue_Doc =
  "vtkPVCameraAnimationCue - vtkPVCameraAnimationCue is a specialization\nof the vtkPVKeyFrameAnimationCue suitable for animating cameras from\na vtkPVRenderView.\n\n"
  "Superclass: vtkPVKeyFrameAnimationCue\n\n"
;


static PyObject *
PyvtkPVCameraAnimationCue_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCameraAnimationCue::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCameraAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCameraAnimationCue *tempr = vtkPVCameraAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCameraAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCameraAnimationCue::NewInstance());

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
PyvtkPVCameraAnimationCue_SetView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  vtkPVRenderView *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVRenderView"))
  {
    if (ap.IsBound())
    {
      op->SetView(temp0);
    }
    else
    {
      op->vtkPVCameraAnimationCue::SetView(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_GetView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVRenderView *tempr = (ap.IsBound() ?
      op->GetView() :
      op->vtkPVCameraAnimationCue::GetView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkPVCameraAnimationCue::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkPVCameraAnimationCue::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_GetTimeKeeper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeKeeper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetTimeKeeper() :
      op->vtkPVCameraAnimationCue::GetTimeKeeper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_SetTimeKeeper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeKeeper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetTimeKeeper(temp0);
    }
    else
    {
      op->vtkPVCameraAnimationCue::SetTimeKeeper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_BeginUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BeginUpdateAnimationValues();
    }
    else
    {
      op->vtkPVCameraAnimationCue::BeginUpdateAnimationValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAnimationValue(temp0, temp1);
    }
    else
    {
      op->vtkPVCameraAnimationCue::SetAnimationValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_EndUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndUpdateAnimationValues();
    }
    else
    {
      op->vtkPVCameraAnimationCue::EndUpdateAnimationValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraAnimationCue_SetDataSourceProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSourceProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraAnimationCue *op = static_cast<vtkPVCameraAnimationCue *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetDataSourceProxy(temp0);
    }
    else
    {
      op->vtkPVCameraAnimationCue::SetDataSourceProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCameraAnimationCue_Methods[] = {
  {"IsTypeOf", PyvtkPVCameraAnimationCue_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCameraAnimationCue_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCameraAnimationCue_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCameraAnimationCue\nC++: static vtkPVCameraAnimationCue *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCameraAnimationCue_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCameraAnimationCue\nC++: vtkPVCameraAnimationCue *NewInstance()\n\n"},
  {"SetView", PyvtkPVCameraAnimationCue_SetView, METH_VARARGS,
   "V.SetView(vtkPVRenderView)\nC++: void SetView(vtkPVRenderView *)\n\nGet/Set the render view.\n"},
  {"GetView", PyvtkPVCameraAnimationCue_GetView, METH_VARARGS,
   "V.GetView() -> vtkPVRenderView\nC++: virtual vtkPVRenderView *GetView()\n\nGet/Set the render view.\n"},
  {"GetCamera", PyvtkPVCameraAnimationCue_GetCamera, METH_VARARGS,
   "V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nReturns the animated camera, if any.\n"},
  {"SetMode", PyvtkPVCameraAnimationCue_SetMode, METH_VARARGS,
   "V.SetMode(int)\nC++: void SetMode(int mode)\n\nForwarded to vtkPVCameraCueManipulator.\n"},
  {"GetTimeKeeper", PyvtkPVCameraAnimationCue_GetTimeKeeper, METH_VARARGS,
   "V.GetTimeKeeper() -> vtkSMProxy\nC++: virtual vtkSMProxy *GetTimeKeeper()\n\nGet/Set the animation timekeeper\n"},
  {"SetTimeKeeper", PyvtkPVCameraAnimationCue_SetTimeKeeper, METH_VARARGS,
   "V.SetTimeKeeper(vtkSMProxy)\nC++: void SetTimeKeeper(vtkSMProxy *)\n\nGet/Set the animation timekeeper\n"},
  {"BeginUpdateAnimationValues", PyvtkPVCameraAnimationCue_BeginUpdateAnimationValues, METH_VARARGS,
   "V.BeginUpdateAnimationValues()\nC++: void BeginUpdateAnimationValues() override;\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {"SetAnimationValue", PyvtkPVCameraAnimationCue_SetAnimationValue, METH_VARARGS,
   "V.SetAnimationValue(int, float)\nC++: void SetAnimationValue(int, double) override;\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {"EndUpdateAnimationValues", PyvtkPVCameraAnimationCue_EndUpdateAnimationValues, METH_VARARGS,
   "V.EndUpdateAnimationValues()\nC++: void EndUpdateAnimationValues() override;\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {"SetDataSourceProxy", PyvtkPVCameraAnimationCue_SetDataSourceProxy, METH_VARARGS,
   "V.SetDataSourceProxy(vtkSMProxy)\nC++: void SetDataSourceProxy(vtkSMProxy *dataSourceProxy)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCameraAnimationCue_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVCameraAnimationCue", // tp_name
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
  PyvtkPVCameraAnimationCue_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCameraAnimationCue_StaticNew()
{
  return vtkPVCameraAnimationCue::New();
}

PyObject *PyvtkPVCameraAnimationCue_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCameraAnimationCue_Type, PyvtkPVCameraAnimationCue_Methods,
    "vtkPVCameraAnimationCue",
 &PyvtkPVCameraAnimationCue_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCameraAnimationCue_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVKeyFrameAnimationCue_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVCameraAnimationCue(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCameraAnimationCue_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCameraAnimationCue", o) != 0)
  {
    Py_DECREF(o);
  }

}

