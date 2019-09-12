// python wrapper for vtkMultiVolume
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
#include "vtkMultiVolume.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiVolume(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMultiVolume_ClassNew(); }

#ifndef DECLARED_PyvtkVolume_ClassNew
extern "C" { PyObject *PyvtkVolume_ClassNew(); }
#define DECLARED_PyvtkVolume_ClassNew
#endif

static const char *PyvtkMultiVolume_Doc =
  "vtkMultiVolume - Represents a world axis-aligned bounding-box\ncontaining a set of volumes in a rendered scene.\n\n"
  "Superclass: vtkVolume\n\n"
  "vtkVolume instances registered in this class can be overlapping. They\n"
  "are intended to be all rendered simultaneously by a\n"
  "vtkGPUVolumeRayCastMapper (inputs should be set directly in the\n"
  "mapper).\n\n"
  "This class holds the full transformation of a bounding-box containing\n"
  "all of the registered volumes.\n\n\n"
  "     + TexToBBox : Texture-to-Data (scaling)\n"
  "     + Matrix : Data-to-World (translation)\n\n"
  "ote This class is intended to be used only by mappers supporting\n"
  "multiple inputs.\n\n"
  "@sa vtkVolume vtkAbstractVolumeMapper vtkGPUVolumeRayCastMapper\n\n";


static PyObject *
PyvtkMultiVolume_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiVolume::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiVolume::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiVolume *tempr = vtkMultiVolume::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiVolume *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiVolume::NewInstance());

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
PyvtkMultiVolume_SetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  vtkVolume *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetVolume(temp0, temp1);
    }
    else
    {
      op->vtkMultiVolume::SetVolume(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkVolume *tempr = (ap.IsBound() ?
      op->GetVolume(temp0) :
      op->vtkMultiVolume::GetVolume(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_RemoveVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveVolume(temp0);
    }
    else
    {
      op->vtkMultiVolume::RemoveVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  vtkVolumeProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkMultiVolume::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkMultiVolume::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkMultiVolume::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMultiVolume::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkMultiVolume::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_GetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrix() :
      op->vtkMultiVolume::GetMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiVolume_GetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetMatrix(temp0);
    }
    else
    {
      op->vtkMultiVolume::GetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiVolume_GetMatrix_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  double save0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetMatrix(temp0);
    }
    else
    {
      op->vtkMultiVolume::GetMatrix(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiVolume_GetMatrix_Methods[] = {
  {nullptr, PyvtkMultiVolume_GetMatrix_s2, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {nullptr, PyvtkMultiVolume_GetMatrix_s3, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiVolume_GetMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiVolume_GetMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMultiVolume_GetMatrix_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMatrix");
  return nullptr;
}



static PyObject *
PyvtkMultiVolume_GetTextureMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetTextureMatrix() :
      op->vtkMultiVolume::GetTextureMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_GetDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataBounds() :
      op->vtkMultiVolume::GetDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_GetBoundsTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetBoundsTime() :
      op->vtkMultiVolume::GetBoundsTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiVolume_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiVolume *op = static_cast<vtkMultiVolume *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkMultiVolume::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiVolume_Methods[] = {
  {"IsTypeOf", PyvtkMultiVolume_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMultiVolume_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMultiVolume_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMultiVolume\nC++: static vtkMultiVolume *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMultiVolume_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMultiVolume\nC++: vtkMultiVolume *NewInstance()\n\n"},
  {"SetVolume", PyvtkMultiVolume_SetVolume, METH_VARARGS,
   "V.SetVolume(vtkVolume, int)\nC++: void SetVolume(vtkVolume *volume, int port=0)\n\nAdd / Remove a vtkVolume instance.\n"},
  {"GetVolume", PyvtkMultiVolume_GetVolume, METH_VARARGS,
   "V.GetVolume(int) -> vtkVolume\nC++: vtkVolume *GetVolume(int port=0)\n\nAdd / Remove a vtkVolume instance.\n"},
  {"RemoveVolume", PyvtkMultiVolume_RemoveVolume, METH_VARARGS,
   "V.RemoveVolume(int)\nC++: void RemoveVolume(int port)\n\nAdd / Remove a vtkVolume instance.\n"},
  {"SetProperty", PyvtkMultiVolume_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkVolumeProperty)\nC++: void SetProperty(vtkVolumeProperty *property) override;\n\nGiven that this class represents a bounding-box only there is no\nproperty directly associated with it (a cannot be set directly).\nThis instance will return the property of the volume registered\nin the 0th port (or nullptr if no volume has been set).\n\\sa vtkVolume\n"},
  {"GetProperty", PyvtkMultiVolume_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkVolumeProperty\nC++: vtkVolumeProperty *GetProperty() override;\n\nGiven that this class represents a bounding-box only there is no\nproperty directly associated with it (a cannot be set directly).\nThis instance will return the property of the volume registered\nin the 0th port (or nullptr if no volume has been set).\n\\sa vtkVolume\n"},
  {"GetBounds", PyvtkMultiVolume_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nComputes the bounds of the box containing all of the vtkVolume\ninstances. Returns the bounds (vtkVolume::Bounds) in world\ncoordinates [xmin, xmax, ymin, ymax, zmin, zmax] but also keeps\ncached the bounds in data coordinates\n(vtkMultiVolume::DataBounds).\n"},
  {"GetMTime", PyvtkMultiVolume_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\n\\sa vtkVolume\n"},
  {"ShallowCopy", PyvtkMultiVolume_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nChecks whether the vtkProp passed is another vtkMultiVolume and\ntries to copy accordingly. Otherwise it falls back to\nvtkVolume::ShallowCopy.\n\\sa vtkVolume\n"},
  {"GetMatrix", PyvtkMultiVolume_GetMatrix, METH_VARARGS,
   "V.GetMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetMatrix() override;\nV.GetMatrix(vtkMatrix4x4)\nC++: virtual void GetMatrix(vtkMatrix4x4 *m)\nV.GetMatrix([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float])\nC++: virtual void GetMatrix(double m[16])\n\nGet a pointer to an internal vtkMatrix4x4. that represents\n"},
  {"GetTextureMatrix", PyvtkMultiVolume_GetTextureMatrix, METH_VARARGS,
   "V.GetTextureMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetTextureMatrix()\n\nReturns the transformation from texture coordinates to data\ncooridinates of the bounding-box. Since this class represents an\naxis-aligned bounding\n-boxThis, this transformation only contains a scaling diagonal.\n"},
  {"GetDataBounds", PyvtkMultiVolume_GetDataBounds, METH_VARARGS,
   "V.GetDataBounds() -> (float, ...)\nC++: double *GetDataBounds()\n\nTotal bounds in data coordinates.\n"},
  {"GetBoundsTime", PyvtkMultiVolume_GetBoundsTime, METH_VARARGS,
   "V.GetBoundsTime() -> int\nC++: vtkMTimeType GetBoundsTime()\n\n"},
  {"RenderVolumetricGeometry", PyvtkMultiVolume_RenderVolumetricGeometry, METH_VARARGS,
   "V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *vp) override;\n\nSince vtkMultiVolume acts like a proxy volume to compute the\nbounding box for its internal vtkVolume instances, there are no\nproperties to be set directly in this instance. For that reason,\nthis override ignores the vtkVolumeProperty check.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMultiVolume_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkMultiVolume", // tp_name
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
  PyvtkMultiVolume_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMultiVolume_StaticNew()
{
  return vtkMultiVolume::New();
}

PyObject *PyvtkMultiVolume_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMultiVolume_Type, PyvtkMultiVolume_Methods,
    "vtkMultiVolume",
 &PyvtkMultiVolume_StaticNew);

  PyTypeObject *pytype = &PyvtkMultiVolume_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkVolume_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMultiVolume(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiVolume_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiVolume", o) != 0)
  {
    Py_DECREF(o);
  }

}

