// python wrapper for vtkInterpolationKernel
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
#include "vtkInterpolationKernel.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInterpolationKernel(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInterpolationKernel_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkInterpolationKernel_Doc =
  "vtkInterpolationKernel - base class for interpolation kernels\n\n"
  "Superclass: vtkObject\n\n"
  "vtkInterpolationKernel specifies an abstract interface for\n"
  "interpolation kernels. An interpolation kernel is used to produce an\n"
  "interpolated data value at a point X from the points + data in a\n"
  "local neighborhood surrounding X. For example, given the N nearest\n"
  "points surrounding X, the interpolation kernel provides N weights,\n"
  "which when combined with the N data values associated with these\n"
  "nearest points, produces an interpolated data value at point X.\n\n"
  "Note that various kernel initialization methods are provided. The\n"
  "basic method requires providing a point locator to accelerate\n"
  "neighborhood queries. Some kernels may refer back to the original\n"
  "dataset, or the point attribute data associated with the dataset. The\n"
  "initialization method enables different styles of initialization and\n"
  "is kernel-dependent.\n\n"
  "Typically the kernels are invoked in two parts: first, the basis is\n"
  "computed using the supplied point locator and dataset. This basis is\n"
  "a local footprint of point surrounding a poitnX. In this footprint\n"
  "are the neighboring points used to compute the interpolation weights.\n"
  "Then, the weights are computed from points forming the basis.\n"
  "However, advanced users can develop their own basis, skipping the\n"
  "ComputeBasis() method, and then invoke ComputeWeights() directly.\n\n"
  "@warning\n"
  "The ComputeBasis() and ComputeWeights() methods must be thread safe\n"
  "as they are used in threaded algorithms.\n\n"
  "@sa\n"
  "vtkPointInterpolator vtkPointInterpolator2D vtkGeneralizedKernel\n"
  "vtkGaussianKernel vtkSPHKernel vtkShepardKernel vtkVoronoiKernel\n\n";


static PyObject *
PyvtkInterpolationKernel_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInterpolationKernel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolationKernel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolationKernel *op = static_cast<vtkInterpolationKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInterpolationKernel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolationKernel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInterpolationKernel *tempr = vtkInterpolationKernel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolationKernel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolationKernel *op = static_cast<vtkInterpolationKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInterpolationKernel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInterpolationKernel::NewInstance());

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
PyvtkInterpolationKernel_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolationKernel *op = static_cast<vtkInterpolationKernel *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  vtkPointData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkPointData"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInterpolationKernel::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolationKernel_SetRequiresInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequiresInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolationKernel *op = static_cast<vtkInterpolationKernel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequiresInitialization(temp0);
    }
    else
    {
      op->vtkInterpolationKernel::SetRequiresInitialization(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolationKernel_GetRequiresInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiresInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolationKernel *op = static_cast<vtkInterpolationKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRequiresInitialization() :
      op->vtkInterpolationKernel::GetRequiresInitialization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolationKernel_RequiresInitializationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresInitializationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolationKernel *op = static_cast<vtkInterpolationKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RequiresInitializationOn();
    }
    else
    {
      op->vtkInterpolationKernel::RequiresInitializationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolationKernel_RequiresInitializationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresInitializationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolationKernel *op = static_cast<vtkInterpolationKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RequiresInitializationOff();
    }
    else
    {
      op->vtkInterpolationKernel::RequiresInitializationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolationKernel_ComputeBasis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBasis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolationKernel *op = static_cast<vtkInterpolationKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkIdType temp2 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = op->ComputeBasis(temp0, temp1, temp2);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolationKernel_ComputeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolationKernel *op = static_cast<vtkInterpolationKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray"))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = op->ComputeWeights(temp0, temp1, temp2);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInterpolationKernel_Methods[] = {
  {"IsTypeOf", PyvtkInterpolationKernel_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard method for type and printing.\n"},
  {"IsA", PyvtkInterpolationKernel_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard method for type and printing.\n"},
  {"SafeDownCast", PyvtkInterpolationKernel_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInterpolationKernel\nC++: static vtkInterpolationKernel *SafeDownCast(vtkObjectBase *o)\n\nStandard method for type and printing.\n"},
  {"NewInstance", PyvtkInterpolationKernel_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInterpolationKernel\nC++: vtkInterpolationKernel *NewInstance()\n\nStandard method for type and printing.\n"},
  {"Initialize", PyvtkInterpolationKernel_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractPointLocator, vtkDataSet, vtkPointData)\nC++: virtual void Initialize(vtkAbstractPointLocator *loc,\n    vtkDataSet *ds, vtkPointData *pd)\n\nInitialize the kernel. Pass information into the kernel that is\nnecessary to subsequently perform evaluation. The locator refers\nto the points that are to be interpolated from; these points (ds)\nand the associated point data (pd) are provided as well. Note\nthat some kernels may require manual setup / initialization, in\nwhich case set RequiresInitialization to false, do not call\nInitialize(), and of course manually initialize the kernel.\n"},
  {"SetRequiresInitialization", PyvtkInterpolationKernel_SetRequiresInitialization, METH_VARARGS,
   "V.SetRequiresInitialization(bool)\nC++: virtual void SetRequiresInitialization(bool _arg)\n\nIndicate whether the kernel needs initialization. By default this\ndata member is true, and using classes will invoke Initialize()\non the kernel. However, if the user takes over initialization\nmanually, then set RequiresInitialization to false (0).\n"},
  {"GetRequiresInitialization", PyvtkInterpolationKernel_GetRequiresInitialization, METH_VARARGS,
   "V.GetRequiresInitialization() -> bool\nC++: virtual bool GetRequiresInitialization()\n\nIndicate whether the kernel needs initialization. By default this\ndata member is true, and using classes will invoke Initialize()\non the kernel. However, if the user takes over initialization\nmanually, then set RequiresInitialization to false (0).\n"},
  {"RequiresInitializationOn", PyvtkInterpolationKernel_RequiresInitializationOn, METH_VARARGS,
   "V.RequiresInitializationOn()\nC++: virtual void RequiresInitializationOn()\n\nIndicate whether the kernel needs initialization. By default this\ndata member is true, and using classes will invoke Initialize()\non the kernel. However, if the user takes over initialization\nmanually, then set RequiresInitialization to false (0).\n"},
  {"RequiresInitializationOff", PyvtkInterpolationKernel_RequiresInitializationOff, METH_VARARGS,
   "V.RequiresInitializationOff()\nC++: virtual void RequiresInitializationOff()\n\nIndicate whether the kernel needs initialization. By default this\ndata member is true, and using classes will invoke Initialize()\non the kernel. However, if the user takes over initialization\nmanually, then set RequiresInitialization to false (0).\n"},
  {"ComputeBasis", PyvtkInterpolationKernel_ComputeBasis, METH_VARARGS,
   "V.ComputeBasis([float, float, float], vtkIdList, int) -> int\nC++: virtual vtkIdType ComputeBasis(double x[3], vtkIdList *pIds,\n    vtkIdType ptId=0)\n\nGiven a point x (and optional associated point id), determine the\npoints around x which form an interpolation basis. The user must\nprovide the vtkIdList pIds, which will be dynamically resized as\nnecessary. The method returns the number of points in the basis.\nTypically this method is called before ComputeWeights(). Note\nthat ptId is optional in most cases, although in some kernels it\nis used to facilitate basis computation.\n"},
  {"ComputeWeights", PyvtkInterpolationKernel_ComputeWeights, METH_VARARGS,
   "V.ComputeWeights([float, float, float], vtkIdList, vtkDoubleArray)\n     -> int\nC++: virtual vtkIdType ComputeWeights(double x[3],\n    vtkIdList *pIds, vtkDoubleArray *weights)\n\nGiven a point x, and a list of basis points pIds, compute\ninterpolation weights associated with these basis points.  Note\nthat both the nearby basis points list pIds and the weights array\nare provided by the caller of the method, and may be dynamically\nresized as necessary. The method returns the number of weights\n(pIds may be resized in some cases). Typically this method is\ncalled after ComputeBasis(), although advanced users can invoke\nComputeWeights() and provide the interpolation basis points pIds\ndirectly.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInterpolationKernel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkInterpolationKernel", // tp_name
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
  PyvtkInterpolationKernel_Doc, // tp_doc
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

PyObject *PyvtkInterpolationKernel_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInterpolationKernel_Type, PyvtkInterpolationKernel_Methods,
    "vtkInterpolationKernel",
 nullptr);

  PyTypeObject *pytype = &PyvtkInterpolationKernel_Type;

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

void PyVTKAddFile_vtkInterpolationKernel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInterpolationKernel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInterpolationKernel", o) != 0)
  {
    Py_DECREF(o);
  }

}

