// python wrapper for vtkContextClip
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
#include "vtkContextClip.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContextClip(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContextClip_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractContextItem_ClassNew
extern "C" { PyObject *PyvtkAbstractContextItem_ClassNew(); }
#define DECLARED_PyvtkAbstractContextItem_ClassNew
#endif

static const char *PyvtkContextClip_Doc =
  "vtkContextClip - all children of this item are clipped by the\nspecified area.\n\n"
  "Superclass: vtkAbstractContextItem\n\n"
  "This class can be used to clip the rendering of an item inside a\n"
  "rectangular area.\n\n";


static PyObject *
PyvtkContextClip_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContextClip::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContextClip::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextClip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContextClip *tempr = vtkContextClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextClip *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContextClip::NewInstance());

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
PyvtkContextClip_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkContextClip::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextClip_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkContextClip::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextClip_SetClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetClip(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContextClip::SetClip(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextClip_GetRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  float save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetRect(temp0);
    }
    else
    {
      op->vtkContextClip::GetRect(temp0);
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
PyvtkContextClip_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetX() :
      op->vtkContextClip::GetX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextClip_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetY() :
      op->vtkContextClip::GetY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextClip_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkContextClip::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextClip_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextClip *op = static_cast<vtkContextClip *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkContextClip::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContextClip_Methods[] = {
  {"IsTypeOf", PyvtkContextClip_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContextClip_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContextClip_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContextClip\nC++: static vtkContextClip *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContextClip_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContextClip\nC++: vtkContextClip *NewInstance()\n\n"},
  {"Update", PyvtkContextClip_Update, METH_VARARGS,
   "V.Update()\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkContextClip_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the item, called whenever the item needs to be\ndrawn.\n"},
  {"SetClip", PyvtkContextClip_SetClip, METH_VARARGS,
   "V.SetClip(float, float, float, float)\nC++: virtual void SetClip(float x, float y, float width,\n    float height)\n\nSet the origin, width and height of the clipping rectangle. These\nare in pixel coordinates.\n"},
  {"GetRect", PyvtkContextClip_GetRect, METH_VARARGS,
   "V.GetRect([float, float, float, float])\nC++: virtual void GetRect(float rect[4])\n\nGet the clipping rectangle parameters in pixel coordinates:\n"},
  {"GetX", PyvtkContextClip_GetX, METH_VARARGS,
   "V.GetX() -> float\nC++: virtual float GetX()\n\n"},
  {"GetY", PyvtkContextClip_GetY, METH_VARARGS,
   "V.GetY() -> float\nC++: virtual float GetY()\n\n"},
  {"GetWidth", PyvtkContextClip_GetWidth, METH_VARARGS,
   "V.GetWidth() -> float\nC++: virtual float GetWidth()\n\n"},
  {"GetHeight", PyvtkContextClip_GetHeight, METH_VARARGS,
   "V.GetHeight() -> float\nC++: virtual float GetHeight()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContextClip_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingContext2DPython.vtkContextClip", // tp_name
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
  PyvtkContextClip_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContextClip_StaticNew()
{
  return vtkContextClip::New();
}

PyObject *PyvtkContextClip_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContextClip_Type, PyvtkContextClip_Methods,
    "vtkContextClip",
 &PyvtkContextClip_StaticNew);

  PyTypeObject *pytype = &PyvtkContextClip_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractContextItem_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContextClip(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContextClip_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContextClip", o) != 0)
  {
    Py_DECREF(o);
  }

}

