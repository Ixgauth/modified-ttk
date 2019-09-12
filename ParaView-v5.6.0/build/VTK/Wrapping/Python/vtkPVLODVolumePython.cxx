// python wrapper for vtkPVLODVolume
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
#include "vtkPVLODVolume.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVLODVolume(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVLODVolume_ClassNew(); }

#ifndef DECLARED_PyvtkVolume_ClassNew
extern "C" { PyObject *PyvtkVolume_ClassNew(); }
#define DECLARED_PyvtkVolume_ClassNew
#endif

static const char *PyvtkPVLODVolume_Doc =
  "vtkPVLODVolume - an actor that supports multiple levels of detail\n\n"
  "Superclass: vtkVolume\n\n"
  "vtkPVLODVolume is much like vtkPVLODActor except that it works on\n"
  "volumes instead of surfaces.  This just has two mappers: full res and\n"
  "LOD, and this actor knows which is which.\n\n"
  "@sa\n"
  "vtkActor vtkRenderer vtkLODProp3D vtkLODActor\n\n";


static PyObject *
PyvtkPVLODVolume_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVLODVolume::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVLODVolume::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVLODVolume *tempr = vtkPVLODVolume::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVLODVolume *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVLODVolume::NewInstance());

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
PyvtkPVLODVolume_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPVLODVolume::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkPVLODVolume::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPVLODVolume::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkPVLODVolume::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkPVLODVolume::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkAbstractVolumeMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractVolumeMapper"))
  {
    if (ap.IsBound())
    {
      op->SetMapper(temp0);
    }
    else
    {
      op->vtkPVLODVolume::SetMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractVolumeMapper *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkPVLODVolume::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_SetLODMapper_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkAbstractVolumeMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractVolumeMapper"))
  {
    if (ap.IsBound())
    {
      op->SetLODMapper(temp0);
    }
    else
    {
      op->vtkPVLODVolume::SetLODMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVLODVolume_SetLODMapper_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper"))
  {
    if (ap.IsBound())
    {
      op->SetLODMapper(temp0);
    }
    else
    {
      op->vtkPVLODVolume::SetLODMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVLODVolume_SetLODMapper_Methods[] = {
  {nullptr, PyvtkPVLODVolume_SetLODMapper_s1, METH_VARARGS,
   "@V *vtkAbstractVolumeMapper"},
  {nullptr, PyvtkPVLODVolume_SetLODMapper_s2, METH_VARARGS,
   "@V *vtkMapper"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVLODVolume_SetLODMapper(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVLODVolume_SetLODMapper_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLODMapper");
  return nullptr;
}



static PyObject *
PyvtkPVLODVolume_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

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
      op->vtkPVLODVolume::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

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
      op->vtkPVLODVolume::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPVLODVolume::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_SetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  double temp0;
  vtkViewport *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->SetAllocatedRenderTime(temp0, temp1);
    }
    else
    {
      op->vtkPVLODVolume::SetAllocatedRenderTime(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_SetEnableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableLOD(temp0);
    }
    else
    {
      op->vtkPVLODVolume::SetEnableLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_GetEnableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableLOD() :
      op->vtkPVLODVolume::GetEnableLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODVolume_SetPropertyKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODVolume *op = static_cast<vtkPVLODVolume *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetPropertyKeys(temp0);
    }
    else
    {
      op->vtkPVLODVolume::SetPropertyKeys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVLODVolume_Methods[] = {
  {"IsTypeOf", PyvtkPVLODVolume_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVLODVolume_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVLODVolume_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVLODVolume\nC++: static vtkPVLODVolume *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVLODVolume_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVLODVolume\nC++: vtkPVLODVolume *NewInstance()\n\n"},
  {"RenderOpaqueGeometry", PyvtkPVLODVolume_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nThis method is used internally by the rendering process.\n"},
  {"RenderVolumetricGeometry", PyvtkPVLODVolume_RenderVolumetricGeometry, METH_VARARGS,
   "V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *viewport) override;\n\nThis method is used internally by the rendering process.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkPVLODVolume_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nThis method is used internally by the rendering process.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkPVLODVolume_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkPVLODVolume_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetMapper", PyvtkPVLODVolume_SetMapper, METH_VARARGS,
   "V.SetMapper(vtkAbstractVolumeMapper)\nC++: virtual void SetMapper(vtkAbstractVolumeMapper *)\n\nSet the high res input.  Overloads the virtual vtkVolume method.\n"},
  {"GetMapper", PyvtkPVLODVolume_GetMapper, METH_VARARGS,
   "V.GetMapper() -> vtkAbstractVolumeMapper\nC++: vtkAbstractVolumeMapper *GetMapper() override;\n\nSet the high res input.  Overloads the virtual vtkVolume method.\n"},
  {"SetLODMapper", PyvtkPVLODVolume_SetLODMapper, METH_VARARGS,
   "V.SetLODMapper(vtkAbstractVolumeMapper)\nC++: virtual void SetLODMapper(vtkAbstractVolumeMapper *)\nV.SetLODMapper(vtkMapper)\nC++: virtual void SetLODMapper(vtkMapper *)\n\nThis sets the low res input.\n"},
  {"SetProperty", PyvtkPVLODVolume_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkVolumeProperty)\nC++: virtual void SetProperty(vtkVolumeProperty *property)\n    override;\n\nSets the volume property.  Overloads the virtual vtkVolume\nmethod.\n"},
  {"ShallowCopy", PyvtkPVLODVolume_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of an LOD actor. Overloads the virtual vtkProp\nmethod.\n"},
  {"GetBounds", PyvtkPVLODVolume_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nGet the bounds of the current mapper.\n"},
  {"SetAllocatedRenderTime", PyvtkPVLODVolume_SetAllocatedRenderTime, METH_VARARGS,
   "V.SetAllocatedRenderTime(float, vtkViewport)\nC++: void SetAllocatedRenderTime(double t, vtkViewport *v)\n    override;\n\nOverloads the virtual vtkProp method.\n"},
  {"SetEnableLOD", PyvtkPVLODVolume_SetEnableLOD, METH_VARARGS,
   "V.SetEnableLOD(int)\nC++: virtual void SetEnableLOD(int _arg)\n\nWhen set, LODMapper, if present it used, otherwise the regular\nmapper is used.\n"},
  {"GetEnableLOD", PyvtkPVLODVolume_GetEnableLOD, METH_VARARGS,
   "V.GetEnableLOD() -> int\nC++: virtual int GetEnableLOD()\n\nWhen set, LODMapper, if present it used, otherwise the regular\nmapper is used.\n"},
  {"SetPropertyKeys", PyvtkPVLODVolume_SetPropertyKeys, METH_VARARGS,
   "V.SetPropertyKeys(vtkInformation)\nC++: void SetPropertyKeys(vtkInformation *keys) override;\n\nWhen set, LODMapper, if present it used, otherwise the regular\nmapper is used.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVLODVolume_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVLODVolume", // tp_name
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
  PyvtkPVLODVolume_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVLODVolume_StaticNew()
{
  return vtkPVLODVolume::New();
}

PyObject *PyvtkPVLODVolume_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVLODVolume_Type, PyvtkPVLODVolume_Methods,
    "vtkPVLODVolume",
 &PyvtkPVLODVolume_StaticNew);

  PyTypeObject *pytype = &PyvtkPVLODVolume_Type;

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

void PyVTKAddFile_vtkPVLODVolume(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVLODVolume_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVLODVolume", o) != 0)
  {
    Py_DECREF(o);
  }

}

