// python wrapper for vtkFixedPointVolumeRayCastCompositeGOShadeHelper
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
#include "vtkFixedPointVolumeRayCastCompositeGOShadeHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeGOShadeHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_ClassNew(); }

#ifndef DECLARED_PyvtkFixedPointVolumeRayCastHelper_ClassNew
extern "C" { PyObject *PyvtkFixedPointVolumeRayCastHelper_ClassNew(); }
#define DECLARED_PyvtkFixedPointVolumeRayCastHelper_ClassNew
#endif

static const char *PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Doc =
  "vtkFixedPointVolumeRayCastCompositeGOShadeHelper - A helper that\ngenerates composite images for the volume ray cast mapper\n\n"
  "Superclass: vtkFixedPointVolumeRayCastHelper\n\n"
  "This is one of the helper classes for the\n"
  "vtkFixedPointVolumeRayCastMapper. It will generate composite images\n"
  "using an alpha blending operation. This class should not be used\n"
  "directly, it is a helper class for the mapper and has no user-level\n"
  "API.\n\n"
  "@sa\n"
  "vtkFixedPointVolumeRayCastMapper\n\n";


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFixedPointVolumeRayCastCompositeGOShadeHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeGOShadeHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFixedPointVolumeRayCastCompositeGOShadeHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFixedPointVolumeRayCastCompositeGOShadeHelper *tempr = vtkFixedPointVolumeRayCastCompositeGOShadeHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeGOShadeHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedPointVolumeRayCastCompositeGOShadeHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFixedPointVolumeRayCastCompositeGOShadeHelper::NewInstance());

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
PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_GenerateImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeGOShadeHelper *>(vp);

  int temp0;
  int temp1;
  vtkVolume *temp2 = nullptr;
  vtkFixedPointVolumeRayCastMapper *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkVolume") &&
      ap.GetVTKObject(temp3, "vtkFixedPointVolumeRayCastMapper"))
  {
    if (ap.IsBound())
    {
      op->GenerateImage(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastCompositeGOShadeHelper::GenerateImage(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Methods[] = {
  {"IsTypeOf", PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkFixedPointVolumeRayCastCompositeGOShadeHelper\nC++: static vtkFixedPointVolumeRayCastCompositeGOShadeHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_NewInstance, METH_VARARGS,
   "V.NewInstance()\n    -> vtkFixedPointVolumeRayCastCompositeGOShadeHelper\nC++: vtkFixedPointVolumeRayCastCompositeGOShadeHelper *NewInstance(\n    )\n\n"},
  {"GenerateImage", PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_GenerateImage, METH_VARARGS,
   "V.GenerateImage(int, int, vtkVolume,\n    vtkFixedPointVolumeRayCastMapper)\nC++: void GenerateImage(int threadID, int threadCount,\n    vtkVolume *vol, vtkFixedPointVolumeRayCastMapper *mapper)\n    override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkFixedPointVolumeRayCastCompositeGOShadeHelper", // tp_name
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
  PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_StaticNew()
{
  return vtkFixedPointVolumeRayCastCompositeGOShadeHelper::New();
}

PyObject *PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Type, PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Methods,
    "vtkFixedPointVolumeRayCastCompositeGOShadeHelper",
 &PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkFixedPointVolumeRayCastHelper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeGOShadeHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFixedPointVolumeRayCastCompositeGOShadeHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFixedPointVolumeRayCastCompositeGOShadeHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

