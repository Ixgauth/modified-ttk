// python wrapper for vtkInEdgeIterator
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
#include "vtkGraph.h"
#include "vtkInEdgeIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInEdgeIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInEdgeIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkInEdgeIterator_Doc =
  "vtkInEdgeIterator - Iterates through all incoming edges to a vertex.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkInEdgeIterator iterates through all edges whose target is a\n"
  "particular vertex. Instantiate this class directly and call\n"
  "Initialize() to traverse the vertex of a graph. Alternately, use\n"
  "GetInEdges() on the graph to initialize the iterator. it->Next()\n"
  "returns a vtkInEdgeType structure, which contains Id, the edge's id, and Source, the\n"
  "edge's source vertex.\n\n"
  "@sa\n"
  "vtkGraph vtkOutEdgeIterator\n\n";


static PyObject *
PyvtkInEdgeIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInEdgeIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInEdgeIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInEdgeIterator *tempr = vtkInEdgeIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInEdgeIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInEdgeIterator::NewInstance());

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
PyvtkInEdgeIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  vtkGraph *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkInEdgeIterator::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraph() :
      op->vtkInEdgeIterator::GetGraph());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_GetVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetVertex() :
      op->vtkInEdgeIterator::GetVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInEdgeType tempr = (ap.IsBound() ?
      op->Next() :
      op->vtkInEdgeIterator::Next());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkInEdgeType");
    }
  }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_NextGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphEdge *tempr = (ap.IsBound() ?
      op->NextGraphEdge() :
      op->vtkInEdgeIterator::NextGraphEdge());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasNext() :
      op->vtkInEdgeIterator::HasNext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInEdgeIterator_Methods[] = {
  {"IsTypeOf", PyvtkInEdgeIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInEdgeIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInEdgeIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInEdgeIterator\nC++: static vtkInEdgeIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInEdgeIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInEdgeIterator\nC++: vtkInEdgeIterator *NewInstance()\n\n"},
  {"Initialize", PyvtkInEdgeIterator_Initialize, METH_VARARGS,
   "V.Initialize(vtkGraph, int)\nC++: void Initialize(vtkGraph *g, vtkIdType v)\n\nInitialize the iterator with a graph and vertex.\n"},
  {"GetGraph", PyvtkInEdgeIterator_GetGraph, METH_VARARGS,
   "V.GetGraph() -> vtkGraph\nC++: virtual vtkGraph *GetGraph()\n\nGet the graph and vertex associated with this iterator.\n"},
  {"GetVertex", PyvtkInEdgeIterator_GetVertex, METH_VARARGS,
   "V.GetVertex() -> int\nC++: virtual vtkIdType GetVertex()\n\nGet the graph and vertex associated with this iterator.\n"},
  {"Next", PyvtkInEdgeIterator_Next, METH_VARARGS,
   "V.Next() -> vtkInEdgeType\nC++: vtkInEdgeType Next()\n\nReturns the next edge in the graph.\n"},
  {"NextGraphEdge", PyvtkInEdgeIterator_NextGraphEdge, METH_VARARGS,
   "V.NextGraphEdge() -> vtkGraphEdge\nC++: vtkGraphEdge *NextGraphEdge()\n\nJust like Next(), but returns heavy-weight vtkGraphEdge object\ninstead of the vtkEdgeType struct, for use with wrappers. The\ngraph edge is owned by this iterator, and changes after each call\nto NextGraphEdge().\n"},
  {"HasNext", PyvtkInEdgeIterator_HasNext, METH_VARARGS,
   "V.HasNext() -> bool\nC++: bool HasNext()\n\nWhether this iterator has more edges.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInEdgeIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkInEdgeIterator", // tp_name
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
  PyvtkInEdgeIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInEdgeIterator_StaticNew()
{
  return vtkInEdgeIterator::New();
}

PyObject *PyvtkInEdgeIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInEdgeIterator_Type, PyvtkInEdgeIterator_Methods,
    "vtkInEdgeIterator",
 &PyvtkInEdgeIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkInEdgeIterator_Type;

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

void PyVTKAddFile_vtkInEdgeIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInEdgeIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInEdgeIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

