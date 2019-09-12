// python wrapper for vtkButtonRepresentation
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
#include "vtkButtonRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkButtonRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkButtonRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkButtonRepresentation_Doc =
  "vtkButtonRepresentation - abstract class defines the representation\nfor a vtkButtonWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This abstract class is used to specify how the vtkButtonWidget should\n"
  "interact with representations of the vtkButtonWidget. This class may\n"
  "be subclassed so that alternative representations can be created. The\n"
  "class defines an API, and a default implementation, that the\n"
  "vtkButtonWidget interacts with to render itself in the scene.\n\n"
  "The vtkButtonWidget assumes an n-state button so that traversal\n"
  "methods are available for changing, querying and manipulating state.\n"
  "Derived classed determine the actual appearance. The state is\n"
  "represented by an integral value 0<=state<numStates.\n\n"
  "To use this representation, always begin by specifying the number of\n"
  "states. Then follow with the necessary information to represent each\n"
  "state (done through a subclass API).\n\n"
  "@sa\n"
  "vtkButtonWidget\n\n";

static PyTypeObject PyvtkButtonRepresentation__InteractionState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkButtonRepresentation._InteractionState", // tp_name
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

PyObject *PyvtkButtonRepresentation__InteractionState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkButtonRepresentation__InteractionState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkButtonRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkButtonRepresentation__HighlightState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkButtonRepresentation._HighlightState", // tp_name
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

PyObject *PyvtkButtonRepresentation__HighlightState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkButtonRepresentation__HighlightState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkButtonRepresentation__HighlightState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkButtonRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkButtonRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkButtonRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkButtonRepresentation *tempr = vtkButtonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkButtonRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkButtonRepresentation::NewInstance());

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
PyvtkButtonRepresentation_SetNumberOfStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfStates(temp0);
    }
    else
    {
      op->vtkButtonRepresentation::SetNumberOfStates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetNumberOfStatesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStatesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStatesMinValue() :
      op->vtkButtonRepresentation::GetNumberOfStatesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetNumberOfStatesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStatesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStatesMaxValue() :
      op->vtkButtonRepresentation::GetNumberOfStatesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetState() :
      op->vtkButtonRepresentation::GetState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_SetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetState(temp0);
    }
    else
    {
      op->vtkButtonRepresentation::SetState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_NextState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NextState();
    }
    else
    {
      op->vtkButtonRepresentation::NextState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_PreviousState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreviousState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreviousState();
    }
    else
    {
      op->vtkButtonRepresentation::PreviousState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Highlight(temp0);
    }
    else
    {
      op->vtkButtonRepresentation::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_GetHighlightState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighlightState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHighlightState() :
      op->vtkButtonRepresentation::GetHighlightState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonRepresentation *op = static_cast<vtkButtonRepresentation *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkButtonRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkButtonRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkButtonRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for the class.\n"},
  {"IsA", PyvtkButtonRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for the class.\n"},
  {"SafeDownCast", PyvtkButtonRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkButtonRepresentation\nC++: static vtkButtonRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for the class.\n"},
  {"NewInstance", PyvtkButtonRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkButtonRepresentation\nC++: vtkButtonRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {"SetNumberOfStates", PyvtkButtonRepresentation_SetNumberOfStates, METH_VARARGS,
   "V.SetNumberOfStates(int)\nC++: virtual void SetNumberOfStates(int _arg)\n\nRetrieve the current button state.\n"},
  {"GetNumberOfStatesMinValue", PyvtkButtonRepresentation_GetNumberOfStatesMinValue, METH_VARARGS,
   "V.GetNumberOfStatesMinValue() -> int\nC++: virtual int GetNumberOfStatesMinValue()\n\nRetrieve the current button state.\n"},
  {"GetNumberOfStatesMaxValue", PyvtkButtonRepresentation_GetNumberOfStatesMaxValue, METH_VARARGS,
   "V.GetNumberOfStatesMaxValue() -> int\nC++: virtual int GetNumberOfStatesMaxValue()\n\nRetrieve the current button state.\n"},
  {"GetState", PyvtkButtonRepresentation_GetState, METH_VARARGS,
   "V.GetState() -> int\nC++: virtual int GetState()\n\nRetrieve the current button state.\n"},
  {"SetState", PyvtkButtonRepresentation_SetState, METH_VARARGS,
   "V.SetState(int)\nC++: virtual void SetState(int state)\n\nManipulate the state. Note that the NextState() and\nPreviousState() methods use modulo traversal. The \"state\"\nintegral value will be clamped within the possible state values\n(0<=state<NumberOfStates). Note that subclasses will override\nthese methods in many cases.\n"},
  {"NextState", PyvtkButtonRepresentation_NextState, METH_VARARGS,
   "V.NextState()\nC++: virtual void NextState()\n\nManipulate the state. Note that the NextState() and\nPreviousState() methods use modulo traversal. The \"state\"\nintegral value will be clamped within the possible state values\n(0<=state<NumberOfStates). Note that subclasses will override\nthese methods in many cases.\n"},
  {"PreviousState", PyvtkButtonRepresentation_PreviousState, METH_VARARGS,
   "V.PreviousState()\nC++: virtual void PreviousState()\n\nManipulate the state. Note that the NextState() and\nPreviousState() methods use modulo traversal. The \"state\"\nintegral value will be clamped within the possible state values\n(0<=state<NumberOfStates). Note that subclasses will override\nthese methods in many cases.\n"},
  {"Highlight", PyvtkButtonRepresentation_Highlight, METH_VARARGS,
   "V.Highlight(int)\nC++: void Highlight(int) override;\n\nThese methods control the appearance of the button as it is being\ninteracted with. Subclasses will behave differently depending on\ntheir particulars.  HighlightHovering is used when the mouse\npointer moves over the button. HighlightSelecting is set when the\nbutton is selected. Otherwise, the HighlightNormal is used. The\nHighlight() method will throw a vtkCommand::HighlightEvent.\n"},
  {"GetHighlightState", PyvtkButtonRepresentation_GetHighlightState, METH_VARARGS,
   "V.GetHighlightState() -> int\nC++: virtual int GetHighlightState()\n\nThese methods control the appearance of the button as it is being\ninteracted with. Subclasses will behave differently depending on\ntheir particulars.  HighlightHovering is used when the mouse\npointer moves over the button. HighlightSelecting is set when the\nbutton is selected. Otherwise, the HighlightNormal is used. The\nHighlight() method will throw a vtkCommand::HighlightEvent.\n"},
  {"ShallowCopy", PyvtkButtonRepresentation_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nSatisfy some of vtkProp's API.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkButtonRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkButtonRepresentation", // tp_name
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
  PyvtkButtonRepresentation_Doc, // tp_doc
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

PyObject *PyvtkButtonRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkButtonRepresentation_Type, PyvtkButtonRepresentation_Methods,
    "vtkButtonRepresentation",
 nullptr);

  PyTypeObject *pytype = &PyvtkButtonRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkButtonRepresentation__InteractionState_Type);
  PyvtkButtonRepresentation__InteractionState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkButtonRepresentation__InteractionState_Type);

  o = (PyObject *)&PyvtkButtonRepresentation__InteractionState_Type;
  if (PyDict_SetItemString(d, "_InteractionState", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkButtonRepresentation__HighlightState_Type);
  PyvtkButtonRepresentation__HighlightState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkButtonRepresentation__HighlightState_Type);

  o = (PyObject *)&PyvtkButtonRepresentation__HighlightState_Type;
  if (PyDict_SetItemString(d, "_HighlightState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkButtonRepresentation::_InteractionState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "Outside", vtkButtonRepresentation::Outside },
        { "Inside", vtkButtonRepresentation::Inside },
      };

    o = PyvtkButtonRepresentation__InteractionState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkButtonRepresentation::_HighlightState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "HighlightNormal", vtkButtonRepresentation::HighlightNormal },
        { "HighlightHovering", vtkButtonRepresentation::HighlightHovering },
        { "HighlightSelecting", vtkButtonRepresentation::HighlightSelecting },
      };

    o = PyvtkButtonRepresentation__HighlightState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkButtonRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkButtonRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkButtonRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

