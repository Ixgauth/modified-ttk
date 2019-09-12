// python wrapper for vtkDuplicatePolyData
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
#include "vtkDuplicatePolyData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDuplicatePolyData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDuplicatePolyData_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkDuplicatePolyData_Doc =
  "vtkDuplicatePolyData - For distributed tiled displays.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter collects poly data and duplicates it on every node.\n"
  "Converts data parallel so every node has a complete copy of the data.\n"
  "The filter is used at the end of a pipeline for driving a tiled\n"
  "display.\n\n";


static PyObject *
PyvtkDuplicatePolyData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDuplicatePolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDuplicatePolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDuplicatePolyData *tempr = vtkDuplicatePolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDuplicatePolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDuplicatePolyData::NewInstance());

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
PyvtkDuplicatePolyData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkDuplicatePolyData::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkDuplicatePolyData::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_InitializeSchedule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSchedule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InitializeSchedule(temp0);
    }
    else
    {
      op->vtkDuplicatePolyData::InitializeSchedule(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetSynchronous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSynchronous(temp0);
    }
    else
    {
      op->vtkDuplicatePolyData::SetSynchronous(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetSynchronous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSynchronous() :
      op->vtkDuplicatePolyData::GetSynchronous());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SynchronousOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronousOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronousOn();
    }
    else
    {
      op->vtkDuplicatePolyData::SynchronousOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SynchronousOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronousOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronousOff();
    }
    else
    {
      op->vtkDuplicatePolyData::SynchronousOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSocketController *tempr = (ap.IsBound() ?
      op->GetSocketController() :
      op->vtkDuplicatePolyData::GetSocketController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  vtkSocketController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocketController"))
  {
    if (ap.IsBound())
    {
      op->SetSocketController(temp0);
    }
    else
    {
      op->vtkDuplicatePolyData::SetSocketController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetClientFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClientFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClientFlag(temp0);
    }
    else
    {
      op->vtkDuplicatePolyData::SetClientFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetClientFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClientFlag() :
      op->vtkDuplicatePolyData::GetClientFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMemorySize() :
      op->vtkDuplicatePolyData::GetMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDuplicatePolyData_Methods[] = {
  {"IsTypeOf", PyvtkDuplicatePolyData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDuplicatePolyData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDuplicatePolyData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDuplicatePolyData\nC++: static vtkDuplicatePolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDuplicatePolyData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDuplicatePolyData\nC++: vtkDuplicatePolyData *NewInstance()\n\n"},
  {"SetController", PyvtkDuplicatePolyData_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {"GetController", PyvtkDuplicatePolyData_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {"InitializeSchedule", PyvtkDuplicatePolyData_InitializeSchedule, METH_VARARGS,
   "V.InitializeSchedule(int)\nC++: void InitializeSchedule(int numProcs)\n\n"},
  {"SetSynchronous", PyvtkDuplicatePolyData_SetSynchronous, METH_VARARGS,
   "V.SetSynchronous(int)\nC++: virtual void SetSynchronous(vtkTypeBool _arg)\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {"GetSynchronous", PyvtkDuplicatePolyData_GetSynchronous, METH_VARARGS,
   "V.GetSynchronous() -> int\nC++: virtual vtkTypeBool GetSynchronous()\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {"SynchronousOn", PyvtkDuplicatePolyData_SynchronousOn, METH_VARARGS,
   "V.SynchronousOn()\nC++: virtual void SynchronousOn()\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {"SynchronousOff", PyvtkDuplicatePolyData_SynchronousOff, METH_VARARGS,
   "V.SynchronousOff()\nC++: virtual void SynchronousOff()\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {"GetSocketController", PyvtkDuplicatePolyData_GetSocketController, METH_VARARGS,
   "V.GetSocketController() -> vtkSocketController\nC++: vtkSocketController *GetSocketController()\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to differentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {"SetSocketController", PyvtkDuplicatePolyData_SetSocketController, METH_VARARGS,
   "V.SetSocketController(vtkSocketController)\nC++: void SetSocketController(vtkSocketController *controller)\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to differentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {"SetClientFlag", PyvtkDuplicatePolyData_SetClientFlag, METH_VARARGS,
   "V.SetClientFlag(int)\nC++: virtual void SetClientFlag(int _arg)\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to differentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {"GetClientFlag", PyvtkDuplicatePolyData_GetClientFlag, METH_VARARGS,
   "V.GetClientFlag() -> int\nC++: virtual int GetClientFlag()\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to differentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {"GetMemorySize", PyvtkDuplicatePolyData_GetMemorySize, METH_VARARGS,
   "V.GetMemorySize() -> int\nC++: virtual unsigned long GetMemorySize()\n\nThis returns to size of the output (on this process). This method\nis not really used.  It is needed to have the same API as\nvtkCollectPolyData.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDuplicatePolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkDuplicatePolyData", // tp_name
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
  PyvtkDuplicatePolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDuplicatePolyData_StaticNew()
{
  return vtkDuplicatePolyData::New();
}

PyObject *PyvtkDuplicatePolyData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDuplicatePolyData_Type, PyvtkDuplicatePolyData_Methods,
    "vtkDuplicatePolyData",
 &PyvtkDuplicatePolyData_StaticNew);

  PyTypeObject *pytype = &PyvtkDuplicatePolyData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDuplicatePolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDuplicatePolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDuplicatePolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

