// python wrapper for vtkAMRStreamingPriorityQueue
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
#include "vtkAMRStreamingPriorityQueue.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRStreamingPriorityQueue(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRStreamingPriorityQueue_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAMRStreamingPriorityQueue_Doc =
  "vtkAMRStreamingPriorityQueue - implements a coverage based priority\nqueue for vtkOverlappingAMR dataset.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAMRStreamingPriorityQueue is used by representations supporting\n"
  "streaming of AMR datasets to determine the priorities for blocks in\n"
  "the dataset. This class relies on the bounds information provided by\n"
  "the AMR meta-data i.e. vtkAMRInformation. This class support\n"
  "view-based priority computation. Simply provide the view planes\n"
  "(returned by vtkCamera::GetFrustumPlanes()) to the\n"
  "vtkAMRStreamingPriorityQueue::Update() call to update the prorities\n"
  "for the blocks currently in the queue.\n"
  "@sa\n"
  "vtkAMROutlineRepresentation, vtkAMRStreamingVolumeRepresentation.\n\n";


static PyObject *
PyvtkAMRStreamingPriorityQueue_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRStreamingPriorityQueue::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRStreamingPriorityQueue::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRStreamingPriorityQueue *tempr = vtkAMRStreamingPriorityQueue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRStreamingPriorityQueue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRStreamingPriorityQueue::NewInstance());

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
PyvtkAMRStreamingPriorityQueue_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

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
      op->vtkAMRStreamingPriorityQueue::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRStreamingPriorityQueue::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  vtkAMRInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAMRInformation"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkAMRStreamingPriorityQueue::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_Reinitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reinitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reinitialize();
    }
    else
    {
      op->vtkAMRStreamingPriorityQueue::Reinitialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  const size_t size0 = 24;
  double temp0[24];
  const size_t size1 = 6;
  double temp1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->Update(temp0, temp1);
    }
    else
    {
      op->vtkAMRStreamingPriorityQueue::Update(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRStreamingPriorityQueue_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  const size_t size0 = 24;
  double temp0[24];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkAMRStreamingPriorityQueue::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRStreamingPriorityQueue_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAMRStreamingPriorityQueue_Update_s1(self, args);
    case 1:
      return PyvtkAMRStreamingPriorityQueue_Update_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return nullptr;
}



static PyObject *
PyvtkAMRStreamingPriorityQueue_IsEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsEmpty() :
      op->vtkAMRStreamingPriorityQueue::IsEmpty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRStreamingPriorityQueue_Pop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRStreamingPriorityQueue *op = static_cast<vtkAMRStreamingPriorityQueue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->Pop() :
      op->vtkAMRStreamingPriorityQueue::Pop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRStreamingPriorityQueue_Methods[] = {
  {"IsTypeOf", PyvtkAMRStreamingPriorityQueue_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRStreamingPriorityQueue_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRStreamingPriorityQueue_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRStreamingPriorityQueue\nC++: static vtkAMRStreamingPriorityQueue *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRStreamingPriorityQueue_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRStreamingPriorityQueue\nC++: vtkAMRStreamingPriorityQueue *NewInstance()\n\n"},
  {"SetController", PyvtkAMRStreamingPriorityQueue_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *)\n\nIf the controller is specified, the queue can be used in\nparallel. So long as Initialize(), Update() and Pop() methods are\ncalled on all processes (need not be synchronized) and all\nprocess get the same amr tree and view_planes (which is generally\ntrue with ParaView), the blocks are distributed among the\nprocesses. By default, this is set to the\nvtkMultiProcessController::GetGlobalController();\n"},
  {"GetController", PyvtkAMRStreamingPriorityQueue_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nIf the controller is specified, the queue can be used in\nparallel. So long as Initialize(), Update() and Pop() methods are\ncalled on all processes (need not be synchronized) and all\nprocess get the same amr tree and view_planes (which is generally\ntrue with ParaView), the blocks are distributed among the\nprocesses. By default, this is set to the\nvtkMultiProcessController::GetGlobalController();\n"},
  {"Initialize", PyvtkAMRStreamingPriorityQueue_Initialize, METH_VARARGS,
   "V.Initialize(vtkAMRInformation)\nC++: void Initialize(vtkAMRInformation *amr)\n\nInitializes the queue. All information about items in the is\nlost.\n"},
  {"Reinitialize", PyvtkAMRStreamingPriorityQueue_Reinitialize, METH_VARARGS,
   "V.Reinitialize()\nC++: void Reinitialize()\n\nRe-initializes the priority queue using the amr structure given\nto the most recent call to Initialize().\n"},
  {"Update", PyvtkAMRStreamingPriorityQueue_Update, METH_VARARGS,
   "V.Update((float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float), (float,\n    float, float, float, float, float))\nC++: void Update(const double view_planes[24],\n    const double clamp_bounds[6])\nV.Update((float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float))\nC++: void Update(const double view_planes[24])\n\nUpdates the priorities of blocks based on the new view frustum\nplanes. Information about blocks \"popped\" from the queue is\npreserved and those blocks are not reinserted in the queue.\n"},
  {"IsEmpty", PyvtkAMRStreamingPriorityQueue_IsEmpty, METH_VARARGS,
   "V.IsEmpty() -> bool\nC++: bool IsEmpty()\n\nReturns if the queue is empty.\n"},
  {"Pop", PyvtkAMRStreamingPriorityQueue_Pop, METH_VARARGS,
   "V.Pop() -> int\nC++: unsigned int Pop()\n\nPops and returns of composite id for the block at the top of the\nqueue. Test if the queue is empty before calling this method.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRStreamingPriorityQueue_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkAMRStreamingPriorityQueue", // tp_name
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
  PyvtkAMRStreamingPriorityQueue_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRStreamingPriorityQueue_StaticNew()
{
  return vtkAMRStreamingPriorityQueue::New();
}

PyObject *PyvtkAMRStreamingPriorityQueue_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRStreamingPriorityQueue_Type, PyvtkAMRStreamingPriorityQueue_Methods,
    "vtkAMRStreamingPriorityQueue",
 &PyvtkAMRStreamingPriorityQueue_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRStreamingPriorityQueue_Type;

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

void PyVTKAddFile_vtkAMRStreamingPriorityQueue(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRStreamingPriorityQueue_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRStreamingPriorityQueue", o) != 0)
  {
    Py_DECREF(o);
  }

}

