// python wrapper for vtkVolumePicker
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
#include "vtkVolumePicker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumePicker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVolumePicker_ClassNew(); }

#ifndef DECLARED_PyvtkCellPicker_ClassNew
extern "C" { PyObject *PyvtkCellPicker_ClassNew(); }
#define DECLARED_PyvtkCellPicker_ClassNew
#endif

static const char *PyvtkVolumePicker_Doc =
  "vtkVolumePicker - ray-cast picker enhanced for volumes\n\n"
  "Superclass: vtkCellPicker\n\n"
  "vtkVolumePicker is a subclass of vtkCellPicker.  It has one advantage\n"
  "over vtkCellPicker for volumes: it will be able to correctly perform\n"
  "picking when CroppingPlanes are present.  This isn't possible for vtkCellPicker since it\n"
  "doesn't link to the VolumeRendering classes and hence cannot access\n"
  "information about the CroppingPlanes.\n\n"
  "@sa\n"
  "vtkPicker vtkPointPicker vtkCellPicker\n\n"
  "@par Thanks: This class was contributed to VTK by David Gobbi on\n"
  "behalf of Atamai Inc.\n\n";


static PyObject *
PyvtkVolumePicker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumePicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumePicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumePicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumePicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumePicker *tempr = vtkVolumePicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumePicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumePicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumePicker::NewInstance());

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
PyvtkVolumePicker_SetPickCroppingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickCroppingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickCroppingPlanes(temp0);
    }
    else
    {
      op->vtkVolumePicker::SetPickCroppingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumePicker_PickCroppingPlanesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickCroppingPlanesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickCroppingPlanesOn();
    }
    else
    {
      op->vtkVolumePicker::PickCroppingPlanesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumePicker_PickCroppingPlanesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickCroppingPlanesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickCroppingPlanesOff();
    }
    else
    {
      op->vtkVolumePicker::PickCroppingPlanesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumePicker_GetPickCroppingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickCroppingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickCroppingPlanes() :
      op->vtkVolumePicker::GetPickCroppingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumePicker_GetCroppingPlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingPlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumePicker *op = static_cast<vtkVolumePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCroppingPlaneId() :
      op->vtkVolumePicker::GetCroppingPlaneId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumePicker_Methods[] = {
  {"IsTypeOf", PyvtkVolumePicker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumePicker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumePicker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVolumePicker\nC++: static vtkVolumePicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumePicker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVolumePicker\nC++: vtkVolumePicker *NewInstance()\n\n"},
  {"SetPickCroppingPlanes", PyvtkVolumePicker_SetPickCroppingPlanes, METH_VARARGS,
   "V.SetPickCroppingPlanes(int)\nC++: virtual void SetPickCroppingPlanes(vtkTypeBool _arg)\n\nSet whether to pick the cropping planes of props that have them.\nIf this is set, then the pick will be done on the cropping planes\nrather than on the data. The GetCroppingPlaneId() method will\nreturn the index of the cropping plane of the volume that was\npicked.  This setting is only relevant to the picking of volumes.\n"},
  {"PickCroppingPlanesOn", PyvtkVolumePicker_PickCroppingPlanesOn, METH_VARARGS,
   "V.PickCroppingPlanesOn()\nC++: virtual void PickCroppingPlanesOn()\n\nSet whether to pick the cropping planes of props that have them.\nIf this is set, then the pick will be done on the cropping planes\nrather than on the data. The GetCroppingPlaneId() method will\nreturn the index of the cropping plane of the volume that was\npicked.  This setting is only relevant to the picking of volumes.\n"},
  {"PickCroppingPlanesOff", PyvtkVolumePicker_PickCroppingPlanesOff, METH_VARARGS,
   "V.PickCroppingPlanesOff()\nC++: virtual void PickCroppingPlanesOff()\n\nSet whether to pick the cropping planes of props that have them.\nIf this is set, then the pick will be done on the cropping planes\nrather than on the data. The GetCroppingPlaneId() method will\nreturn the index of the cropping plane of the volume that was\npicked.  This setting is only relevant to the picking of volumes.\n"},
  {"GetPickCroppingPlanes", PyvtkVolumePicker_GetPickCroppingPlanes, METH_VARARGS,
   "V.GetPickCroppingPlanes() -> int\nC++: virtual vtkTypeBool GetPickCroppingPlanes()\n\nSet whether to pick the cropping planes of props that have them.\nIf this is set, then the pick will be done on the cropping planes\nrather than on the data. The GetCroppingPlaneId() method will\nreturn the index of the cropping plane of the volume that was\npicked.  This setting is only relevant to the picking of volumes.\n"},
  {"GetCroppingPlaneId", PyvtkVolumePicker_GetCroppingPlaneId, METH_VARARGS,
   "V.GetCroppingPlaneId() -> int\nC++: virtual int GetCroppingPlaneId()\n\nGet the index of the cropping plane that the pick ray passed\nthrough on its way to the prop. This will be set regardless of\nwhether PickCroppingPlanes is on.  The crop planes are ordered as\nfollows: xmin, xmax, ymin, ymax, zmin, zmax.  If the volume is\nnot cropped, the value will bet set to -1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVolumePicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkVolumePicker", // tp_name
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
  PyvtkVolumePicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolumePicker_StaticNew()
{
  return vtkVolumePicker::New();
}

PyObject *PyvtkVolumePicker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVolumePicker_Type, PyvtkVolumePicker_Methods,
    "vtkVolumePicker",
 &PyvtkVolumePicker_StaticNew);

  PyTypeObject *pytype = &PyvtkVolumePicker_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCellPicker_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolumePicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumePicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumePicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

