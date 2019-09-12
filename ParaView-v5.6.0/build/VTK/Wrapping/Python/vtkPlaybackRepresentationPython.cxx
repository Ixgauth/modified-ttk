// python wrapper for vtkPlaybackRepresentation
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
#include "vtkPlaybackRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlaybackRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlaybackRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkBorderRepresentation_ClassNew
extern "C" { PyObject *PyvtkBorderRepresentation_ClassNew(); }
#define DECLARED_PyvtkBorderRepresentation_ClassNew
#endif

static const char *PyvtkPlaybackRepresentation_Doc =
  "vtkPlaybackRepresentation - represent the vtkPlaybackWidget\n\n"
  "Superclass: vtkBorderRepresentation\n\n"
  "This class is used to represent the vtkPlaybackWidget. Besides\n"
  "defining geometry, this class defines a series of virtual method\n"
  "stubs that are meant to be subclassed by applications for controlling\n"
  "playback.\n\n"
  "@sa\n"
  "vtkPlaybackWidget\n\n";


static PyObject *
PyvtkPlaybackRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlaybackRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlaybackRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlaybackRepresentation *tempr = vtkPlaybackRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaybackRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlaybackRepresentation::NewInstance());

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
PyvtkPlaybackRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkPlaybackRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Play();
    }
    else
    {
      op->vtkPlaybackRepresentation::Play();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Stop();
    }
    else
    {
      op->vtkPlaybackRepresentation::Stop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_ForwardOneFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForwardOneFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForwardOneFrame();
    }
    else
    {
      op->vtkPlaybackRepresentation::ForwardOneFrame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_BackwardOneFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackwardOneFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackwardOneFrame();
    }
    else
    {
      op->vtkPlaybackRepresentation::BackwardOneFrame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_JumpToBeginning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpToBeginning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JumpToBeginning();
    }
    else
    {
      op->vtkPlaybackRepresentation::JumpToBeginning();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_JumpToEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpToEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JumpToEnd();
    }
    else
    {
      op->vtkPlaybackRepresentation::JumpToEnd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkPlaybackRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetSize(temp0);
    }
    else
    {
      op->vtkPlaybackRepresentation::GetSize(temp0);
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


static PyObject *
PyvtkPlaybackRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkPlaybackRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

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
      op->vtkPlaybackRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkPlaybackRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPlaybackRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPlaybackRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackRepresentation *op = static_cast<vtkPlaybackRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkPlaybackRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlaybackRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPlaybackRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class methods.\n"},
  {"IsA", PyvtkPlaybackRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class methods.\n"},
  {"SafeDownCast", PyvtkPlaybackRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlaybackRepresentation\nC++: static vtkPlaybackRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK class methods.\n"},
  {"NewInstance", PyvtkPlaybackRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlaybackRepresentation\nC++: vtkPlaybackRepresentation *NewInstance()\n\nStandard VTK class methods.\n"},
  {"GetProperty", PyvtkPlaybackRepresentation_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetProperty()\n\nBy obtaining this property you can specify the properties of the\nrepresentation.\n"},
  {"Play", PyvtkPlaybackRepresentation_Play, METH_VARARGS,
   "V.Play()\nC++: virtual void Play()\n\nVirtual callbacks that subclasses should implement.\n"},
  {"Stop", PyvtkPlaybackRepresentation_Stop, METH_VARARGS,
   "V.Stop()\nC++: virtual void Stop()\n\n"},
  {"ForwardOneFrame", PyvtkPlaybackRepresentation_ForwardOneFrame, METH_VARARGS,
   "V.ForwardOneFrame()\nC++: virtual void ForwardOneFrame()\n\n"},
  {"BackwardOneFrame", PyvtkPlaybackRepresentation_BackwardOneFrame, METH_VARARGS,
   "V.BackwardOneFrame()\nC++: virtual void BackwardOneFrame()\n\n"},
  {"JumpToBeginning", PyvtkPlaybackRepresentation_JumpToBeginning, METH_VARARGS,
   "V.JumpToBeginning()\nC++: virtual void JumpToBeginning()\n\n"},
  {"JumpToEnd", PyvtkPlaybackRepresentation_JumpToEnd, METH_VARARGS,
   "V.JumpToEnd()\nC++: virtual void JumpToEnd()\n\n"},
  {"BuildRepresentation", PyvtkPlaybackRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSatisfy the superclasses' API.\n"},
  {"GetSize", PyvtkPlaybackRepresentation_GetSize, METH_VARARGS,
   "V.GetSize([float, float])\nC++: void GetSize(double size[2]) override;\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {"GetActors2D", PyvtkPlaybackRepresentation_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: void GetActors2D(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkPlaybackRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOverlay", PyvtkPlaybackRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkPlaybackRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkPlaybackRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkPlaybackRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlaybackRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkPlaybackRepresentation", // tp_name
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
  PyvtkPlaybackRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlaybackRepresentation_StaticNew()
{
  return vtkPlaybackRepresentation::New();
}

PyObject *PyvtkPlaybackRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlaybackRepresentation_Type, PyvtkPlaybackRepresentation_Methods,
    "vtkPlaybackRepresentation",
 &PyvtkPlaybackRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPlaybackRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkBorderRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlaybackRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlaybackRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlaybackRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

