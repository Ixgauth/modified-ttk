// python wrapper for vtkDirectedGraph
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
#include "vtkDirectedGraph.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDirectedGraph(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDirectedGraph_ClassNew(); }

#ifndef DECLARED_PyvtkGraph_ClassNew
extern "C" { PyObject *PyvtkGraph_ClassNew(); }
#define DECLARED_PyvtkGraph_ClassNew
#endif

static const char *PyvtkDirectedGraph_Doc =
  "vtkDirectedGraph - A directed graph.\n\n"
  "Superclass: vtkGraph\n\n"
  "vtkDirectedGraph is a collection of vertices along with a collection\n"
  "of directed edges (edges that have a source and target).\n"
  "ShallowCopy() and DeepCopy() (and CheckedShallowCopy(),\n"
  "CheckedDeepCopy()) accept instances of vtkTree and\n"
  "vtkMutableDirectedGraph.\n\n"
  "vtkDirectedGraph is read-only. To create an undirected graph, use an\n"
  "instance of vtkMutableDirectedGraph, then you may set the structure\n"
  "to a vtkDirectedGraph using ShallowCopy().\n\n"
  "@sa\n"
  "vtkGraph vtkMutableDirectedGraph\n\n";


static PyObject *
PyvtkDirectedGraph_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDirectedGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedGraph *op = static_cast<vtkDirectedGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDirectedGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectedGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDirectedGraph *tempr = vtkDirectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedGraph *op = static_cast<vtkDirectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDirectedGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDirectedGraph::NewInstance());

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
PyvtkDirectedGraph_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedGraph *op = static_cast<vtkDirectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkDirectedGraph::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectedGraph_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkDirectedGraph *tempr = vtkDirectedGraph::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDirectedGraph_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkDirectedGraph *tempr = vtkDirectedGraph::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDirectedGraph_GetData_Methods[] = {
  {nullptr, PyvtkDirectedGraph_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkDirectedGraph_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDirectedGraph_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDirectedGraph_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkDirectedGraph_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkDirectedGraph_IsStructureValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStructureValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedGraph *op = static_cast<vtkDirectedGraph *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStructureValid(temp0) :
      op->vtkDirectedGraph::IsStructureValid(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDirectedGraph_Methods[] = {
  {"IsTypeOf", PyvtkDirectedGraph_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDirectedGraph_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDirectedGraph_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDirectedGraph\nC++: static vtkDirectedGraph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDirectedGraph_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDirectedGraph\nC++: vtkDirectedGraph *NewInstance()\n\n"},
  {"GetDataObjectType", PyvtkDirectedGraph_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"GetData", PyvtkDirectedGraph_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkDirectedGraph\nC++: static vtkDirectedGraph *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkDirectedGraph\nC++: static vtkDirectedGraph *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a graph from an information vector.\n"},
  {"IsStructureValid", PyvtkDirectedGraph_IsStructureValid, METH_VARARGS,
   "V.IsStructureValid(vtkGraph) -> bool\nC++: bool IsStructureValid(vtkGraph *g) override;\n\nCheck the storage, and accept it if it is a valid undirected\ngraph. This is public to allow the ToDirected/UndirectedGraph to\nwork.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDirectedGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDirectedGraph", // tp_name
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
  PyvtkDirectedGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDirectedGraph_StaticNew()
{
  return vtkDirectedGraph::New();
}

PyObject *PyvtkDirectedGraph_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDirectedGraph_Type, PyvtkDirectedGraph_Methods,
    "vtkDirectedGraph",
 &PyvtkDirectedGraph_StaticNew);

  PyTypeObject *pytype = &PyvtkDirectedGraph_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGraph_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDirectedGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDirectedGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDirectedGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

