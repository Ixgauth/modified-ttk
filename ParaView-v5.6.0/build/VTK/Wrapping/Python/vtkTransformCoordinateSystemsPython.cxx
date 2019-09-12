// python wrapper for vtkTransformCoordinateSystems
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
#include "vtkTransformCoordinateSystems.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransformCoordinateSystems(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTransformCoordinateSystems_ClassNew(); }

#ifndef DECLARED_PyvtkPointSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPointSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPointSetAlgorithm_ClassNew
#endif

static const char *PyvtkTransformCoordinateSystems_Doc =
  "vtkTransformCoordinateSystems - transform points into different\ncoordinate systems\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "This filter transforms points from one coordinate system to another.\n"
  "The user must specify the coordinate systems in which the input and\n"
  "output are specified. The user must also specify the VTK viewport\n"
  "(i.e., renderer) in which the transformation occurs.\n\n"
  "@sa\n"
  "vtkCoordinate vtkTransformFilter vtkTransformPolyData\n"
  "vtkPolyDataMapper2D\n\n";


static PyObject *
PyvtkTransformCoordinateSystems_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransformCoordinateSystems::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformCoordinateSystems::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransformCoordinateSystems *tempr = vtkTransformCoordinateSystems::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransformCoordinateSystems *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformCoordinateSystems::NewInstance());

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
PyvtkTransformCoordinateSystems_SetInputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputCoordinateSystem(temp0);
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetInputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputCoordinateSystem() :
      op->vtkTransformCoordinateSystems::GetInputCoordinateSystem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystemToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputCoordinateSystemToDisplay();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystemToDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystemToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputCoordinateSystemToViewport();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystemToViewport();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystemToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputCoordinateSystemToWorld();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystemToWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputCoordinateSystem(temp0);
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputCoordinateSystem() :
      op->vtkTransformCoordinateSystems::GetOutputCoordinateSystem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystemToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputCoordinateSystemToDisplay();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystemToDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystemToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputCoordinateSystemToViewport();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystemToViewport();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystemToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputCoordinateSystemToWorld();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystemToWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTransformCoordinateSystems::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0);
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewport *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkTransformCoordinateSystems::GetViewport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformCoordinateSystems_Methods[] = {
  {"IsTypeOf", PyvtkTransformCoordinateSystems_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type information and printing.\n"},
  {"IsA", PyvtkTransformCoordinateSystems_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type information and printing.\n"},
  {"SafeDownCast", PyvtkTransformCoordinateSystems_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTransformCoordinateSystems\nC++: static vtkTransformCoordinateSystems *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for type information and printing.\n"},
  {"NewInstance", PyvtkTransformCoordinateSystems_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTransformCoordinateSystems\nC++: vtkTransformCoordinateSystems *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {"SetInputCoordinateSystem", PyvtkTransformCoordinateSystems_SetInputCoordinateSystem, METH_VARARGS,
   "V.SetInputCoordinateSystem(int)\nC++: virtual void SetInputCoordinateSystem(int _arg)\n\nSet/get the coordinate system in which the input is specified.\nThe current options are World, Viewport, and Display. By default\nthe input coordinate system is World.\n"},
  {"GetInputCoordinateSystem", PyvtkTransformCoordinateSystems_GetInputCoordinateSystem, METH_VARARGS,
   "V.GetInputCoordinateSystem() -> int\nC++: virtual int GetInputCoordinateSystem()\n\nSet/get the coordinate system in which the input is specified.\nThe current options are World, Viewport, and Display. By default\nthe input coordinate system is World.\n"},
  {"SetInputCoordinateSystemToDisplay", PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToDisplay, METH_VARARGS,
   "V.SetInputCoordinateSystemToDisplay()\nC++: void SetInputCoordinateSystemToDisplay()\n\nSet/get the coordinate system in which the input is specified.\nThe current options are World, Viewport, and Display. By default\nthe input coordinate system is World.\n"},
  {"SetInputCoordinateSystemToViewport", PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToViewport, METH_VARARGS,
   "V.SetInputCoordinateSystemToViewport()\nC++: void SetInputCoordinateSystemToViewport()\n\nSet/get the coordinate system in which the input is specified.\nThe current options are World, Viewport, and Display. By default\nthe input coordinate system is World.\n"},
  {"SetInputCoordinateSystemToWorld", PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToWorld, METH_VARARGS,
   "V.SetInputCoordinateSystemToWorld()\nC++: void SetInputCoordinateSystemToWorld()\n\nSet/get the coordinate system in which the input is specified.\nThe current options are World, Viewport, and Display. By default\nthe input coordinate system is World.\n"},
  {"SetOutputCoordinateSystem", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystem, METH_VARARGS,
   "V.SetOutputCoordinateSystem(int)\nC++: virtual void SetOutputCoordinateSystem(int _arg)\n\nSet/get the coordinate system to which to transform the output.\nThe current options are World, Viewport, and Display. By default\nthe output coordinate system is Display.\n"},
  {"GetOutputCoordinateSystem", PyvtkTransformCoordinateSystems_GetOutputCoordinateSystem, METH_VARARGS,
   "V.GetOutputCoordinateSystem() -> int\nC++: virtual int GetOutputCoordinateSystem()\n\nSet/get the coordinate system to which to transform the output.\nThe current options are World, Viewport, and Display. By default\nthe output coordinate system is Display.\n"},
  {"SetOutputCoordinateSystemToDisplay", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToDisplay, METH_VARARGS,
   "V.SetOutputCoordinateSystemToDisplay()\nC++: void SetOutputCoordinateSystemToDisplay()\n\nSet/get the coordinate system to which to transform the output.\nThe current options are World, Viewport, and Display. By default\nthe output coordinate system is Display.\n"},
  {"SetOutputCoordinateSystemToViewport", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToViewport, METH_VARARGS,
   "V.SetOutputCoordinateSystemToViewport()\nC++: void SetOutputCoordinateSystemToViewport()\n\nSet/get the coordinate system to which to transform the output.\nThe current options are World, Viewport, and Display. By default\nthe output coordinate system is Display.\n"},
  {"SetOutputCoordinateSystemToWorld", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToWorld, METH_VARARGS,
   "V.SetOutputCoordinateSystemToWorld()\nC++: void SetOutputCoordinateSystemToWorld()\n\nSet/get the coordinate system to which to transform the output.\nThe current options are World, Viewport, and Display. By default\nthe output coordinate system is Display.\n"},
  {"GetMTime", PyvtkTransformCoordinateSystems_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the instance of vtkCoordinate.\n"},
  {"SetViewport", PyvtkTransformCoordinateSystems_SetViewport, METH_VARARGS,
   "V.SetViewport(vtkViewport)\nC++: void SetViewport(vtkViewport *viewport)\n\nIn order for a successful coordinate transformation to occur, an\ninstance of vtkViewport (e.g., a VTK renderer) must be specified.\nNOTE: this is a raw pointer, not a weak pointer nor a reference\ncounted object, to avoid reference cycle loop between rendering\nclasses and filter classes.\n"},
  {"GetViewport", PyvtkTransformCoordinateSystems_GetViewport, METH_VARARGS,
   "V.GetViewport() -> vtkViewport\nC++: virtual vtkViewport *GetViewport()\n\nIn order for a successful coordinate transformation to occur, an\ninstance of vtkViewport (e.g., a VTK renderer) must be specified.\nNOTE: this is a raw pointer, not a weak pointer nor a reference\ncounted object, to avoid reference cycle loop between rendering\nclasses and filter classes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTransformCoordinateSystems_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkTransformCoordinateSystems", // tp_name
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
  PyvtkTransformCoordinateSystems_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransformCoordinateSystems_StaticNew()
{
  return vtkTransformCoordinateSystems::New();
}

PyObject *PyvtkTransformCoordinateSystems_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTransformCoordinateSystems_Type, PyvtkTransformCoordinateSystems_Methods,
    "vtkTransformCoordinateSystems",
 &PyvtkTransformCoordinateSystems_StaticNew);

  PyTypeObject *pytype = &PyvtkTransformCoordinateSystems_Type;

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

void PyVTKAddFile_vtkTransformCoordinateSystems(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransformCoordinateSystems_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformCoordinateSystems", o) != 0)
  {
    Py_DECREF(o);
  }

}

