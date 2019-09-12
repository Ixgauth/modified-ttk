// python wrapper for vtkWidgetCallbackMapper
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
#include "vtkWidgetCallbackMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWidgetCallbackMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWidgetCallbackMapper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkWidgetCallbackMapper_Doc =
  "vtkWidgetCallbackMapper - map widget events into callbacks\n\n"
  "Superclass: vtkObject\n\n"
  "vtkWidgetCallbackMapper maps widget events (defined in\n"
  "vtkWidgetEvent.h) into static class methods, and provides facilities\n"
  "to invoke the methods. This class is templated and meant to be used\n"
  "as an internal helper class by the widget classes. The class works in\n"
  "combination with the class vtkWidgetEventTranslator, which translates\n"
  "VTK events into widget events.\n\n"
  "@sa\n"
  "vtkWidgetEvent vtkWidgetEventTranslator\n\n";


static PyObject *
PyvtkWidgetCallbackMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWidgetCallbackMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetCallbackMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWidgetCallbackMapper *tempr = vtkWidgetCallbackMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetCallbackMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetCallbackMapper::NewInstance());

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
PyvtkWidgetCallbackMapper_SetEventTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  vtkWidgetEventTranslator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWidgetEventTranslator"))
  {
    if (ap.IsBound())
    {
      op->SetEventTranslator(temp0);
    }
    else
    {
      op->vtkWidgetCallbackMapper::SetEventTranslator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_GetEventTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetEventTranslator *tempr = (ap.IsBound() ?
      op->GetEventTranslator() :
      op->vtkWidgetCallbackMapper::GetEventTranslator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_InvokeCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InvokeCallback(temp0);
    }
    else
    {
      op->vtkWidgetCallbackMapper::InvokeCallback(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetCallbackMapper_Methods[] = {
  {"IsTypeOf", PyvtkWidgetCallbackMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard macros.\n"},
  {"IsA", PyvtkWidgetCallbackMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard macros.\n"},
  {"SafeDownCast", PyvtkWidgetCallbackMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWidgetCallbackMapper\nC++: static vtkWidgetCallbackMapper *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard macros.\n"},
  {"NewInstance", PyvtkWidgetCallbackMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWidgetCallbackMapper\nC++: vtkWidgetCallbackMapper *NewInstance()\n\nStandard macros.\n"},
  {"SetEventTranslator", PyvtkWidgetCallbackMapper_SetEventTranslator, METH_VARARGS,
   "V.SetEventTranslator(vtkWidgetEventTranslator)\nC++: void SetEventTranslator(vtkWidgetEventTranslator *t)\n\nSpecify the vtkWidgetEventTranslator to coordinate with.\n"},
  {"GetEventTranslator", PyvtkWidgetCallbackMapper_GetEventTranslator, METH_VARARGS,
   "V.GetEventTranslator() -> vtkWidgetEventTranslator\nC++: virtual vtkWidgetEventTranslator *GetEventTranslator()\n\nSpecify the vtkWidgetEventTranslator to coordinate with.\n"},
  {"InvokeCallback", PyvtkWidgetCallbackMapper_InvokeCallback, METH_VARARGS,
   "V.InvokeCallback(int)\nC++: void InvokeCallback(unsigned long widgetEvent)\n\nThis method invokes the callback given a widget event. A non-zero\nvalue is returned if the listed event is registered.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWidgetCallbackMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkWidgetCallbackMapper", // tp_name
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
  PyvtkWidgetCallbackMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWidgetCallbackMapper_StaticNew()
{
  return vtkWidgetCallbackMapper::New();
}

PyObject *PyvtkWidgetCallbackMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWidgetCallbackMapper_Type, PyvtkWidgetCallbackMapper_Methods,
    "vtkWidgetCallbackMapper",
 &PyvtkWidgetCallbackMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkWidgetCallbackMapper_Type;

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

void PyVTKAddFile_vtkWidgetCallbackMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWidgetCallbackMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWidgetCallbackMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

