// python wrapper for vtkMultiSliceContextItem
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
#include "vtkContextMouseEvent.h"
#include "vtkMultiSliceContextItem.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiSliceContextItem(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMultiSliceContextItem_ClassNew(); }

#ifndef DECLARED_PyvtkContextItem_ClassNew
extern "C" { PyObject *PyvtkContextItem_ClassNew(); }
#define DECLARED_PyvtkContextItem_ClassNew
#endif

static const char *PyvtkMultiSliceContextItem_Doc =
  "vtkMultiSliceContextItem - \n\n"
  "Superclass: vtkContextItem\n\n"
;


static PyObject *
PyvtkMultiSliceContextItem_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiSliceContextItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiSliceContextItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiSliceContextItem *tempr = vtkMultiSliceContextItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiSliceContextItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiSliceContextItem::NewInstance());

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
PyvtkMultiSliceContextItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkMultiSliceContextItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkMultiSliceContextItem::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_SetActiveSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveSize(temp0);
    }
    else
    {
      op->vtkMultiSliceContextItem::SetActiveSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_SetEdgeMargin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeMargin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeMargin(temp0);
    }
    else
    {
      op->vtkMultiSliceContextItem::SetEdgeMargin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_GetActiveSliceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveSliceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveSliceIndex() :
      op->vtkMultiSliceContextItem::GetActiveSliceIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkMultiSliceContextItem::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkMultiSliceContextItem::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkMultiSliceContextItem::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_MouseDoubleClickEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseDoubleClickEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseDoubleClickEvent(*temp0) :
      op->vtkMultiSliceContextItem::MouseDoubleClickEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkMultiSliceContextItem::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_GetVisibleSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetVisibleSlices(temp0) :
      op->vtkMultiSliceContextItem::GetVisibleSlices(temp0));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_GetSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetSlices(temp0) :
      op->vtkMultiSliceContextItem::GetSlices(temp0));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_SetSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<bool> store1(2*size1);
  bool *temp1 = store1.Data();
  bool *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetSlices(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMultiSliceContextItem::SetSlices(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_GetSliceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliceValue(temp0) :
      op->vtkMultiSliceContextItem::GetSliceValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiSliceContextItem_GetNumberOfSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiSliceContextItem *op = static_cast<vtkMultiSliceContextItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSlices() :
      op->vtkMultiSliceContextItem::GetNumberOfSlices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiSliceContextItem_Methods[] = {
  {"IsTypeOf", PyvtkMultiSliceContextItem_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMultiSliceContextItem_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMultiSliceContextItem_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMultiSliceContextItem\nC++: static vtkMultiSliceContextItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMultiSliceContextItem_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMultiSliceContextItem\nC++: vtkMultiSliceContextItem *NewInstance()\n\n"},
  {"Paint", PyvtkMultiSliceContextItem_Paint, METH_VARARGS,
   "V.Paint(vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint the texture into a rectangle defined by the bounds. If\nMaskAboveCurve is true and a shape has been provided by a\nsubclass, it draws the texture into the shape\n"},
  {"GetAxis", PyvtkMultiSliceContextItem_GetAxis, METH_VARARGS,
   "V.GetAxis() -> vtkAxis\nC++: vtkAxis *GetAxis()\n\nReturn the Axis on which that ContextItem is based. In order to\nconfigure that item, just configure the Axis itself. (Range +\nPosition)\n"},
  {"SetActiveSize", PyvtkMultiSliceContextItem_SetActiveSize, METH_VARARGS,
   "V.SetActiveSize(int)\nC++: void SetActiveSize(int size)\n\nThe active size define the number of pixel that are going to be\nused for the slider handle.\n"},
  {"SetEdgeMargin", PyvtkMultiSliceContextItem_SetEdgeMargin, METH_VARARGS,
   "V.SetEdgeMargin(int)\nC++: void SetEdgeMargin(int margin)\n\nThe margin used on the side of the Axis.\n"},
  {"GetActiveSliceIndex", PyvtkMultiSliceContextItem_GetActiveSliceIndex, METH_VARARGS,
   "V.GetActiveSliceIndex() -> int\nC++: int GetActiveSliceIndex()\n\nReturns the active slice index. Active slice is only valid when\nthe slice is being updated between mouse-press/release events.\n"},
  {"Hit", PyvtkMultiSliceContextItem_Hit, METH_VARARGS,
   "V.Hit(vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseButtonPressEvent", PyvtkMultiSliceContextItem_MouseButtonPressEvent, METH_VARARGS,
   "V.MouseButtonPressEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event Return true if the item holds the event,\nfalse if the event can be propagated to other items.\n"},
  {"MouseButtonReleaseEvent", PyvtkMultiSliceContextItem_MouseButtonReleaseEvent, METH_VARARGS,
   "V.MouseButtonReleaseEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event. Return true if the item holds the\nevent, false if the event can be propagated to other items.\n"},
  {"MouseDoubleClickEvent", PyvtkMultiSliceContextItem_MouseDoubleClickEvent, METH_VARARGS,
   "V.MouseDoubleClickEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseDoubleClickEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button double click event. Return true if the item holds\nthe event, false if the event can be propagated to other items.\n"},
  {"MouseMoveEvent", PyvtkMultiSliceContextItem_MouseMoveEvent, METH_VARARGS,
   "V.MouseMoveEvent(vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event. Return true if the item holds the event, false\nif the event can be propagated to other items.\n"},
  {"GetVisibleSlices", PyvtkMultiSliceContextItem_GetVisibleSlices, METH_VARARGS,
   "V.GetVisibleSlices(int) -> (float, ...)\nC++: const double *GetVisibleSlices(int &nbSlices)\n\nGet access to the data model. Return a pointer array to the\ndifferent visible slices\n"},
  {"GetSlices", PyvtkMultiSliceContextItem_GetSlices, METH_VARARGS,
   "V.GetSlices(int) -> (float, ...)\nC++: const double *GetSlices(int &nbSlices)\n\nReturns access to slices.\n"},
  {"SetSlices", PyvtkMultiSliceContextItem_SetSlices, METH_VARARGS,
   "V.SetSlices([float, ...], [bool, ...], int)\nC++: void SetSlices(double *values, bool *visibility,\n    int numberOfSlices)\n\nAllow user to programmatically update the data model. Note, this\ndoes not fire any of the slice modification/addition/deletion\nevents.\n"},
  {"GetSliceValue", PyvtkMultiSliceContextItem_GetSliceValue, METH_VARARGS,
   "V.GetSliceValue(int) -> float\nC++: double GetSliceValue(int sliceIndex)\n\nReturn the slice position for a given index\n"},
  {"GetNumberOfSlices", PyvtkMultiSliceContextItem_GetNumberOfSlices, METH_VARARGS,
   "V.GetNumberOfSlices() -> int\nC++: int GetNumberOfSlices()\n\nReturn the number of slices\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMultiSliceContextItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkMultiSliceContextItem", // tp_name
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
  PyvtkMultiSliceContextItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMultiSliceContextItem_StaticNew()
{
  return vtkMultiSliceContextItem::New();
}

PyObject *PyvtkMultiSliceContextItem_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMultiSliceContextItem_Type, PyvtkMultiSliceContextItem_Methods,
    "vtkMultiSliceContextItem",
 &PyvtkMultiSliceContextItem_StaticNew);

  PyTypeObject *pytype = &PyvtkMultiSliceContextItem_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkContextItem_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "AddSliceEvent", vtkMultiSliceContextItem::AddSliceEvent },
        { "RemoveSliceEvent", vtkMultiSliceContextItem::RemoveSliceEvent },
        { "ModifySliceEvent", vtkMultiSliceContextItem::ModifySliceEvent },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMultiSliceContextItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiSliceContextItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiSliceContextItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

