// python wrapper for vtkPartitionOrderingInterface
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
#include "vtkPartitionOrderingInterface.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPartitionOrderingInterface(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPartitionOrderingInterface_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPartitionOrderingInterface_Doc =
  "vtkPartitionOrderingInterface - Interface for ordering compositing.\n\n"
  "Superclass: vtkObject\n\n"
  "An interface class to get the order of process for parallel\n"
  "     compositing.\n\n"
  "@sa\n"
  "     vtkPKdTree,vtkPartitionOrdering\n\n";


static PyObject *
PyvtkPartitionOrderingInterface_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPartitionOrderingInterface::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrderingInterface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrderingInterface *op = static_cast<vtkPartitionOrderingInterface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPartitionOrderingInterface::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrderingInterface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPartitionOrderingInterface *tempr = vtkPartitionOrderingInterface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrderingInterface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrderingInterface *op = static_cast<vtkPartitionOrderingInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPartitionOrderingInterface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPartitionOrderingInterface::NewInstance());

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
PyvtkPartitionOrderingInterface_GetNumberOfRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrderingInterface *op = static_cast<vtkPartitionOrderingInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegions() :
      op->vtkPartitionOrderingInterface::GetNumberOfRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrderingInterface_ViewOrderAllProcessesInDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllProcessesInDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrderingInterface *op = static_cast<vtkPartitionOrderingInterface *>(vp);

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
      op->vtkPartitionOrderingInterface::ViewOrderAllProcessesInDirection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrderingInterface_ViewOrderAllProcessesFromPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllProcessesFromPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrderingInterface *op = static_cast<vtkPartitionOrderingInterface *>(vp);

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
      op->vtkPartitionOrderingInterface::ViewOrderAllProcessesFromPosition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrderingInterface_SetImplementation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplementation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrderingInterface *op = static_cast<vtkPartitionOrderingInterface *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->SetImplementation(temp0);
    }
    else
    {
      op->vtkPartitionOrderingInterface::SetImplementation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrderingInterface_GetImplementation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplementation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrderingInterface *op = static_cast<vtkPartitionOrderingInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetImplementation() :
      op->vtkPartitionOrderingInterface::GetImplementation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionOrderingInterface_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionOrderingInterface *op = static_cast<vtkPartitionOrderingInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPartitionOrderingInterface::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionOrderingInterface_Methods[] = {
  {"IsTypeOf", PyvtkPartitionOrderingInterface_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPartitionOrderingInterface_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPartitionOrderingInterface_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPartitionOrderingInterface\nC++: static vtkPartitionOrderingInterface *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPartitionOrderingInterface_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPartitionOrderingInterface\nC++: vtkPartitionOrderingInterface *NewInstance()\n\n"},
  {"GetNumberOfRegions", PyvtkPartitionOrderingInterface_GetNumberOfRegions, METH_VARARGS,
   "V.GetNumberOfRegions() -> int\nC++: int GetNumberOfRegions()\n\n"},
  {"ViewOrderAllProcessesInDirection", PyvtkPartitionOrderingInterface_ViewOrderAllProcessesInDirection, METH_VARARGS,
   "V.ViewOrderAllProcessesInDirection((float, float, float),\n    vtkIntArray) -> int\nC++: int ViewOrderAllProcessesInDirection(\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nReturn a list of all processes in order from front to back given\na vector direction of projection.  Use this to do visibility\nsorts in parallel projection mode. `orderedList' will be resized\nto the number of processes. The return value is the number of\nprocesses.\n\\pre orderedList_exists: orderedList!=0\n"},
  {"ViewOrderAllProcessesFromPosition", PyvtkPartitionOrderingInterface_ViewOrderAllProcessesFromPosition, METH_VARARGS,
   "V.ViewOrderAllProcessesFromPosition((float, float, float),\n    vtkIntArray) -> int\nC++: int ViewOrderAllProcessesFromPosition(\n    const double cameraPosition[3], vtkIntArray *orderedList)\n\nReturn a list of all processes in order from front to back given\na camera position.  Use this to do visibility sorts in\nperspective projection mode. `orderedList' will be resized to the\nnumber of processes. The return value is the number of processes.\n\\pre orderedList_exists: orderedList!=0\n"},
  {"SetImplementation", PyvtkPartitionOrderingInterface_SetImplementation, METH_VARARGS,
   "V.SetImplementation(vtkObject)\nC++: void SetImplementation(vtkObject *implementation)\n\nSet the implementation to use for the view order methods. Current\noptions are vtkPKdTree and vtkPartitionOrdering.\n"},
  {"GetImplementation", PyvtkPartitionOrderingInterface_GetImplementation, METH_VARARGS,
   "V.GetImplementation() -> vtkObject\nC++: vtkObject *GetImplementation()\n\nSet the implementation to use for the view order methods. Current\noptions are vtkPKdTree and vtkPartitionOrdering.\n"},
  {"GetMTime", PyvtkPartitionOrderingInterface_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPartitionOrderingInterface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPartitionOrderingInterface", // tp_name
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
  PyvtkPartitionOrderingInterface_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPartitionOrderingInterface_StaticNew()
{
  return vtkPartitionOrderingInterface::New();
}

PyObject *PyvtkPartitionOrderingInterface_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPartitionOrderingInterface_Type, PyvtkPartitionOrderingInterface_Methods,
    "vtkPartitionOrderingInterface",
 &PyvtkPartitionOrderingInterface_StaticNew);

  PyTypeObject *pytype = &PyvtkPartitionOrderingInterface_Type;

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

void PyVTKAddFile_vtkPartitionOrderingInterface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPartitionOrderingInterface_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPartitionOrderingInterface", o) != 0)
  {
    Py_DECREF(o);
  }

}

