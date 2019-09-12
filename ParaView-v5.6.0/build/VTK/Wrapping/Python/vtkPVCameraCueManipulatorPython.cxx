// python wrapper for vtkPVCameraCueManipulator
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
#include "vtkPVCameraCueManipulator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCameraCueManipulator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCameraCueManipulator_ClassNew(); }

#ifndef DECLARED_PyvtkPVKeyFrameCueManipulator_ClassNew
extern "C" { PyObject *PyvtkPVKeyFrameCueManipulator_ClassNew(); }
#define DECLARED_PyvtkPVKeyFrameCueManipulator_ClassNew
#endif

static const char *PyvtkPVCameraCueManipulator_Doc =
  "vtkPVCameraCueManipulator - no description provided.\n\n"
  "Superclass: vtkPVKeyFrameCueManipulator\n\n"
;

static PyTypeObject PyvtkPVCameraCueManipulator_Modes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVCameraCueManipulator.Modes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkPVCameraCueManipulator_Modes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVCameraCueManipulator_Modes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVCameraCueManipulator_Modes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPVCameraCueManipulator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCameraCueManipulator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCameraCueManipulator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCameraCueManipulator *tempr = vtkPVCameraCueManipulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCameraCueManipulator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCameraCueManipulator::NewInstance());

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
PyvtkPVCameraCueManipulator_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

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
      op->vtkPVCameraCueManipulator::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkPVCameraCueManipulator::GetModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkPVCameraCueManipulator::GetModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkPVCameraCueManipulator::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraCueManipulator_SetDataSourceProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSourceProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraCueManipulator *op = static_cast<vtkPVCameraCueManipulator *>(vp);

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
      op->vtkPVCameraCueManipulator::SetDataSourceProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCameraCueManipulator_Methods[] = {
  {"IsTypeOf", PyvtkPVCameraCueManipulator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCameraCueManipulator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCameraCueManipulator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCameraCueManipulator\nC++: static vtkPVCameraCueManipulator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCameraCueManipulator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCameraCueManipulator\nC++: vtkPVCameraCueManipulator *NewInstance()\n\n"},
  {"SetMode", PyvtkPVCameraCueManipulator_SetMode, METH_VARARGS,
   "V.SetMode(int)\nC++: virtual void SetMode(int _arg)\n\nThis manipulator has three modes:\n\\li CAMERA - the traditional mode using vtkCameraInterpolator\n    where camera\nvalues are directly interpolated.\n\\li PATH - the easy-to-use path  based interpolation where the\n    camera\nposition/camera focal point paths can be explicitly specified. We\nmay eventually deprecate CAMERA mode since it may run out of\nusability as PATH mode matures. So the code precariously meanders\nbetween the two right now, but deprecating the old should help\nclean that up.\n\\li FOLLOW_DATA - the camera will follow the data set with the\nSetDataSourceProxy() method.\n"},
  {"GetModeMinValue", PyvtkPVCameraCueManipulator_GetModeMinValue, METH_VARARGS,
   "V.GetModeMinValue() -> int\nC++: virtual int GetModeMinValue()\n\nThis manipulator has three modes:\n\\li CAMERA - the traditional mode using vtkCameraInterpolator\n    where camera\nvalues are directly interpolated.\n\\li PATH - the easy-to-use path  based interpolation where the\n    camera\nposition/camera focal point paths can be explicitly specified. We\nmay eventually deprecate CAMERA mode since it may run out of\nusability as PATH mode matures. So the code precariously meanders\nbetween the two right now, but deprecating the old should help\nclean that up.\n\\li FOLLOW_DATA - the camera will follow the data set with the\nSetDataSourceProxy() method.\n"},
  {"GetModeMaxValue", PyvtkPVCameraCueManipulator_GetModeMaxValue, METH_VARARGS,
   "V.GetModeMaxValue() -> int\nC++: virtual int GetModeMaxValue()\n\nThis manipulator has three modes:\n\\li CAMERA - the traditional mode using vtkCameraInterpolator\n    where camera\nvalues are directly interpolated.\n\\li PATH - the easy-to-use path  based interpolation where the\n    camera\nposition/camera focal point paths can be explicitly specified. We\nmay eventually deprecate CAMERA mode since it may run out of\nusability as PATH mode matures. So the code precariously meanders\nbetween the two right now, but deprecating the old should help\nclean that up.\n\\li FOLLOW_DATA - the camera will follow the data set with the\nSetDataSourceProxy() method.\n"},
  {"GetMode", PyvtkPVCameraCueManipulator_GetMode, METH_VARARGS,
   "V.GetMode() -> int\nC++: virtual int GetMode()\n\nThis manipulator has three modes:\n\\li CAMERA - the traditional mode using vtkCameraInterpolator\n    where camera\nvalues are directly interpolated.\n\\li PATH - the easy-to-use path  based interpolation where the\n    camera\nposition/camera focal point paths can be explicitly specified. We\nmay eventually deprecate CAMERA mode since it may run out of\nusability as PATH mode matures. So the code precariously meanders\nbetween the two right now, but deprecating the old should help\nclean that up.\n\\li FOLLOW_DATA - the camera will follow the data set with the\nSetDataSourceProxy() method.\n"},
  {"SetDataSourceProxy", PyvtkPVCameraCueManipulator_SetDataSourceProxy, METH_VARARGS,
   "V.SetDataSourceProxy(vtkSMProxy)\nC++: void SetDataSourceProxy(vtkSMProxy *dataSourceProxy)\n\nSet the data source proxy. This is used when in the FOLLOW_DATA\nmode. The camera will track the data referred to by the data\nsource proxy.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCameraCueManipulator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVCameraCueManipulator", // tp_name
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
  PyvtkPVCameraCueManipulator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCameraCueManipulator_StaticNew()
{
  return vtkPVCameraCueManipulator::New();
}

PyObject *PyvtkPVCameraCueManipulator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCameraCueManipulator_Type, PyvtkPVCameraCueManipulator_Methods,
    "vtkPVCameraCueManipulator",
 &PyvtkPVCameraCueManipulator_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCameraCueManipulator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVKeyFrameCueManipulator_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPVCameraCueManipulator_Modes_Type);
  PyvtkPVCameraCueManipulator_Modes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVCameraCueManipulator_Modes_Type);

  o = (PyObject *)&PyvtkPVCameraCueManipulator_Modes_Type;
  if (PyDict_SetItemString(d, "Modes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPVCameraCueManipulator::Modes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "CAMERA", vtkPVCameraCueManipulator::CAMERA },
        { "PATH", vtkPVCameraCueManipulator::PATH },
        { "FOLLOW_DATA", vtkPVCameraCueManipulator::FOLLOW_DATA },
      };

    o = PyvtkPVCameraCueManipulator_Modes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVCameraCueManipulator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCameraCueManipulator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCameraCueManipulator", o) != 0)
  {
    Py_DECREF(o);
  }

}

