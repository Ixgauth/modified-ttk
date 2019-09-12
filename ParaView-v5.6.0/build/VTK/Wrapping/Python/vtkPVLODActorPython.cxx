// python wrapper for vtkPVLODActor
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
#include "vtkPVLODActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVLODActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVLODActor_ClassNew(); }

#ifndef DECLARED_PyvtkActor_ClassNew
extern "C" { PyObject *PyvtkActor_ClassNew(); }
#define DECLARED_PyvtkActor_ClassNew
#endif

static const char *PyvtkPVLODActor_Doc =
  "vtkPVLODActor - an actor that supports multiple levels of detail\n\n"
  "Superclass: vtkActor\n\n"
  "vtkPVLODActor  is a very simple version of vtkLODActor.  Both\n"
  "vtkLODActor and vtkLODProp3D can get confused, and substitute LOD\n"
  "mappers when they are not needed.  This just has two mappers: full\n"
  "res and LOD, and this actor knows which is which.\n\n"
  "@sa\n"
  "vtkActor vtkRenderer vtkLODProp3D vtkLODActor\n\n";


static PyObject *
PyvtkPVLODActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVLODActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVLODActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVLODActor *tempr = vtkPVLODActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVLODActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVLODActor::NewInstance());

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
PyvtkPVLODActor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkMapper *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkMapper"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkPVLODActor::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPVLODActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

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
      op->vtkPVLODActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_SetLODMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

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
      op->vtkPVLODActor::SetLODMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_GetLODMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapper *tempr = (ap.IsBound() ?
      op->GetLODMapper() :
      op->vtkPVLODActor::GetLODMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapper *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkPVLODActor::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkPVLODActor::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

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
      op->vtkPVLODActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPVLODActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_SetEnableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

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
      op->vtkPVLODActor::SetEnableLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_GetEnableLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableLOD() :
      op->vtkPVLODActor::GetEnableLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_SetEnableScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableScaling(temp0);
    }
    else
    {
      op->vtkPVLODActor::SetEnableScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_SetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalingArrayName(temp0);
    }
    else
    {
      op->vtkPVLODActor::SetScalingArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVLODActor_SetScalingFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVLODActor *op = static_cast<vtkPVLODActor *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetScalingFunction(temp0);
    }
    else
    {
      op->vtkPVLODActor::SetScalingFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVLODActor_Methods[] = {
  {"IsTypeOf", PyvtkPVLODActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVLODActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVLODActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVLODActor\nC++: static vtkPVLODActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVLODActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVLODActor\nC++: vtkPVLODActor *NewInstance()\n\n"},
  {"Render", PyvtkPVLODActor_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkMapper)\nC++: void Render(vtkRenderer *, vtkMapper *) override;\n\nThis causes the actor to be rendered. It, in turn, will render\nthe actor's property and then mapper.\n"},
  {"RenderOpaqueGeometry", PyvtkPVLODActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nThis method is used internally by the rendering process. We\noverride the superclass method to properly set the estimated\nrender time.\n"},
  {"ReleaseGraphicsResources", PyvtkPVLODActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetLODMapper", PyvtkPVLODActor_SetLODMapper, METH_VARARGS,
   "V.SetLODMapper(vtkMapper)\nC++: virtual void SetLODMapper(vtkMapper *)\n\nThis sets the low res input.\n"},
  {"GetLODMapper", PyvtkPVLODActor_GetLODMapper, METH_VARARGS,
   "V.GetLODMapper() -> vtkMapper\nC++: virtual vtkMapper *GetLODMapper()\n\nThis sets the low res input.\n"},
  {"GetMapper", PyvtkPVLODActor_GetMapper, METH_VARARGS,
   "V.GetMapper() -> vtkMapper\nC++: vtkMapper *GetMapper() override;\n\nThis is a bit of a hack.  This returns the last mapper used to\nrender. It does this so that compositing can decide if anything\nwas actually renderered.\n"},
  {"Modified", PyvtkPVLODActor_Modified, METH_VARARGS,
   "V.Modified()\nC++: void Modified() override;\n\nWhen this objects gets modified, this method also modifies the\nobject.\n"},
  {"ShallowCopy", PyvtkPVLODActor_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of an LOD actor. Overloads the virtual vtkProp\nmethod.\n"},
  {"GetBounds", PyvtkPVLODActor_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nGet the bounds of the current mapper.\n"},
  {"SetEnableLOD", PyvtkPVLODActor_SetEnableLOD, METH_VARARGS,
   "V.SetEnableLOD(int)\nC++: void SetEnableLOD(int val)\n\nWhen set, LODMapper, if present it used, otherwise the regular\nmapper is used. We deliberately don't change the MTime of the\nactor when toggling EnableLOD state to avoid rebuilding of\nrendering data structures.\n"},
  {"GetEnableLOD", PyvtkPVLODActor_GetEnableLOD, METH_VARARGS,
   "V.GetEnableLOD() -> int\nC++: virtual int GetEnableLOD()\n\n"},
  {"SetEnableScaling", PyvtkPVLODActor_SetEnableScaling, METH_VARARGS,
   "V.SetEnableScaling(int)\nC++: virtual void SetEnableScaling(int v)\n\nFor OSPRay controls sizing of implicit spheres (points) and\ncylinders (lines)\n"},
  {"SetScalingArrayName", PyvtkPVLODActor_SetScalingArrayName, METH_VARARGS,
   "V.SetScalingArrayName(string)\nC++: virtual void SetScalingArrayName(const char *)\n\nFor OSPRay controls sizing of implicit spheres (points) and\ncylinders (lines)\n"},
  {"SetScalingFunction", PyvtkPVLODActor_SetScalingFunction, METH_VARARGS,
   "V.SetScalingFunction(vtkPiecewiseFunction)\nC++: virtual void SetScalingFunction(vtkPiecewiseFunction *pwf)\n\nFor OSPRay controls sizing of implicit spheres (points) and\ncylinders (lines)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVLODActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVLODActor", // tp_name
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
  PyvtkPVLODActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVLODActor_StaticNew()
{
  return vtkPVLODActor::New();
}

PyObject *PyvtkPVLODActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVLODActor_Type, PyvtkPVLODActor_Methods,
    "vtkPVLODActor",
 &PyvtkPVLODActor_StaticNew);

  PyTypeObject *pytype = &PyvtkPVLODActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkActor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVLODActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVLODActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVLODActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

