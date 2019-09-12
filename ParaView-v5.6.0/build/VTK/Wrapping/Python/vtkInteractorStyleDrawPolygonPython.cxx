// python wrapper for vtkInteractorStyleDrawPolygon
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
#include "vtkInteractorStyleDrawPolygon.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleDrawPolygon(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorStyleDrawPolygon_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyle_ClassNew
extern "C" { PyObject *PyvtkInteractorStyle_ClassNew(); }
#define DECLARED_PyvtkInteractorStyle_ClassNew
#endif

static const char *PyvtkInteractorStyleDrawPolygon_Doc =
  "vtkInteractorStyleDrawPolygon - draw polygon during mouse move\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "This interactor style allows the user to draw a polygon in the render\n"
  "window using the left mouse button while mouse is moving. When the\n"
  "mouse button is released, a SelectionChangedEvent will be fired.\n\n";


static PyObject *
PyvtkInteractorStyleDrawPolygon_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleDrawPolygon::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleDrawPolygon::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleDrawPolygon *tempr = vtkInteractorStyleDrawPolygon::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleDrawPolygon *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleDrawPolygon::NewInstance());

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
PyvtkInteractorStyleDrawPolygon_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleDrawPolygon::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleDrawPolygon::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleDrawPolygon::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_SetDrawPolygonPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPolygonPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawPolygonPixels(temp0);
    }
    else
    {
      op->vtkInteractorStyleDrawPolygon::SetDrawPolygonPixels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_GetDrawPolygonPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawPolygonPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawPolygonPixels() :
      op->vtkInteractorStyleDrawPolygon::GetDrawPolygonPixels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_DrawPolygonPixelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygonPixelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPolygonPixelsOn();
    }
    else
    {
      op->vtkInteractorStyleDrawPolygon::DrawPolygonPixelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleDrawPolygon_DrawPolygonPixelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygonPixelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleDrawPolygon *op = static_cast<vtkInteractorStyleDrawPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPolygonPixelsOff();
    }
    else
    {
      op->vtkInteractorStyleDrawPolygon::DrawPolygonPixelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleDrawPolygon_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleDrawPolygon_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleDrawPolygon_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleDrawPolygon_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInteractorStyleDrawPolygon\nC++: static vtkInteractorStyleDrawPolygon *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleDrawPolygon_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorStyleDrawPolygon\nC++: vtkInteractorStyleDrawPolygon *NewInstance()\n\n"},
  {"OnMouseMove", PyvtkInteractorStyleDrawPolygon_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove() override;\n\nEvent bindings\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleDrawPolygon_OnLeftButtonDown, METH_VARARGS,
   "V.OnLeftButtonDown()\nC++: void OnLeftButtonDown() override;\n\nEvent bindings\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleDrawPolygon_OnLeftButtonUp, METH_VARARGS,
   "V.OnLeftButtonUp()\nC++: void OnLeftButtonUp() override;\n\nEvent bindings\n"},
  {"SetDrawPolygonPixels", PyvtkInteractorStyleDrawPolygon_SetDrawPolygonPixels, METH_VARARGS,
   "V.SetDrawPolygonPixels(bool)\nC++: virtual void SetDrawPolygonPixels(bool _arg)\n\nWhether to draw polygon in screen pixels. Default is ON\n"},
  {"GetDrawPolygonPixels", PyvtkInteractorStyleDrawPolygon_GetDrawPolygonPixels, METH_VARARGS,
   "V.GetDrawPolygonPixels() -> bool\nC++: virtual bool GetDrawPolygonPixels()\n\nWhether to draw polygon in screen pixels. Default is ON\n"},
  {"DrawPolygonPixelsOn", PyvtkInteractorStyleDrawPolygon_DrawPolygonPixelsOn, METH_VARARGS,
   "V.DrawPolygonPixelsOn()\nC++: virtual void DrawPolygonPixelsOn()\n\nWhether to draw polygon in screen pixels. Default is ON\n"},
  {"DrawPolygonPixelsOff", PyvtkInteractorStyleDrawPolygon_DrawPolygonPixelsOff, METH_VARARGS,
   "V.DrawPolygonPixelsOff()\nC++: virtual void DrawPolygonPixelsOff()\n\nWhether to draw polygon in screen pixels. Default is ON\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorStyleDrawPolygon_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionStylePython.vtkInteractorStyleDrawPolygon", // tp_name
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
  PyvtkInteractorStyleDrawPolygon_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleDrawPolygon_StaticNew()
{
  return vtkInteractorStyleDrawPolygon::New();
}

PyObject *PyvtkInteractorStyleDrawPolygon_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorStyleDrawPolygon_Type, PyvtkInteractorStyleDrawPolygon_Methods,
    "vtkInteractorStyleDrawPolygon",
 &PyvtkInteractorStyleDrawPolygon_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorStyleDrawPolygon_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyle_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleDrawPolygon(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleDrawPolygon_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleDrawPolygon", o) != 0)
  {
    Py_DECREF(o);
  }

}

