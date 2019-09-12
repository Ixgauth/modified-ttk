// python wrapper for vtkEvent
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
#include "vtkEvent.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEvent(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEvent_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkEvent_Doc =
  "vtkEvent - a complete specification of a VTK event including all\nmodifiers\n\n"
  "Superclass: vtkObject\n\n"
  "vtkEvent is a class that fully describes a VTK event. It is used by\n"
  "the widgets to help specify the mapping between VTK events and widget\n"
  "events.\n\n";

static PyTypeObject PyvtkEvent_EventModifiers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkEvent.EventModifiers", // tp_name
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

PyObject *PyvtkEvent_EventModifiers_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkEvent_EventModifiers_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkEvent_EventModifiers_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkEvent_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEvent::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEvent::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEvent *tempr = vtkEvent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEvent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEvent::NewInstance());

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
PyvtkEvent_SetEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEventId(temp0);
    }
    else
    {
      op->vtkEvent::SetEventId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_GetEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetEventId() :
      op->vtkEvent::GetEventId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_SetModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModifier(temp0);
    }
    else
    {
      op->vtkEvent::SetModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_GetModifier_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModifier() :
      op->vtkEvent::GetModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEvent_GetModifier_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetModifier");

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    int tempr = vtkEvent::GetModifier(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEvent_GetModifier(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkEvent_GetModifier_s1(self, args);
    case 1:
      return PyvtkEvent_GetModifier_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetModifier");
  return nullptr;
}



static PyObject *
PyvtkEvent_SetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

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
      op->vtkEvent::SetKeyCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetKeyCode() :
      op->vtkEvent::GetKeyCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_SetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

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
      op->vtkEvent::SetRepeatCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_GetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepeatCount() :
      op->vtkEvent::GetRepeatCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_SetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeySym(temp0);
    }
    else
    {
      op->vtkEvent::SetKeySym(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetKeySym() :
      op->vtkEvent::GetKeySym());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEvent_Methods[] = {
  {"IsTypeOf", PyvtkEvent_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard macros.\n"},
  {"IsA", PyvtkEvent_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard macros.\n"},
  {"SafeDownCast", PyvtkEvent_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEvent\nC++: static vtkEvent *SafeDownCast(vtkObjectBase *o)\n\nStandard macros.\n"},
  {"NewInstance", PyvtkEvent_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEvent\nC++: vtkEvent *NewInstance()\n\nStandard macros.\n"},
  {"SetEventId", PyvtkEvent_SetEventId, METH_VARARGS,
   "V.SetEventId(int)\nC++: virtual void SetEventId(unsigned long _arg)\n\nSet the modifier for the event.\n"},
  {"GetEventId", PyvtkEvent_GetEventId, METH_VARARGS,
   "V.GetEventId() -> int\nC++: virtual unsigned long GetEventId()\n\nSet the modifier for the event.\n"},
  {"SetModifier", PyvtkEvent_SetModifier, METH_VARARGS,
   "V.SetModifier(int)\nC++: virtual void SetModifier(int _arg)\n\nSet the modifier for the event.\n"},
  {"GetModifier", PyvtkEvent_GetModifier, METH_VARARGS,
   "V.GetModifier() -> int\nC++: virtual int GetModifier()\nV.GetModifier(vtkRenderWindowInteractor) -> int\nC++: static int GetModifier(vtkRenderWindowInteractor *)\n\nSet the modifier for the event.\n"},
  {"SetKeyCode", PyvtkEvent_SetKeyCode, METH_VARARGS,
   "V.SetKeyCode(char)\nC++: virtual void SetKeyCode(char _arg)\n\nSet the KeyCode for the event.\n"},
  {"GetKeyCode", PyvtkEvent_GetKeyCode, METH_VARARGS,
   "V.GetKeyCode() -> char\nC++: virtual char GetKeyCode()\n\nSet the KeyCode for the event.\n"},
  {"SetRepeatCount", PyvtkEvent_SetRepeatCount, METH_VARARGS,
   "V.SetRepeatCount(int)\nC++: virtual void SetRepeatCount(int _arg)\n\nSet the repease count for the event.\n"},
  {"GetRepeatCount", PyvtkEvent_GetRepeatCount, METH_VARARGS,
   "V.GetRepeatCount() -> int\nC++: virtual int GetRepeatCount()\n\nSet the repease count for the event.\n"},
  {"SetKeySym", PyvtkEvent_SetKeySym, METH_VARARGS,
   "V.SetKeySym(string)\nC++: virtual void SetKeySym(const char *_arg)\n\nSet the complex key symbol (compound key strokes) for the event.\n"},
  {"GetKeySym", PyvtkEvent_GetKeySym, METH_VARARGS,
   "V.GetKeySym() -> string\nC++: virtual char *GetKeySym()\n\nSet the complex key symbol (compound key strokes) for the event.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEvent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkEvent", // tp_name
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
  PyvtkEvent_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEvent_StaticNew()
{
  return vtkEvent::New();
}

PyObject *PyvtkEvent_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEvent_Type, PyvtkEvent_Methods,
    "vtkEvent",
 &PyvtkEvent_StaticNew);

  PyTypeObject *pytype = &PyvtkEvent_Type;

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

  PyType_Ready(&PyvtkEvent_EventModifiers_Type);
  PyvtkEvent_EventModifiers_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkEvent_EventModifiers_Type);

  o = (PyObject *)&PyvtkEvent_EventModifiers_Type;
  if (PyDict_SetItemString(d, "EventModifiers", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkEvent::EventModifiers cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "AnyModifier", vtkEvent::AnyModifier },
        { "NoModifier", vtkEvent::NoModifier },
        { "ShiftModifier", vtkEvent::ShiftModifier },
        { "ControlModifier", vtkEvent::ControlModifier },
        { "AltModifier", vtkEvent::AltModifier },
      };

    o = PyvtkEvent_EventModifiers_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEvent(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEvent_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEvent", o) != 0)
  {
    Py_DECREF(o);
  }

}

