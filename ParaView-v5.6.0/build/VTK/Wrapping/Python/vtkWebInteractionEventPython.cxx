// python wrapper for vtkWebInteractionEvent
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
#include "vtkWebInteractionEvent.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWebInteractionEvent(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWebInteractionEvent_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkWebInteractionEvent_Doc =
  "vtkWebInteractionEvent - \n\n"
  "Superclass: vtkObject\n\n"
;

static PyTypeObject PyvtkWebInteractionEvent_MouseButton_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkWebCorePython.vtkWebInteractionEvent.MouseButton", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkWebInteractionEvent_MouseButton_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkWebInteractionEvent_MouseButton_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkWebInteractionEvent_MouseButton_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkWebInteractionEvent_ModifierKeys_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkWebCorePython.vtkWebInteractionEvent.ModifierKeys", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkWebInteractionEvent_ModifierKeys_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkWebInteractionEvent_ModifierKeys_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkWebInteractionEvent_ModifierKeys_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkWebInteractionEvent_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWebInteractionEvent::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebInteractionEvent::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWebInteractionEvent *tempr = vtkWebInteractionEvent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWebInteractionEvent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebInteractionEvent::NewInstance());

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
PyvtkWebInteractionEvent_SetButtons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetButtons(temp0);
    }
    else
    {
      op->vtkWebInteractionEvent::SetButtons(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetButtons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetButtons() :
      op->vtkWebInteractionEvent::GetButtons());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetModifiers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModifiers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModifiers(temp0);
    }
    else
    {
      op->vtkWebInteractionEvent::SetModifiers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetModifiers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetModifiers() :
      op->vtkWebInteractionEvent::GetModifiers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyCode(temp0);
    }
    else
    {
      op->vtkWebInteractionEvent::SetKeyCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetKeyCode() :
      op->vtkWebInteractionEvent::GetKeyCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetX(temp0);
    }
    else
    {
      op->vtkWebInteractionEvent::SetX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetX() :
      op->vtkWebInteractionEvent::GetX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetY(temp0);
    }
    else
    {
      op->vtkWebInteractionEvent::SetY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetY() :
      op->vtkWebInteractionEvent::GetY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetScroll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScroll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScroll(temp0);
    }
    else
    {
      op->vtkWebInteractionEvent::SetScroll(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetScroll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScroll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScroll() :
      op->vtkWebInteractionEvent::GetScroll());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_SetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepeatCount(temp0);
    }
    else
    {
      op->vtkWebInteractionEvent::SetRepeatCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebInteractionEvent_GetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebInteractionEvent *op = static_cast<vtkWebInteractionEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepeatCount() :
      op->vtkWebInteractionEvent::GetRepeatCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWebInteractionEvent_Methods[] = {
  {"IsTypeOf", PyvtkWebInteractionEvent_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWebInteractionEvent_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWebInteractionEvent_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWebInteractionEvent\nC++: static vtkWebInteractionEvent *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWebInteractionEvent_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWebInteractionEvent\nC++: vtkWebInteractionEvent *NewInstance()\n\n"},
  {"SetButtons", PyvtkWebInteractionEvent_SetButtons, METH_VARARGS,
   "V.SetButtons(int)\nC++: virtual void SetButtons(unsigned int _arg)\n\nSet/Get the mouse buttons state.\n"},
  {"GetButtons", PyvtkWebInteractionEvent_GetButtons, METH_VARARGS,
   "V.GetButtons() -> int\nC++: virtual unsigned int GetButtons()\n\nSet/Get the mouse buttons state.\n"},
  {"SetModifiers", PyvtkWebInteractionEvent_SetModifiers, METH_VARARGS,
   "V.SetModifiers(int)\nC++: virtual void SetModifiers(unsigned int _arg)\n\nSet/Get modifier state.\n"},
  {"GetModifiers", PyvtkWebInteractionEvent_GetModifiers, METH_VARARGS,
   "V.GetModifiers() -> int\nC++: virtual unsigned int GetModifiers()\n\nSet/Get modifier state.\n"},
  {"SetKeyCode", PyvtkWebInteractionEvent_SetKeyCode, METH_VARARGS,
   "V.SetKeyCode(char)\nC++: virtual void SetKeyCode(char _arg)\n\nSet/Get the chart code.\n"},
  {"GetKeyCode", PyvtkWebInteractionEvent_GetKeyCode, METH_VARARGS,
   "V.GetKeyCode() -> char\nC++: virtual char GetKeyCode()\n\nSet/Get the chart code.\n"},
  {"SetX", PyvtkWebInteractionEvent_SetX, METH_VARARGS,
   "V.SetX(float)\nC++: virtual void SetX(double _arg)\n\nSet/Get event position.\n"},
  {"GetX", PyvtkWebInteractionEvent_GetX, METH_VARARGS,
   "V.GetX() -> float\nC++: virtual double GetX()\n\nSet/Get event position.\n"},
  {"SetY", PyvtkWebInteractionEvent_SetY, METH_VARARGS,
   "V.SetY(float)\nC++: virtual void SetY(double _arg)\n\nSet/Get event position.\n"},
  {"GetY", PyvtkWebInteractionEvent_GetY, METH_VARARGS,
   "V.GetY() -> float\nC++: virtual double GetY()\n\nSet/Get event position.\n"},
  {"SetScroll", PyvtkWebInteractionEvent_SetScroll, METH_VARARGS,
   "V.SetScroll(float)\nC++: virtual void SetScroll(double _arg)\n\nSet/Get event position.\n"},
  {"GetScroll", PyvtkWebInteractionEvent_GetScroll, METH_VARARGS,
   "V.GetScroll() -> float\nC++: virtual double GetScroll()\n\nSet/Get event position.\n"},
  {"SetRepeatCount", PyvtkWebInteractionEvent_SetRepeatCount, METH_VARARGS,
   "V.SetRepeatCount(int)\nC++: virtual void SetRepeatCount(int _arg)\n\n"},
  {"GetRepeatCount", PyvtkWebInteractionEvent_GetRepeatCount, METH_VARARGS,
   "V.GetRepeatCount() -> int\nC++: virtual int GetRepeatCount()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWebInteractionEvent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkWebCorePython.vtkWebInteractionEvent", // tp_name
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
  PyvtkWebInteractionEvent_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWebInteractionEvent_StaticNew()
{
  return vtkWebInteractionEvent::New();
}

PyObject *PyvtkWebInteractionEvent_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWebInteractionEvent_Type, PyvtkWebInteractionEvent_Methods,
    "vtkWebInteractionEvent",
 &PyvtkWebInteractionEvent_StaticNew);

  PyTypeObject *pytype = &PyvtkWebInteractionEvent_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkWebInteractionEvent_MouseButton_Type);
  PyvtkWebInteractionEvent_MouseButton_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkWebInteractionEvent_MouseButton_Type);

  o = (PyObject *)&PyvtkWebInteractionEvent_MouseButton_Type;
  if (PyDict_SetItemString(d, "MouseButton", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkWebInteractionEvent_ModifierKeys_Type);
  PyvtkWebInteractionEvent_ModifierKeys_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkWebInteractionEvent_ModifierKeys_Type);

  o = (PyObject *)&PyvtkWebInteractionEvent_ModifierKeys_Type;
  if (PyDict_SetItemString(d, "ModifierKeys", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkWebInteractionEvent::MouseButton cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "LEFT_BUTTON", vtkWebInteractionEvent::LEFT_BUTTON },
        { "MIDDLE_BUTTON", vtkWebInteractionEvent::MIDDLE_BUTTON },
        { "RIGHT_BUTTON", vtkWebInteractionEvent::RIGHT_BUTTON },
      };

    o = PyvtkWebInteractionEvent_MouseButton_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkWebInteractionEvent::ModifierKeys cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "SHIFT_KEY", vtkWebInteractionEvent::SHIFT_KEY },
        { "CTRL_KEY", vtkWebInteractionEvent::CTRL_KEY },
        { "ALT_KEY", vtkWebInteractionEvent::ALT_KEY },
        { "META_KEY", vtkWebInteractionEvent::META_KEY },
      };

    o = PyvtkWebInteractionEvent_ModifierKeys_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWebInteractionEvent(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWebInteractionEvent_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWebInteractionEvent", o) != 0)
  {
    Py_DECREF(o);
  }

}

