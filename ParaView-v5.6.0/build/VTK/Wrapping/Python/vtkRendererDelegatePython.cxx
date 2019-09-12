// python wrapper for vtkRendererDelegate
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
#include "vtkRendererDelegate.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRendererDelegate(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRendererDelegate_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkRendererDelegate_Doc =
  "vtkRendererDelegate - Render the props of a vtkRenderer\n\n"
  "Superclass: vtkObject\n\n"
  "vtkRendererDelegate is an abstract class with a pure virtual method\n"
  "Render. This method replaces the Render method of vtkRenderer to\n"
  "allow custom rendering from an external project. A RendererDelegate\n"
  "is connected to a vtkRenderer with method SetDelegate(). An external\n"
  "project just has to provide a concrete implementation of\n"
  "vtkRendererDelegate.\n\n"
  "@sa\n"
  "vtkRenderer\n\n";


static PyObject *
PyvtkRendererDelegate_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRendererDelegate::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRendererDelegate::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRendererDelegate *tempr = vtkRendererDelegate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRendererDelegate *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRendererDelegate::NewInstance());

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
PyvtkRendererDelegate_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    op->Render(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_SetUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUsed(temp0);
    }
    else
    {
      op->vtkRendererDelegate::SetUsed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_GetUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUsed() :
      op->vtkRendererDelegate::GetUsed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_UsedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UsedOn();
    }
    else
    {
      op->vtkRendererDelegate::UsedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_UsedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UsedOff();
    }
    else
    {
      op->vtkRendererDelegate::UsedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRendererDelegate_Methods[] = {
  {"IsTypeOf", PyvtkRendererDelegate_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRendererDelegate_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRendererDelegate_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRendererDelegate\nC++: static vtkRendererDelegate *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRendererDelegate_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRendererDelegate\nC++: vtkRendererDelegate *NewInstance()\n\n"},
  {"Render", PyvtkRendererDelegate_Render, METH_VARARGS,
   "V.Render(vtkRenderer)\nC++: virtual void Render(vtkRenderer *r)\n\nRender the props of vtkRenderer if Used is on.\n"},
  {"SetUsed", PyvtkRendererDelegate_SetUsed, METH_VARARGS,
   "V.SetUsed(bool)\nC++: virtual void SetUsed(bool _arg)\n\nTells if the delegate has to be used by the renderer or not.\nInitial value is off.\n"},
  {"GetUsed", PyvtkRendererDelegate_GetUsed, METH_VARARGS,
   "V.GetUsed() -> bool\nC++: virtual bool GetUsed()\n\nTells if the delegate has to be used by the renderer or not.\nInitial value is off.\n"},
  {"UsedOn", PyvtkRendererDelegate_UsedOn, METH_VARARGS,
   "V.UsedOn()\nC++: virtual void UsedOn()\n\nTells if the delegate has to be used by the renderer or not.\nInitial value is off.\n"},
  {"UsedOff", PyvtkRendererDelegate_UsedOff, METH_VARARGS,
   "V.UsedOff()\nC++: virtual void UsedOff()\n\nTells if the delegate has to be used by the renderer or not.\nInitial value is off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRendererDelegate_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkRendererDelegate", // tp_name
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
  PyvtkRendererDelegate_Doc, // tp_doc
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

PyObject *PyvtkRendererDelegate_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRendererDelegate_Type, PyvtkRendererDelegate_Methods,
    "vtkRendererDelegate",
 nullptr);

  PyTypeObject *pytype = &PyvtkRendererDelegate_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRendererDelegate(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRendererDelegate_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRendererDelegate", o) != 0)
  {
    Py_DECREF(o);
  }

}

