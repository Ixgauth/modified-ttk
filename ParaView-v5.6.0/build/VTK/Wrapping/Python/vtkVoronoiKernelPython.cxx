// python wrapper for vtkVoronoiKernel
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
#include "vtkVoronoiKernel.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVoronoiKernel(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVoronoiKernel_ClassNew(); }

#ifndef DECLARED_PyvtkInterpolationKernel_ClassNew
extern "C" { PyObject *PyvtkInterpolationKernel_ClassNew(); }
#define DECLARED_PyvtkInterpolationKernel_ClassNew
#endif

static const char *PyvtkVoronoiKernel_Doc =
  "vtkVoronoiKernel - a Voronoi interpolation kernel\n\n"
  "Superclass: vtkInterpolationKernel\n\n"
  "vtkVoronoiKernel is an interpolation kernel that simply returns the\n"
  "closest point to a point to be interpolated. A single weight is\n"
  "returned with value=1.0.\n\n"
  "@warning\n"
  "In degenerate cases (where a point x is equidistance from more than\n"
  "one point) the kernel basis arbitrarily chooses one of the\n"
  "equidistant points.\n\n"
  "@sa\n"
  "vtkInterpolationKernel vtkGeneralizedKernel\n"
  "vtkProbabilisticVoronoiKernel\n\n";


static PyObject *
PyvtkVoronoiKernel_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVoronoiKernel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoiKernel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoiKernel *op = static_cast<vtkVoronoiKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVoronoiKernel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoiKernel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVoronoiKernel *tempr = vtkVoronoiKernel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoiKernel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoiKernel *op = static_cast<vtkVoronoiKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVoronoiKernel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVoronoiKernel::NewInstance());

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
PyvtkVoronoiKernel_ComputeBasis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBasis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoiKernel *op = static_cast<vtkVoronoiKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkIdType temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->ComputeBasis(temp0, temp1, temp2) :
      op->vtkVoronoiKernel::ComputeBasis(temp0, temp1, temp2));

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
PyvtkVoronoiKernel_ComputeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoiKernel *op = static_cast<vtkVoronoiKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray"))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->ComputeWeights(temp0, temp1, temp2) :
      op->vtkVoronoiKernel::ComputeWeights(temp0, temp1, temp2));

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

static PyMethodDef PyvtkVoronoiKernel_Methods[] = {
  {"IsTypeOf", PyvtkVoronoiKernel_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"IsA", PyvtkVoronoiKernel_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"SafeDownCast", PyvtkVoronoiKernel_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVoronoiKernel\nC++: static vtkVoronoiKernel *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"NewInstance", PyvtkVoronoiKernel_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVoronoiKernel\nC++: vtkVoronoiKernel *NewInstance()\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"ComputeBasis", PyvtkVoronoiKernel_ComputeBasis, METH_VARARGS,
   "V.ComputeBasis([float, float, float], vtkIdList, int) -> int\nC++: vtkIdType ComputeBasis(double x[3], vtkIdList *pIds,\n    vtkIdType ptId=0) override;\n\nGiven a point x (and optional associated ptId), determine the\npoints around x which form an interpolation basis. The user must\nprovide the vtkIdList pIds, which will be dynamically resized as\nnecessary. The method returns the number of points in the basis.\nTypically this method is called before ComputeWeights().\n"},
  {"ComputeWeights", PyvtkVoronoiKernel_ComputeWeights, METH_VARARGS,
   "V.ComputeWeights([float, float, float], vtkIdList, vtkDoubleArray)\n     -> int\nC++: vtkIdType ComputeWeights(double x[3], vtkIdList *pIds,\n    vtkDoubleArray *weights) override;\n\nGiven a point x, and a list of basis points pIds, compute\ninterpolation weights associated with these basis points.  Note\nthat both the nearby basis points list pIds and the weights array\nare provided by the caller of the method, and may be dynamically\nresized as necessary. Typically this method is called after\nComputeBasis(), although advanced users can invoke\nComputeWeights() and provide the interpolation basis points pIds\ndirectly.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVoronoiKernel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkVoronoiKernel", // tp_name
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
  PyvtkVoronoiKernel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVoronoiKernel_StaticNew()
{
  return vtkVoronoiKernel::New();
}

PyObject *PyvtkVoronoiKernel_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVoronoiKernel_Type, PyvtkVoronoiKernel_Methods,
    "vtkVoronoiKernel",
 &PyvtkVoronoiKernel_StaticNew);

  PyTypeObject *pytype = &PyvtkVoronoiKernel_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInterpolationKernel_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVoronoiKernel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVoronoiKernel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVoronoiKernel", o) != 0)
  {
    Py_DECREF(o);
  }

}

