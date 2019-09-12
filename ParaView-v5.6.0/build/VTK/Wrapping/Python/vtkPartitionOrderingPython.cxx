// python wrapper for vtkPartitionOrdering
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
#include "vtkPartitionOrdering.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPartitionOrdering(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPartitionOrdering_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPartitionOrdering_Doc =
  "vtkPartitionOrdering - Build an ordering partitions for compositing.\n\n"
  "Superclass: vtkObject\n\n"
  "Build, in parallel, a list of bounding boxes of one or more\n"
  "     vtkDataSets distributed across processors.  We assume each\n"
  "     process has read in one portion of a large distributed data set.\n"
  "     When done, each process has access to the bounding boxes,\n"
  "     can obtain information about which process contains\n"
  "     data for each spatial region, and can depth sort the spatial\n"
  "     regions.\n\n"
  "@sa\n"
  "     vtkPKdTree\n\n";


static PyObject *
PyvtkPartitionOrdering_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPartitionOrdering::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrdering_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrdering *op = static_cast<vtkPartitionOrdering *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPartitionOrdering::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrdering_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPartitionOrdering *tempr = vtkPartitionOrdering::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrdering_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrdering *op = static_cast<vtkPartitionOrdering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPartitionOrdering *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPartitionOrdering::NewInstance());

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
PyvtkPartitionOrdering_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrdering *op = static_cast<vtkPartitionOrdering *>(vp);

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
      op->vtkPartitionOrdering::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrdering_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrdering *op = static_cast<vtkPartitionOrdering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPartitionOrdering::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrdering_GetNumberOfRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrdering *op = static_cast<vtkPartitionOrdering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegions() :
      op->vtkPartitionOrdering::GetNumberOfRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrdering_ViewOrderAllProcessesInDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllProcessesInDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrdering *op = static_cast<vtkPartitionOrdering *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIntArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
  {
    int tempr = (ap.IsBound() ?
      op->ViewOrderAllProcessesInDirection(temp0, temp1) :
      op->vtkPartitionOrdering::ViewOrderAllProcessesInDirection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrdering_ViewOrderAllProcessesFromPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllProcessesFromPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrdering *op = static_cast<vtkPartitionOrdering *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIntArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
  {
    int tempr = (ap.IsBound() ?
      op->ViewOrderAllProcessesFromPosition(temp0, temp1) :
      op->vtkPartitionOrdering::ViewOrderAllProcessesFromPosition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrdering_Construct_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Construct");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrdering *op = static_cast<vtkPartitionOrdering *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    bool tempr = (ap.IsBound() ?
      op->Construct(temp0) :
      op->vtkPartitionOrdering::Construct(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPartitionOrdering_Construct_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Construct");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrdering *op = static_cast<vtkPartitionOrdering *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    bool tempr = (ap.IsBound() ?
      op->Construct(temp0) :
      op->vtkPartitionOrdering::Construct(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionOrdering_Construct_Methods[] = {
  {nullptr, PyvtkPartitionOrdering_Construct_s1, METH_VARARGS,
   "@V *vtkDataSet"},
  {nullptr, PyvtkPartitionOrdering_Construct_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPartitionOrdering_Construct(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPartitionOrdering_Construct_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Construct");
  return nullptr;
}


static PyMethodDef PyvtkPartitionOrdering_Methods[] = {
  {"IsTypeOf", PyvtkPartitionOrdering_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPartitionOrdering_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPartitionOrdering_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPartitionOrdering\nC++: static vtkPartitionOrdering *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPartitionOrdering_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPartitionOrdering\nC++: vtkPartitionOrdering *NewInstance()\n\n"},
  {"SetController", PyvtkPartitionOrdering_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object\n"},
  {"GetController", PyvtkPartitionOrdering_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet/Get the communicator object\n"},
  {"GetNumberOfRegions", PyvtkPartitionOrdering_GetNumberOfRegions, METH_VARARGS,
   "V.GetNumberOfRegions() -> int\nC++: int GetNumberOfRegions()\n\nGet the number of processes/regions.\n"},
  {"ViewOrderAllProcessesInDirection", PyvtkPartitionOrdering_ViewOrderAllProcessesInDirection, METH_VARARGS,
   "V.ViewOrderAllProcessesInDirection((float, float, float),\n    vtkIntArray) -> int\nC++: virtual int ViewOrderAllProcessesInDirection(\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nReturn a list of all processes in order from front to back given\na vector direction of projection.  Use this to do visibility\nsorts in parallel projection mode. `orderedList' will be resized\nto the number of processes. The return value is the number of\nprocesses.\n\\pre orderedList_exists: orderedList!=0\n"},
  {"ViewOrderAllProcessesFromPosition", PyvtkPartitionOrdering_ViewOrderAllProcessesFromPosition, METH_VARARGS,
   "V.ViewOrderAllProcessesFromPosition((float, float, float),\n    vtkIntArray) -> int\nC++: virtual int ViewOrderAllProcessesFromPosition(\n    const double cameraPosition[3], vtkIntArray *orderedList)\n\nReturn a list of all processes in order from front to back given\na camera position.  Use this to do visibility sorts in\nperspective projection mode. `orderedList' will be resized to the\nnumber of processes. The return value is the number of processes.\n\\pre orderedList_exists: orderedList!=0\n"},
  {"Construct", PyvtkPartitionOrdering_Construct, METH_VARARGS,
   "V.Construct(vtkDataSet) -> bool\nC++: bool Construct(vtkDataSet *grid)\nV.Construct((float, float, float, float, float, float)) -> bool\nC++: bool Construct(const double localBounds[6])\n\nConstruct the global bounding boxes based.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPartitionOrdering_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPartitionOrdering", // tp_name
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
  PyvtkPartitionOrdering_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPartitionOrdering_StaticNew()
{
  return vtkPartitionOrdering::New();
}

PyObject *PyvtkPartitionOrdering_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPartitionOrdering_Type, PyvtkPartitionOrdering_Methods,
    "vtkPartitionOrdering",
 &PyvtkPartitionOrdering_StaticNew);

  PyTypeObject *pytype = &PyvtkPartitionOrdering_Type;

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

void PyVTKAddFile_vtkPartitionOrdering(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPartitionOrdering_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPartitionOrdering", o) != 0)
  {
    Py_DECREF(o);
  }

}

