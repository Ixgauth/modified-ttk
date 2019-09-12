// python wrapper for vtkTDxInteractorStyle
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
#include "vtkTDxInteractorStyle.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTDxInteractorStyle(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTDxInteractorStyle_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTDxInteractorStyle_Doc =
  "vtkTDxInteractorStyle - provide 3DConnexion device event-driven\ninterface to the rendering window\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTDxInteractorStyle is an abstract class defining an event-driven\n"
  "interface to support 3DConnexion device events send by\n"
  "vtkRenderWindowInteractor. vtkRenderWindowInteractor forwards events\n"
  "in a platform independent form to vtkInteractorStyle which can then\n"
  "delegate some processing to vtkTDxInteractorStyle.\n\n"
  "@sa\n"
  "vtkInteractorStyle vtkRenderWindowInteractor\n"
  "vtkTDxInteractorStyleCamera\n\n";


static PyObject *
PyvtkTDxInteractorStyle_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTDxInteractorStyle::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTDxInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTDxInteractorStyle *tempr = vtkTDxInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTDxInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTDxInteractorStyle::NewInstance());

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
PyvtkTDxInteractorStyle_OnMotionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMotionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkTDxMotionEventInfo *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTDxMotionEventInfo"))
  {
    if (ap.IsBound())
    {
      op->OnMotionEvent(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyle::OnMotionEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_OnButtonPressedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonPressedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->OnButtonPressedEvent(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyle::OnButtonPressedEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_OnButtonReleasedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonReleasedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->OnButtonReleasedEvent(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyle::OnButtonReleasedEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_ProcessEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkRenderer *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->ProcessEvent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTDxInteractorStyle::ProcessEvent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf2.obj != 0)
  {
    PyBuffer_Release(&pbuf2);
  }
#endif
  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_GetSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTDxInteractorStyleSettings *tempr = (ap.IsBound() ?
      op->GetSettings() :
      op->vtkTDxInteractorStyle::GetSettings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_SetSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkTDxInteractorStyleSettings *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTDxInteractorStyleSettings"))
  {
    if (ap.IsBound())
    {
      op->SetSettings(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyle::SetSettings(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTDxInteractorStyle_Methods[] = {
  {"IsTypeOf", PyvtkTDxInteractorStyle_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTDxInteractorStyle_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTDxInteractorStyle_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTDxInteractorStyle\nC++: static vtkTDxInteractorStyle *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTDxInteractorStyle_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTDxInteractorStyle\nC++: vtkTDxInteractorStyle *NewInstance()\n\n"},
  {"OnMotionEvent", PyvtkTDxInteractorStyle_OnMotionEvent, METH_VARARGS,
   "V.OnMotionEvent(vtkTDxMotionEventInfo)\nC++: virtual void OnMotionEvent(vtkTDxMotionEventInfo *motionInfo)\n\nAction on motion event. Default implementation is empty.\n\\pre: motionInfo_exist: motionInfo!=0\n"},
  {"OnButtonPressedEvent", PyvtkTDxInteractorStyle_OnButtonPressedEvent, METH_VARARGS,
   "V.OnButtonPressedEvent(int)\nC++: virtual void OnButtonPressedEvent(int button)\n\nAction on button pressed event. Default implementation is empty.\n"},
  {"OnButtonReleasedEvent", PyvtkTDxInteractorStyle_OnButtonReleasedEvent, METH_VARARGS,
   "V.OnButtonReleasedEvent(int)\nC++: virtual void OnButtonReleasedEvent(int button)\n\nAction on button released event. Default implementation is empty.\n"},
  {"ProcessEvent", PyvtkTDxInteractorStyle_ProcessEvent, METH_VARARGS,
   "V.ProcessEvent(vtkRenderer, int, void)\nC++: virtual void ProcessEvent(vtkRenderer *renderer,\n    unsigned long event, void *calldata)\n\nDispatch the events TDxMotionEvent, TDxButtonPressEvent and\nTDxButtonReleaseEvent to OnMotionEvent(), OnButtonPressedEvent()\nand OnButtonReleasedEvent() respectively. It is called by the\nvtkInteractorStyle. This method is virtual for convenient but you\nshould really override the On*Event() methods only.\n\\pre renderer can be null.\n"},
  {"GetSettings", PyvtkTDxInteractorStyle_GetSettings, METH_VARARGS,
   "V.GetSettings() -> vtkTDxInteractorStyleSettings\nC++: virtual vtkTDxInteractorStyleSettings *GetSettings()\n\n3Dconnexion device settings. (sensitivity, individual axis\nfilters). Initial object is not null.\n"},
  {"SetSettings", PyvtkTDxInteractorStyle_SetSettings, METH_VARARGS,
   "V.SetSettings(vtkTDxInteractorStyleSettings)\nC++: virtual void SetSettings(\n    vtkTDxInteractorStyleSettings *settings)\n\n3Dconnexion device settings. (sensitivity, individual axis\nfilters). Initial object is not null.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTDxInteractorStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkTDxInteractorStyle", // tp_name
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
  PyvtkTDxInteractorStyle_Doc, // tp_doc
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

PyObject *PyvtkTDxInteractorStyle_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTDxInteractorStyle_Type, PyvtkTDxInteractorStyle_Methods,
    "vtkTDxInteractorStyle",
 nullptr);

  PyTypeObject *pytype = &PyvtkTDxInteractorStyle_Type;

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

void PyVTKAddFile_vtkTDxInteractorStyle(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTDxInteractorStyle_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTDxInteractorStyle", o) != 0)
  {
    Py_DECREF(o);
  }

}

