// python wrapper for vtkWidgetEvent
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
#include "vtkWidgetEvent.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWidgetEvent(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWidgetEvent_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkWidgetEvent_Doc =
  "vtkWidgetEvent - define widget events\n\n"
  "Superclass: vtkObject\n\n"
  "vtkWidgetEvent defines widget events. These events are processed by\n"
  "subclasses of vtkInteractorObserver.\n\n";

static PyTypeObject PyvtkWidgetEvent_WidgetEventIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkWidgetEvent.WidgetEventIds", // tp_name
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

PyObject *PyvtkWidgetEvent_WidgetEventIds_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkWidgetEvent_WidgetEventIds_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkWidgetEvent_WidgetEventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkWidgetEvent_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWidgetEvent::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEvent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEvent *op = static_cast<vtkWidgetEvent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetEvent::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEvent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWidgetEvent *tempr = vtkWidgetEvent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEvent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEvent *op = static_cast<vtkWidgetEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetEvent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetEvent::NewInstance());

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
PyvtkWidgetEvent_GetStringFromEventId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromEventId");

  unsigned long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkWidgetEvent::GetStringFromEventId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEvent_GetEventIdFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventIdFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = vtkWidgetEvent::GetEventIdFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetEvent_Methods[] = {
  {"IsTypeOf", PyvtkWidgetEvent_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard macros.\n"},
  {"IsA", PyvtkWidgetEvent_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard macros.\n"},
  {"SafeDownCast", PyvtkWidgetEvent_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWidgetEvent\nC++: static vtkWidgetEvent *SafeDownCast(vtkObjectBase *o)\n\nStandard macros.\n"},
  {"NewInstance", PyvtkWidgetEvent_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWidgetEvent\nC++: vtkWidgetEvent *NewInstance()\n\nStandard macros.\n"},
  {"GetStringFromEventId", PyvtkWidgetEvent_GetStringFromEventId, METH_VARARGS,
   "V.GetStringFromEventId(int) -> string\nC++: static const char *GetStringFromEventId(unsigned long event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {"GetEventIdFromString", PyvtkWidgetEvent_GetEventIdFromString, METH_VARARGS,
   "V.GetEventIdFromString(string) -> int\nC++: static unsigned long GetEventIdFromString(const char *event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWidgetEvent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkWidgetEvent", // tp_name
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
  PyvtkWidgetEvent_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWidgetEvent_StaticNew()
{
  return vtkWidgetEvent::New();
}

PyObject *PyvtkWidgetEvent_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWidgetEvent_Type, PyvtkWidgetEvent_Methods,
    "vtkWidgetEvent",
 &PyvtkWidgetEvent_StaticNew);

  PyTypeObject *pytype = &PyvtkWidgetEvent_Type;

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

  PyType_Ready(&PyvtkWidgetEvent_WidgetEventIds_Type);
  PyvtkWidgetEvent_WidgetEventIds_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkWidgetEvent_WidgetEventIds_Type);

  o = (PyObject *)&PyvtkWidgetEvent_WidgetEventIds_Type;
  if (PyDict_SetItemString(d, "WidgetEventIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 29; c++)
  {
    typedef vtkWidgetEvent::WidgetEventIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[29] = {
        { "NoEvent", vtkWidgetEvent::NoEvent },
        { "Select", vtkWidgetEvent::Select },
        { "EndSelect", vtkWidgetEvent::EndSelect },
        { "Delete", vtkWidgetEvent::Delete },
        { "Translate", vtkWidgetEvent::Translate },
        { "EndTranslate", vtkWidgetEvent::EndTranslate },
        { "Scale", vtkWidgetEvent::Scale },
        { "EndScale", vtkWidgetEvent::EndScale },
        { "Resize", vtkWidgetEvent::Resize },
        { "EndResize", vtkWidgetEvent::EndResize },
        { "Rotate", vtkWidgetEvent::Rotate },
        { "EndRotate", vtkWidgetEvent::EndRotate },
        { "Move", vtkWidgetEvent::Move },
        { "SizeHandles", vtkWidgetEvent::SizeHandles },
        { "AddPoint", vtkWidgetEvent::AddPoint },
        { "AddFinalPoint", vtkWidgetEvent::AddFinalPoint },
        { "Completed", vtkWidgetEvent::Completed },
        { "TimedOut", vtkWidgetEvent::TimedOut },
        { "ModifyEvent", vtkWidgetEvent::ModifyEvent },
        { "Reset", vtkWidgetEvent::Reset },
        { "Up", vtkWidgetEvent::Up },
        { "Down", vtkWidgetEvent::Down },
        { "Left", vtkWidgetEvent::Left },
        { "Right", vtkWidgetEvent::Right },
        { "Select3D", vtkWidgetEvent::Select3D },
        { "EndSelect3D", vtkWidgetEvent::EndSelect3D },
        { "Move3D", vtkWidgetEvent::Move3D },
        { "AddPoint3D", vtkWidgetEvent::AddPoint3D },
        { "AddFinalPoint3D", vtkWidgetEvent::AddFinalPoint3D },
      };

    o = PyvtkWidgetEvent_WidgetEventIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWidgetEvent(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWidgetEvent_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWidgetEvent", o) != 0)
  {
    Py_DECREF(o);
  }

}

