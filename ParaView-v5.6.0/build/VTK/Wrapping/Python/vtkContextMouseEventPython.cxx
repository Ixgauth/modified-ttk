// python wrapper for vtkContextMouseEvent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkVector.h"
#include "vtkVector.h"
#include "vtkContextMouseEvent.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContextMouseEvent(PyObject *); }

static const char *PyvtkContextMouseEvent_Doc =
  "vtkContextMouseEvent - data structure to represent mouse events.\n\n"
  "Provides a convenient data structure to represent mouse events in the\n"
  "vtkContextScene. Passed to vtkAbstractContextItem objects.\n\n"
  "vtkContextMouseEvent()\n"
  "vtkContextMouseEvent(const &vtkContextMouseEvent)\n";


static PyObject *
PyvtkContextMouseEvent_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    op->SetInteractor(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextMouseEvent_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = op->GetInteractor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextMouseEvent_SetPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    op->SetPos(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextMouseEvent_GetPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = op->GetPos();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkContextMouseEvent_SetScenePos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScenePos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    op->SetScenePos(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextMouseEvent_GetScenePos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScenePos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = op->GetScenePos();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkContextMouseEvent_SetScreenPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenPos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    op->SetScreenPos(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextMouseEvent_GetScreenPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenPos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = op->GetScreenPos();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkContextMouseEvent_SetLastPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastPos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    op->SetLastPos(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextMouseEvent_GetLastPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastPos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = op->GetLastPos();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkContextMouseEvent_SetLastScenePos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastScenePos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    op->SetLastScenePos(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextMouseEvent_GetLastScenePos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastScenePos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = op->GetLastScenePos();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkContextMouseEvent_SetLastScreenPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastScreenPos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    op->SetLastScreenPos(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextMouseEvent_GetLastScreenPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastScreenPos");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = op->GetLastScreenPos();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkContextMouseEvent_SetButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButton");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetButton(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextMouseEvent_GetButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButton");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetButton();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextMouseEvent_GetModifiers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiers");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextMouseEvent *op = static_cast<vtkContextMouseEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetModifiers();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContextMouseEvent_Methods[] = {
  {"SetInteractor", PyvtkContextMouseEvent_SetInteractor, METH_VARARGS,
   "V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *interactor)\n\nSet the interactor for the mouse event.\n"},
  {"GetInteractor", PyvtkContextMouseEvent_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nGet the interactor for the mouse event. This can be null, and is\nprovided only for convenience.\n"},
  {"SetPos", PyvtkContextMouseEvent_SetPos, METH_VARARGS,
   "V.SetPos(vtkVector2f)\nC++: void SetPos(const vtkVector2f &pos)\n\nSet/get the position of the mouse in the item's coordinates.\n"},
  {"GetPos", PyvtkContextMouseEvent_GetPos, METH_VARARGS,
   "V.GetPos() -> vtkVector2f\nC++: vtkVector2f GetPos()\n\n"},
  {"SetScenePos", PyvtkContextMouseEvent_SetScenePos, METH_VARARGS,
   "V.SetScenePos(vtkVector2f)\nC++: void SetScenePos(const vtkVector2f &pos)\n\nSet/get the position of the mouse in scene coordinates.\n"},
  {"GetScenePos", PyvtkContextMouseEvent_GetScenePos, METH_VARARGS,
   "V.GetScenePos() -> vtkVector2f\nC++: vtkVector2f GetScenePos()\n\n"},
  {"SetScreenPos", PyvtkContextMouseEvent_SetScreenPos, METH_VARARGS,
   "V.SetScreenPos(vtkVector2i)\nC++: void SetScreenPos(const vtkVector2i &pos)\n\nSet/get the position of the mouse in screen coordinates.\n"},
  {"GetScreenPos", PyvtkContextMouseEvent_GetScreenPos, METH_VARARGS,
   "V.GetScreenPos() -> vtkVector2i\nC++: vtkVector2i GetScreenPos()\n\n"},
  {"SetLastPos", PyvtkContextMouseEvent_SetLastPos, METH_VARARGS,
   "V.SetLastPos(vtkVector2f)\nC++: void SetLastPos(const vtkVector2f &pos)\n\nSet/get the position of the mouse in the item's coordinates.\n"},
  {"GetLastPos", PyvtkContextMouseEvent_GetLastPos, METH_VARARGS,
   "V.GetLastPos() -> vtkVector2f\nC++: vtkVector2f GetLastPos()\n\n"},
  {"SetLastScenePos", PyvtkContextMouseEvent_SetLastScenePos, METH_VARARGS,
   "V.SetLastScenePos(vtkVector2f)\nC++: void SetLastScenePos(const vtkVector2f &pos)\n\nSet/get the position of the mouse in scene coordinates.\n"},
  {"GetLastScenePos", PyvtkContextMouseEvent_GetLastScenePos, METH_VARARGS,
   "V.GetLastScenePos() -> vtkVector2f\nC++: vtkVector2f GetLastScenePos()\n\n"},
  {"SetLastScreenPos", PyvtkContextMouseEvent_SetLastScreenPos, METH_VARARGS,
   "V.SetLastScreenPos(vtkVector2i)\nC++: void SetLastScreenPos(const vtkVector2i &pos)\n\nSet/get the position of the mouse in screen coordinates.\n"},
  {"GetLastScreenPos", PyvtkContextMouseEvent_GetLastScreenPos, METH_VARARGS,
   "V.GetLastScreenPos() -> vtkVector2i\nC++: vtkVector2i GetLastScreenPos()\n\n"},
  {"SetButton", PyvtkContextMouseEvent_SetButton, METH_VARARGS,
   "V.SetButton(int)\nC++: void SetButton(int button)\n\nSet/get the mouse button that caused the event, with possible\nvalues being NO_BUTTON, LEFT_BUTTON, MIDDLE_BUTTON and\nRIGHT_BUTTON.\n"},
  {"GetButton", PyvtkContextMouseEvent_GetButton, METH_VARARGS,
   "V.GetButton() -> int\nC++: int GetButton()\n\n"},
  {"GetModifiers", PyvtkContextMouseEvent_GetModifiers, METH_VARARGS,
   "V.GetModifiers() -> int\nC++: int GetModifiers()\n\nReturn the modifier keys, if any, ORed together. Valid modifier\nenum values are NO_MODIFIER, ALT_MODIFIER, SHIFT_MODIFIER and/or\nCONTROL_MODIFIER.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkContextMouseEvent_vtkContextMouseEvent_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContextMouseEvent");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkContextMouseEvent *op = new vtkContextMouseEvent();

    result = PyVTKSpecialObject_New("vtkContextMouseEvent", op);
  }

  return result;
}

static PyObject *
PyvtkContextMouseEvent_vtkContextMouseEvent_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContextMouseEvent");

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    vtkContextMouseEvent *op = new vtkContextMouseEvent(*temp0);

    result = PyVTKSpecialObject_New("vtkContextMouseEvent", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContextMouseEvent_vtkContextMouseEvent_Methods[] = {
  {nullptr, PyvtkContextMouseEvent_vtkContextMouseEvent_s2, METH_VARARGS,
   "@W vtkContextMouseEvent"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContextMouseEvent_vtkContextMouseEvent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkContextMouseEvent_vtkContextMouseEvent_s1(self, args);
    case 1:
      return PyvtkContextMouseEvent_vtkContextMouseEvent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkContextMouseEvent");
  return nullptr;
}


static PyObject *
PyvtkContextMouseEvent_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkContextMouseEvent_vtkContextMouseEvent(nullptr, args);
}

static void PyvtkContextMouseEvent_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkContextMouseEvent *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkContextMouseEvent_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkContextMouseEvent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingContext2DPython.vtkContextMouseEvent", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContextMouseEvent_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkContextMouseEvent_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkContextMouseEvent_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkContextMouseEvent_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkContextMouseEvent_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkContextMouseEvent(*static_cast<const vtkContextMouseEvent*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContextMouseEvent_TypeNew(); }

PyObject *PyvtkContextMouseEvent_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkContextMouseEvent_Type,
    PyvtkContextMouseEvent_Methods,
    PyvtkContextMouseEvent_vtkContextMouseEvent_Methods,
    &PyvtkContextMouseEvent_CCopy);

  PyTypeObject *pytype = &PyvtkContextMouseEvent_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "NO_BUTTON", vtkContextMouseEvent::NO_BUTTON },
        { "LEFT_BUTTON", vtkContextMouseEvent::LEFT_BUTTON },
        { "MIDDLE_BUTTON", vtkContextMouseEvent::MIDDLE_BUTTON },
        { "RIGHT_BUTTON", vtkContextMouseEvent::RIGHT_BUTTON },
        { "NO_MODIFIER", vtkContextMouseEvent::NO_MODIFIER },
        { "ALT_MODIFIER", vtkContextMouseEvent::ALT_MODIFIER },
        { "SHIFT_MODIFIER", vtkContextMouseEvent::SHIFT_MODIFIER },
        { "CONTROL_MODIFIER", vtkContextMouseEvent::CONTROL_MODIFIER },
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

void PyVTKAddFile_vtkContextMouseEvent(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContextMouseEvent_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkContextMouseEvent", o) != 0)
  {
    Py_DECREF(o);
  }

}

