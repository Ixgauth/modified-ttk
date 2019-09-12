// python wrapper for vtkCollectPolyData
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
#include "vtkCollectPolyData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCollectPolyData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCollectPolyData_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkCollectPolyData_Doc =
  "vtkCollectPolyData - Collect distributed polydata.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter has code to collect polydat from across processes onto\n"
  "node 0. Collection can be turned on or off using the \"PassThrough\"\n"
  "flag.\n\n";


static PyObject *
PyvtkCollectPolyData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCollectPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollectPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCollectPolyData *tempr = vtkCollectPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollectPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollectPolyData::NewInstance());

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
PyvtkCollectPolyData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

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
      op->vtkCollectPolyData::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectPolyData_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCollectPolyData::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectPolyData_SetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

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
      op->vtkCollectPolyData::SetSocketController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectPolyData_GetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSocketController *tempr = (ap.IsBound() ?
      op->GetSocketController() :
      op->vtkCollectPolyData::GetSocketController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectPolyData_SetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThrough(temp0);
    }
    else
    {
      op->vtkCollectPolyData::SetPassThrough(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectPolyData_GetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThrough() :
      op->vtkCollectPolyData::GetPassThrough());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectPolyData_PassThroughOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughOn();
    }
    else
    {
      op->vtkCollectPolyData::PassThroughOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectPolyData_PassThroughOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughOff();
    }
    else
    {
      op->vtkCollectPolyData::PassThroughOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCollectPolyData_Methods[] = {
  {"IsTypeOf", PyvtkCollectPolyData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCollectPolyData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCollectPolyData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCollectPolyData\nC++: static vtkCollectPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCollectPolyData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCollectPolyData\nC++: vtkCollectPolyData *NewInstance()\n\n"},
  {"SetController", PyvtkCollectPolyData_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {"GetController", PyvtkCollectPolyData_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {"SetSocketController", PyvtkCollectPolyData_SetSocketController, METH_VARARGS,
   "V.SetSocketController(vtkSocketController)\nC++: virtual void SetSocketController(vtkSocketController *)\n\nWhen this filter is being used in client-server mode, this is the\ncontroller used to communicate between client and server.  Client\nshould not set the other controller.\n"},
  {"GetSocketController", PyvtkCollectPolyData_GetSocketController, METH_VARARGS,
   "V.GetSocketController() -> vtkSocketController\nC++: virtual vtkSocketController *GetSocketController()\n\nWhen this filter is being used in client-server mode, this is the\ncontroller used to communicate between client and server.  Client\nshould not set the other controller.\n"},
  {"SetPassThrough", PyvtkCollectPolyData_SetPassThrough, METH_VARARGS,
   "V.SetPassThrough(int)\nC++: virtual void SetPassThrough(vtkTypeBool _arg)\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {"GetPassThrough", PyvtkCollectPolyData_GetPassThrough, METH_VARARGS,
   "V.GetPassThrough() -> int\nC++: virtual vtkTypeBool GetPassThrough()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {"PassThroughOn", PyvtkCollectPolyData_PassThroughOn, METH_VARARGS,
   "V.PassThroughOn()\nC++: virtual void PassThroughOn()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {"PassThroughOff", PyvtkCollectPolyData_PassThroughOff, METH_VARARGS,
   "V.PassThroughOff()\nC++: virtual void PassThroughOff()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCollectPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkCollectPolyData", // tp_name
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
  PyvtkCollectPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCollectPolyData_StaticNew()
{
  return vtkCollectPolyData::New();
}

PyObject *PyvtkCollectPolyData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCollectPolyData_Type, PyvtkCollectPolyData_Methods,
    "vtkCollectPolyData",
 &PyvtkCollectPolyData_StaticNew);

  PyTypeObject *pytype = &PyvtkCollectPolyData_Type;

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

void PyVTKAddFile_vtkCollectPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCollectPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCollectPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

