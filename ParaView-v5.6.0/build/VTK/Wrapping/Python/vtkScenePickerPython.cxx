// python wrapper for vtkScenePicker
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
#include "vtkScenePicker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScenePicker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkScenePicker_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkScenePicker_Doc =
  "vtkScenePicker - Picks an entire viewport at one shot.\n\n"
  "Superclass: vtkObject\n\n"
  "The Scene picker, unlike conventional pickers picks an entire\n"
  "viewport at one shot and caches the result, which can be retrieved\n"
  "later.\n"
  "   The utility of the class arises during Actor Selection. Let's say\n"
  "you have a couple of polygonal objects in your scene and you wish to\n"
  "have a status bar that indicates the object your mouse is over.\n"
  "Picking repeatedly every time your mouse moves would be very slow.\n"
  "The scene picker automatically picks your viewport every time the\n"
  "camera is changed and caches the information. Additionally, it\n"
  "observes the vtkRenderWindowInteractor to avoid picking during\n"
  "interaction, so that you still maintain your interactivity. In\n"
  "effect, the picker does an additional pick-render of your scene every\n"
  "time you stop interacting with your scene. As an example, see\n"
  "Rendering/TestScenePicker.\n\n"
  "@warning\n"
  "- Unlike a vtkHoverWidget, this class is not timer based. The hover\n"
  "  widget\n"
  "  picks a scene when the mouse is over an actor for a specified\n"
  "duration.\n"
  "- This class uses a vtkHardwareSelector under the hood. Hence, it\n"
  "  will work only for actors that have opaque geomerty and are\n"
  "  rendered by a vtkPolyDataMapper.\n\n"
  "@sa\n"
  "vtkHoverWidget vtkHardwareSelector\n\n";


static PyObject *
PyvtkScenePicker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScenePicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScenePicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScenePicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScenePicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScenePicker *tempr = vtkScenePicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScenePicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScenePicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScenePicker::NewInstance());

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
PyvtkScenePicker_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkScenePicker::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScenePicker_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkScenePicker::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScenePicker_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellId(temp0) :
      op->vtkScenePicker::GetCellId(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScenePicker_GetVertexId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->GetVertexId(temp0) :
      op->vtkScenePicker::GetVertexId(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScenePicker_GetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkProp *tempr = (ap.IsBound() ?
      op->GetViewProp(temp0) :
      op->vtkScenePicker::GetViewProp(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScenePicker_SetEnableVertexPicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableVertexPicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableVertexPicking(temp0);
    }
    else
    {
      op->vtkScenePicker::SetEnableVertexPicking(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScenePicker_GetEnableVertexPicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableVertexPicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableVertexPicking() :
      op->vtkScenePicker::GetEnableVertexPicking());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScenePicker_EnableVertexPickingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVertexPickingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableVertexPickingOn();
    }
    else
    {
      op->vtkScenePicker::EnableVertexPickingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScenePicker_EnableVertexPickingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVertexPickingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScenePicker *op = static_cast<vtkScenePicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableVertexPickingOff();
    }
    else
    {
      op->vtkScenePicker::EnableVertexPickingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkScenePicker_Methods[] = {
  {"IsTypeOf", PyvtkScenePicker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkScenePicker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkScenePicker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkScenePicker\nC++: static vtkScenePicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkScenePicker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkScenePicker\nC++: vtkScenePicker *NewInstance()\n\n"},
  {"SetRenderer", PyvtkScenePicker_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *)\n\nSet the renderer. Scene picks are restricted to the viewport.\n"},
  {"GetRenderer", PyvtkScenePicker_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nSet the renderer. Scene picks are restricted to the viewport.\n"},
  {"GetCellId", PyvtkScenePicker_GetCellId, METH_VARARGS,
   "V.GetCellId([int, int]) -> int\nC++: vtkIdType GetCellId(int displayPos[2])\n\nGet cell id at the pick position. Returns -1 if no cell was\npicked. Makes sense only after Pick has been called.\n"},
  {"GetVertexId", PyvtkScenePicker_GetVertexId, METH_VARARGS,
   "V.GetVertexId([int, int]) -> int\nC++: vtkIdType GetVertexId(int displayPos[2])\n\nGet cell id at the pick position. Returns -1 if no cell was\npicked. Makes sense only after Pick has been called.\n"},
  {"GetViewProp", PyvtkScenePicker_GetViewProp, METH_VARARGS,
   "V.GetViewProp([int, int]) -> vtkProp\nC++: vtkProp *GetViewProp(int displayPos[2])\n\nGet actor at the pick position. Returns NULL if none. Makes sense\nonly after Pick has been called.\n"},
  {"SetEnableVertexPicking", PyvtkScenePicker_SetEnableVertexPicking, METH_VARARGS,
   "V.SetEnableVertexPicking(int)\nC++: virtual void SetEnableVertexPicking(vtkTypeBool _arg)\n\nVertex picking (using the method GetVertexId()), required\nadditional resources and can slow down still render time by\n5-10%. Enabled by default.\n"},
  {"GetEnableVertexPicking", PyvtkScenePicker_GetEnableVertexPicking, METH_VARARGS,
   "V.GetEnableVertexPicking() -> int\nC++: virtual vtkTypeBool GetEnableVertexPicking()\n\nVertex picking (using the method GetVertexId()), required\nadditional resources and can slow down still render time by\n5-10%. Enabled by default.\n"},
  {"EnableVertexPickingOn", PyvtkScenePicker_EnableVertexPickingOn, METH_VARARGS,
   "V.EnableVertexPickingOn()\nC++: virtual void EnableVertexPickingOn()\n\nVertex picking (using the method GetVertexId()), required\nadditional resources and can slow down still render time by\n5-10%. Enabled by default.\n"},
  {"EnableVertexPickingOff", PyvtkScenePicker_EnableVertexPickingOff, METH_VARARGS,
   "V.EnableVertexPickingOff()\nC++: virtual void EnableVertexPickingOff()\n\nVertex picking (using the method GetVertexId()), required\nadditional resources and can slow down still render time by\n5-10%. Enabled by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkScenePicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkScenePicker", // tp_name
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
  PyvtkScenePicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkScenePicker_StaticNew()
{
  return vtkScenePicker::New();
}

PyObject *PyvtkScenePicker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkScenePicker_Type, PyvtkScenePicker_Methods,
    "vtkScenePicker",
 &PyvtkScenePicker_StaticNew);

  PyTypeObject *pytype = &PyvtkScenePicker_Type;

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

void PyVTKAddFile_vtkScenePicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScenePicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScenePicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

