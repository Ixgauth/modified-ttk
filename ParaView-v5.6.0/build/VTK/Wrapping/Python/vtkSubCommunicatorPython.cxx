// python wrapper for vtkSubCommunicator
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
#include "vtkSubCommunicator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSubCommunicator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSubCommunicator_ClassNew(); }

#ifndef DECLARED_PyvtkCommunicator_ClassNew
extern "C" { PyObject *PyvtkCommunicator_ClassNew(); }
#define DECLARED_PyvtkCommunicator_ClassNew
#endif

static const char *PyvtkSubCommunicator_Doc =
  "vtkSubCommunicator - Provides communication on a process group.\n\n"
  "Superclass: vtkCommunicator\n\n"
  "This class provides an implementation for communicating on process\n"
  "groups. In general, you should never use this class directly. \n"
  "Instead, use the vtkMultiProcessController::CreateSubController\n"
  "method.\n\n"
  "@bug Because all communication is delegated to the original\n"
  "communicator, any error will report process ids with respect to the\n"
  "original communicator, not this communicator that was actually used.\n\n"
  "@sa\n"
  "vtkCommunicator, vtkMultiProcessController\n\n"
  "@par Thanks: This class was originally written by Kenneth Moreland\n"
  "(kmorel@sandia.gov) from Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSubCommunicator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSubCommunicator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSubCommunicator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubCommunicator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSubCommunicator *tempr = vtkSubCommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSubCommunicator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSubCommunicator::NewInstance());

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
PyvtkSubCommunicator_GetGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProcessGroup *tempr = (ap.IsBound() ?
      op->GetGroup() :
      op->vtkSubCommunicator::GetGroup());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubCommunicator_SetGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  vtkProcessGroup *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
  {
    if (ap.IsBound())
    {
      op->SetGroup(temp0);
    }
    else
    {
      op->vtkSubCommunicator::SetGroup(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubCommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->SendVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSubCommunicator::SendVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkSubCommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubCommunicator *op = static_cast<vtkSubCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSubCommunicator::ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}

static PyMethodDef PyvtkSubCommunicator_Methods[] = {
  {"IsTypeOf", PyvtkSubCommunicator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSubCommunicator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSubCommunicator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSubCommunicator\nC++: static vtkSubCommunicator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSubCommunicator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSubCommunicator\nC++: vtkSubCommunicator *NewInstance()\n\n"},
  {"GetGroup", PyvtkSubCommunicator_GetGroup, METH_VARARGS,
   "V.GetGroup() -> vtkProcessGroup\nC++: virtual vtkProcessGroup *GetGroup()\n\nSet/get the group on which communication will happen.\n"},
  {"SetGroup", PyvtkSubCommunicator_SetGroup, METH_VARARGS,
   "V.SetGroup(vtkProcessGroup)\nC++: virtual void SetGroup(vtkProcessGroup *group)\n\nSet/get the group on which communication will happen.\n"},
  {"SendVoidArray", PyvtkSubCommunicator_SendVoidArray, METH_VARARGS,
   "V.SendVoidArray(void, int, int, int, int) -> int\nC++: int SendVoidArray(const void *data, vtkIdType length,\n    int type, int remoteHandle, int tag) override;\n\nImplementation for abstract supercalss.\n"},
  {"ReceiveVoidArray", PyvtkSubCommunicator_ReceiveVoidArray, METH_VARARGS,
   "V.ReceiveVoidArray(void, int, int, int, int) -> int\nC++: int ReceiveVoidArray(void *data, vtkIdType length, int type,\n    int remoteHandle, int tag) override;\n\nImplementation for abstract supercalss.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSubCommunicator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkParallelCorePython.vtkSubCommunicator", // tp_name
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
  PyvtkSubCommunicator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSubCommunicator_StaticNew()
{
  return vtkSubCommunicator::New();
}

PyObject *PyvtkSubCommunicator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSubCommunicator_Type, PyvtkSubCommunicator_Methods,
    "vtkSubCommunicator",
 &PyvtkSubCommunicator_StaticNew);

  PyTypeObject *pytype = &PyvtkSubCommunicator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCommunicator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSubCommunicator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSubCommunicator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSubCommunicator", o) != 0)
  {
    Py_DECREF(o);
  }

}

