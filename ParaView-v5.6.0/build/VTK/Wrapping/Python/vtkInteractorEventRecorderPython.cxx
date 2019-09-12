// python wrapper for vtkInteractorEventRecorder
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
#include "vtkInteractorEventRecorder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorEventRecorder(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorEventRecorder_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorObserver_ClassNew
extern "C" { PyObject *PyvtkInteractorObserver_ClassNew(); }
#define DECLARED_PyvtkInteractorObserver_ClassNew
#endif

static const char *PyvtkInteractorEventRecorder_Doc =
  "vtkInteractorEventRecorder - record and play VTK events passing\nthrough a vtkRenderWindowInteractor\n\n"
  "Superclass: vtkInteractorObserver\n\n"
  "vtkInteractorEventRecorder records all VTK events invoked from a\n"
  "vtkRenderWindowInteractor. The events are recorded to a file.\n"
  "vtkInteractorEventRecorder can also be used to play those events back\n"
  "and invoke them on an vtkRenderWindowInteractor. (Note: the events\n"
  "can also be played back from a file or string.)\n\n"
  "The format of the event file is simple. It is:\n"
  " EventName X Y ctrl shift keycode repeatCount keySym The format also\n"
  "allows \"#\" comments.\n\n"
  "@sa\n"
  "vtkInteractorObserver vtkCallback\n\n";


static PyObject *
PyvtkInteractorEventRecorder_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorEventRecorder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorEventRecorder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorEventRecorder *tempr = vtkInteractorEventRecorder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorEventRecorder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorEventRecorder::NewInstance());

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
PyvtkInteractorEventRecorder_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkInteractorEventRecorder::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkInteractorEventRecorder::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkInteractorEventRecorder::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkInteractorEventRecorder::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Record(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Record");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Record();
    }
    else
    {
      op->vtkInteractorEventRecorder::Record();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Play();
    }
    else
    {
      op->vtkInteractorEventRecorder::Play();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Stop();
    }
    else
    {
      op->vtkInteractorEventRecorder::Stop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Rewind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rewind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Rewind();
    }
    else
    {
      op->vtkInteractorEventRecorder::Rewind();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadFromInputString(temp0);
    }
    else
    {
      op->vtkInteractorEventRecorder::SetReadFromInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkInteractorEventRecorder::GetReadFromInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOn();
    }
    else
    {
      op->vtkInteractorEventRecorder::ReadFromInputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOff();
    }
    else
    {
      op->vtkInteractorEventRecorder::ReadFromInputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputString(temp0);
    }
    else
    {
      op->vtkInteractorEventRecorder::SetInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputString() :
      op->vtkInteractorEventRecorder::GetInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorEventRecorder_Methods[] = {
  {"IsTypeOf", PyvtkInteractorEventRecorder_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorEventRecorder_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorEventRecorder_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInteractorEventRecorder\nC++: static vtkInteractorEventRecorder *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorEventRecorder_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorEventRecorder\nC++: vtkInteractorEventRecorder *NewInstance()\n\n"},
  {"SetEnabled", PyvtkInteractorEventRecorder_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nMethods for turning the interactor observer on and off, and\ndetermining its state. All subclasses must provide the\nSetEnabled() method. Enabling a vtkInteractorObserver has the\nside effect of adding observers; disabling it removes the\nobservers. Prior to enabling the vtkInteractorObserver you must\nset the render window interactor (via SetInteractor()). Initial\nvalue is 0.\n"},
  {"SetInteractor", PyvtkInteractorEventRecorder_SetInteractor, METH_VARARGS,
   "V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *iren) override;\n\nThis method is used to associate the widget with the render\nwindow interactor.  Observers of the appropriate events invoked\nin the render window interactor are set up as a result of this\nmethod invocation. The SetInteractor() method must be invoked\nprior to enabling the vtkInteractorObserver. It automatically\nregisters available pickers to the Picking Manager.\n"},
  {"SetFileName", PyvtkInteractorEventRecorder_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the name of a file events should be written to/from.\n"},
  {"GetFileName", PyvtkInteractorEventRecorder_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet/Get the name of a file events should be written to/from.\n"},
  {"Record", PyvtkInteractorEventRecorder_Record, METH_VARARGS,
   "V.Record()\nC++: void Record()\n\nInvoke this method to begin recording events. The events will be\nrecorded to the filename indicated.\n"},
  {"Play", PyvtkInteractorEventRecorder_Play, METH_VARARGS,
   "V.Play()\nC++: void Play()\n\nInvoke this method to begin playing events from the current\nposition. The events will be played back from the filename\nindicated.\n"},
  {"Stop", PyvtkInteractorEventRecorder_Stop, METH_VARARGS,
   "V.Stop()\nC++: void Stop()\n\nInvoke this method to stop recording/playing events.\n"},
  {"Rewind", PyvtkInteractorEventRecorder_Rewind, METH_VARARGS,
   "V.Rewind()\nC++: void Rewind()\n\nRewind to the beginning of the file.\n"},
  {"SetReadFromInputString", PyvtkInteractorEventRecorder_SetReadFromInputString, METH_VARARGS,
   "V.SetReadFromInputString(int)\nC++: virtual void SetReadFromInputString(vtkTypeBool _arg)\n\nEnable reading from an InputString as compared to the default\nbehavior, which is to read from a file.\n"},
  {"GetReadFromInputString", PyvtkInteractorEventRecorder_GetReadFromInputString, METH_VARARGS,
   "V.GetReadFromInputString() -> int\nC++: virtual vtkTypeBool GetReadFromInputString()\n\nEnable reading from an InputString as compared to the default\nbehavior, which is to read from a file.\n"},
  {"ReadFromInputStringOn", PyvtkInteractorEventRecorder_ReadFromInputStringOn, METH_VARARGS,
   "V.ReadFromInputStringOn()\nC++: virtual void ReadFromInputStringOn()\n\nEnable reading from an InputString as compared to the default\nbehavior, which is to read from a file.\n"},
  {"ReadFromInputStringOff", PyvtkInteractorEventRecorder_ReadFromInputStringOff, METH_VARARGS,
   "V.ReadFromInputStringOff()\nC++: virtual void ReadFromInputStringOff()\n\nEnable reading from an InputString as compared to the default\nbehavior, which is to read from a file.\n"},
  {"SetInputString", PyvtkInteractorEventRecorder_SetInputString, METH_VARARGS,
   "V.SetInputString(string)\nC++: virtual void SetInputString(const char *_arg)\n\nSet/Get the string to read from.\n"},
  {"GetInputString", PyvtkInteractorEventRecorder_GetInputString, METH_VARARGS,
   "V.GetInputString() -> string\nC++: virtual char *GetInputString()\n\nSet/Get the string to read from.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorEventRecorder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkInteractorEventRecorder", // tp_name
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
  PyvtkInteractorEventRecorder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorEventRecorder_StaticNew()
{
  return vtkInteractorEventRecorder::New();
}

PyObject *PyvtkInteractorEventRecorder_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorEventRecorder_Type, PyvtkInteractorEventRecorder_Methods,
    "vtkInteractorEventRecorder",
 &PyvtkInteractorEventRecorder_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorEventRecorder_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorObserver_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorEventRecorder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorEventRecorder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorEventRecorder", o) != 0)
  {
    Py_DECREF(o);
  }

}

