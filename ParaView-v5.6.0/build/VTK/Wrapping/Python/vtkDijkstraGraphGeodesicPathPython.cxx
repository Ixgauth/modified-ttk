// python wrapper for vtkDijkstraGraphGeodesicPath
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
#include "vtkDijkstraGraphGeodesicPath.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDijkstraGraphGeodesicPath(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDijkstraGraphGeodesicPath_ClassNew(); }

#ifndef DECLARED_PyvtkGraphGeodesicPath_ClassNew
extern "C" { PyObject *PyvtkGraphGeodesicPath_ClassNew(); }
#define DECLARED_PyvtkGraphGeodesicPath_ClassNew
#endif

static const char *PyvtkDijkstraGraphGeodesicPath_Doc =
  "vtkDijkstraGraphGeodesicPath - Dijkstra algorithm to compute the\ngraph geodesic.\n\n"
  "Superclass: vtkGraphGeodesicPath\n\n"
  "Takes as input a polygonal mesh and performs a single source shortest\n"
  "path calculation. Dijkstra's algorithm is used. The implementation is\n"
  "similar to the one described in Introduction to Algorithms (Second\n"
  "Edition) by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest,\n"
  "and Cliff Stein, published by MIT Press and McGraw-Hill. Some minor\n"
  "enhancement are added though. All vertices are not pushed on the heap\n"
  "at start, instead a front set is maintained. The heap is implemented\n"
  "as a binary heap. The output of the filter is a set of lines\n"
  "describing the shortest path from StartVertex to EndVertex.\n\n"
  "@warning\n"
  "The input polydata must have only triangle cells.\n\n"
  "@par Thanks: The class was contributed by Rasmus Paulsen.\n"
  "www.imm.dtu.dk/~rrp/VTK . Also thanks to Alexandre Gouaillard and\n"
  "Shoaib Ghias for bug fixes and enhancements.\n\n";


static PyObject *
PyvtkDijkstraGraphGeodesicPath_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDijkstraGraphGeodesicPath::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDijkstraGraphGeodesicPath::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDijkstraGraphGeodesicPath *tempr = vtkDijkstraGraphGeodesicPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDijkstraGraphGeodesicPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDijkstraGraphGeodesicPath::NewInstance());

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
PyvtkDijkstraGraphGeodesicPath_GetIdList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetIdList() :
      op->vtkDijkstraGraphGeodesicPath::GetIdList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_SetStopWhenEndReached(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStopWhenEndReached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStopWhenEndReached(temp0);
    }
    else
    {
      op->vtkDijkstraGraphGeodesicPath::SetStopWhenEndReached(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetStopWhenEndReached(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStopWhenEndReached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStopWhenEndReached() :
      op->vtkDijkstraGraphGeodesicPath::GetStopWhenEndReached());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_StopWhenEndReachedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopWhenEndReachedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StopWhenEndReachedOn();
    }
    else
    {
      op->vtkDijkstraGraphGeodesicPath::StopWhenEndReachedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_StopWhenEndReachedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopWhenEndReachedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StopWhenEndReachedOff();
    }
    else
    {
      op->vtkDijkstraGraphGeodesicPath::StopWhenEndReachedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_SetUseScalarWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScalarWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseScalarWeights(temp0);
    }
    else
    {
      op->vtkDijkstraGraphGeodesicPath::SetUseScalarWeights(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetUseScalarWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseScalarWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseScalarWeights() :
      op->vtkDijkstraGraphGeodesicPath::GetUseScalarWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_UseScalarWeightsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarWeightsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseScalarWeightsOn();
    }
    else
    {
      op->vtkDijkstraGraphGeodesicPath::UseScalarWeightsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_UseScalarWeightsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarWeightsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseScalarWeightsOff();
    }
    else
    {
      op->vtkDijkstraGraphGeodesicPath::UseScalarWeightsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_SetRepelPathFromVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepelPathFromVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepelPathFromVertices(temp0);
    }
    else
    {
      op->vtkDijkstraGraphGeodesicPath::SetRepelPathFromVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetRepelPathFromVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepelPathFromVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepelPathFromVertices() :
      op->vtkDijkstraGraphGeodesicPath::GetRepelPathFromVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_RepelPathFromVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepelPathFromVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RepelPathFromVerticesOn();
    }
    else
    {
      op->vtkDijkstraGraphGeodesicPath::RepelPathFromVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_RepelPathFromVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepelPathFromVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RepelPathFromVerticesOff();
    }
    else
    {
      op->vtkDijkstraGraphGeodesicPath::RepelPathFromVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_SetRepelVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepelVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetRepelVertices(temp0);
    }
    else
    {
      op->vtkDijkstraGraphGeodesicPath::SetRepelVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetRepelVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepelVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetRepelVertices() :
      op->vtkDijkstraGraphGeodesicPath::GetRepelVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraGraphGeodesicPath_GetCumulativeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCumulativeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraGraphGeodesicPath *op = static_cast<vtkDijkstraGraphGeodesicPath *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->GetCumulativeWeights(temp0);
    }
    else
    {
      op->vtkDijkstraGraphGeodesicPath::GetCumulativeWeights(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDijkstraGraphGeodesicPath_Methods[] = {
  {"IsTypeOf", PyvtkDijkstraGraphGeodesicPath_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for printing and determining type information.\n"},
  {"IsA", PyvtkDijkstraGraphGeodesicPath_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for printing and determining type information.\n"},
  {"SafeDownCast", PyvtkDijkstraGraphGeodesicPath_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDijkstraGraphGeodesicPath\nC++: static vtkDijkstraGraphGeodesicPath *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for printing and determining type information.\n"},
  {"NewInstance", PyvtkDijkstraGraphGeodesicPath_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDijkstraGraphGeodesicPath\nC++: vtkDijkstraGraphGeodesicPath *NewInstance()\n\nStandard methods for printing and determining type information.\n"},
  {"GetIdList", PyvtkDijkstraGraphGeodesicPath_GetIdList, METH_VARARGS,
   "V.GetIdList() -> vtkIdList\nC++: virtual vtkIdList *GetIdList()\n\nThe vertex ids (of the input polydata) on the shortest path\n"},
  {"SetStopWhenEndReached", PyvtkDijkstraGraphGeodesicPath_SetStopWhenEndReached, METH_VARARGS,
   "V.SetStopWhenEndReached(int)\nC++: virtual void SetStopWhenEndReached(vtkTypeBool _arg)\n\nStop when the end vertex is reached or calculate shortest path to\nall vertices\n"},
  {"GetStopWhenEndReached", PyvtkDijkstraGraphGeodesicPath_GetStopWhenEndReached, METH_VARARGS,
   "V.GetStopWhenEndReached() -> int\nC++: virtual vtkTypeBool GetStopWhenEndReached()\n\nStop when the end vertex is reached or calculate shortest path to\nall vertices\n"},
  {"StopWhenEndReachedOn", PyvtkDijkstraGraphGeodesicPath_StopWhenEndReachedOn, METH_VARARGS,
   "V.StopWhenEndReachedOn()\nC++: virtual void StopWhenEndReachedOn()\n\nStop when the end vertex is reached or calculate shortest path to\nall vertices\n"},
  {"StopWhenEndReachedOff", PyvtkDijkstraGraphGeodesicPath_StopWhenEndReachedOff, METH_VARARGS,
   "V.StopWhenEndReachedOff()\nC++: virtual void StopWhenEndReachedOff()\n\nStop when the end vertex is reached or calculate shortest path to\nall vertices\n"},
  {"SetUseScalarWeights", PyvtkDijkstraGraphGeodesicPath_SetUseScalarWeights, METH_VARARGS,
   "V.SetUseScalarWeights(int)\nC++: virtual void SetUseScalarWeights(vtkTypeBool _arg)\n\nUse scalar values in the edge weight (experimental)\n"},
  {"GetUseScalarWeights", PyvtkDijkstraGraphGeodesicPath_GetUseScalarWeights, METH_VARARGS,
   "V.GetUseScalarWeights() -> int\nC++: virtual vtkTypeBool GetUseScalarWeights()\n\nUse scalar values in the edge weight (experimental)\n"},
  {"UseScalarWeightsOn", PyvtkDijkstraGraphGeodesicPath_UseScalarWeightsOn, METH_VARARGS,
   "V.UseScalarWeightsOn()\nC++: virtual void UseScalarWeightsOn()\n\nUse scalar values in the edge weight (experimental)\n"},
  {"UseScalarWeightsOff", PyvtkDijkstraGraphGeodesicPath_UseScalarWeightsOff, METH_VARARGS,
   "V.UseScalarWeightsOff()\nC++: virtual void UseScalarWeightsOff()\n\nUse scalar values in the edge weight (experimental)\n"},
  {"SetRepelPathFromVertices", PyvtkDijkstraGraphGeodesicPath_SetRepelPathFromVertices, METH_VARARGS,
   "V.SetRepelPathFromVertices(int)\nC++: virtual void SetRepelPathFromVertices(vtkTypeBool _arg)\n\nUse the input point to repel the path by assigning high costs.\n"},
  {"GetRepelPathFromVertices", PyvtkDijkstraGraphGeodesicPath_GetRepelPathFromVertices, METH_VARARGS,
   "V.GetRepelPathFromVertices() -> int\nC++: virtual vtkTypeBool GetRepelPathFromVertices()\n\nUse the input point to repel the path by assigning high costs.\n"},
  {"RepelPathFromVerticesOn", PyvtkDijkstraGraphGeodesicPath_RepelPathFromVerticesOn, METH_VARARGS,
   "V.RepelPathFromVerticesOn()\nC++: virtual void RepelPathFromVerticesOn()\n\nUse the input point to repel the path by assigning high costs.\n"},
  {"RepelPathFromVerticesOff", PyvtkDijkstraGraphGeodesicPath_RepelPathFromVerticesOff, METH_VARARGS,
   "V.RepelPathFromVerticesOff()\nC++: virtual void RepelPathFromVerticesOff()\n\nUse the input point to repel the path by assigning high costs.\n"},
  {"SetRepelVertices", PyvtkDijkstraGraphGeodesicPath_SetRepelVertices, METH_VARARGS,
   "V.SetRepelVertices(vtkPoints)\nC++: virtual void SetRepelVertices(vtkPoints *)\n\nSpecify vtkPoints to use to repel the path from.\n"},
  {"GetRepelVertices", PyvtkDijkstraGraphGeodesicPath_GetRepelVertices, METH_VARARGS,
   "V.GetRepelVertices() -> vtkPoints\nC++: virtual vtkPoints *GetRepelVertices()\n\nSpecify vtkPoints to use to repel the path from.\n"},
  {"GetCumulativeWeights", PyvtkDijkstraGraphGeodesicPath_GetCumulativeWeights, METH_VARARGS,
   "V.GetCumulativeWeights(vtkDoubleArray)\nC++: virtual void GetCumulativeWeights(vtkDoubleArray *weights)\n\nFill the array with the cumulative weights.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDijkstraGraphGeodesicPath_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkDijkstraGraphGeodesicPath", // tp_name
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
  PyvtkDijkstraGraphGeodesicPath_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDijkstraGraphGeodesicPath_StaticNew()
{
  return vtkDijkstraGraphGeodesicPath::New();
}

PyObject *PyvtkDijkstraGraphGeodesicPath_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDijkstraGraphGeodesicPath_Type, PyvtkDijkstraGraphGeodesicPath_Methods,
    "vtkDijkstraGraphGeodesicPath",
 &PyvtkDijkstraGraphGeodesicPath_StaticNew);

  PyTypeObject *pytype = &PyvtkDijkstraGraphGeodesicPath_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGraphGeodesicPath_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDijkstraGraphGeodesicPath(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDijkstraGraphGeodesicPath_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDijkstraGraphGeodesicPath", o) != 0)
  {
    Py_DECREF(o);
  }

}

