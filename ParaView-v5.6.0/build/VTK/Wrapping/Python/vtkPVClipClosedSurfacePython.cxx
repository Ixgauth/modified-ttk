// python wrapper for vtkPVClipClosedSurface
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
#include "vtkPVClipClosedSurface.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVClipClosedSurface(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVClipClosedSurface_ClassNew(); }

#ifndef DECLARED_PyvtkClipClosedSurface_ClassNew
extern "C" { PyObject *PyvtkClipClosedSurface_ClassNew(); }
#define DECLARED_PyvtkClipClosedSurface_ClassNew
#endif

static const char *PyvtkPVClipClosedSurface_Doc =
  "vtkPVClipClosedSurface - Clipper for generating closed surfaces\n\n"
  "Superclass: vtkClipClosedSurface\n\n"
  "This is a subclass of vtkClipClosedSurface\n\n";


static PyObject *
PyvtkPVClipClosedSurface_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVClipClosedSurface::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVClipClosedSurface::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVClipClosedSurface *tempr = vtkPVClipClosedSurface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVClipClosedSurface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVClipClosedSurface::NewInstance());

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
PyvtkPVClipClosedSurface_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkPVClipClosedSurface::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkPVClipClosedSurface::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkPVClipClosedSurface::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkPVClipClosedSurface::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVClipClosedSurface_SetClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVClipClosedSurface *op = static_cast<vtkPVClipClosedSurface *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetClippingPlane(temp0);
    }
    else
    {
      op->vtkPVClipClosedSurface::SetClippingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVClipClosedSurface_Methods[] = {
  {"IsTypeOf", PyvtkPVClipClosedSurface_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVClipClosedSurface_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVClipClosedSurface_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVClipClosedSurface\nC++: static vtkPVClipClosedSurface *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVClipClosedSurface_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVClipClosedSurface\nC++: vtkPVClipClosedSurface *NewInstance()\n\n"},
  {"SetInsideOut", PyvtkPVClipClosedSurface_SetInsideOut, METH_VARARGS,
   "V.SetInsideOut(int)\nC++: virtual void SetInsideOut(int _arg)\n\nSet/Get the InsideOut flag (off by default)\n"},
  {"GetInsideOut", PyvtkPVClipClosedSurface_GetInsideOut, METH_VARARGS,
   "V.GetInsideOut() -> int\nC++: virtual int GetInsideOut()\n\nSet/Get the InsideOut flag (off by default)\n"},
  {"InsideOutOn", PyvtkPVClipClosedSurface_InsideOutOn, METH_VARARGS,
   "V.InsideOutOn()\nC++: virtual void InsideOutOn()\n\nSet/Get the InsideOut flag (off by default)\n"},
  {"InsideOutOff", PyvtkPVClipClosedSurface_InsideOutOff, METH_VARARGS,
   "V.InsideOutOff()\nC++: virtual void InsideOutOff()\n\nSet/Get the InsideOut flag (off by default)\n"},
  {"SetClippingPlane", PyvtkPVClipClosedSurface_SetClippingPlane, METH_VARARGS,
   "V.SetClippingPlane(vtkPlane)\nC++: void SetClippingPlane(vtkPlane *plane)\n\nSet the clipping plane.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVClipClosedSurface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVClipClosedSurface", // tp_name
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
  PyvtkPVClipClosedSurface_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVClipClosedSurface_StaticNew()
{
  return vtkPVClipClosedSurface::New();
}

PyObject *PyvtkPVClipClosedSurface_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVClipClosedSurface_Type, PyvtkPVClipClosedSurface_Methods,
    "vtkPVClipClosedSurface",
 &PyvtkPVClipClosedSurface_StaticNew);

  PyTypeObject *pytype = &PyvtkPVClipClosedSurface_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkClipClosedSurface_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVClipClosedSurface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVClipClosedSurface_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVClipClosedSurface", o) != 0)
  {
    Py_DECREF(o);
  }

}
