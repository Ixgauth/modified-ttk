// python wrapper for vtkMergeGraphs
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
#include "vtkMergeGraphs.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMergeGraphs(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMergeGraphs_ClassNew(); }

#ifndef DECLARED_PyvtkGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkGraphAlgorithm_ClassNew
#endif

static const char *PyvtkMergeGraphs_Doc =
  "vtkMergeGraphs - combines two graphs\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "vtkMergeGraphs combines information from two graphs into one. Both\n"
  "graphs must have pedigree ids assigned to the vertices. The output\n"
  "will contain the vertices/edges in the first graph, in addition to:\n\n"
  "- vertices in the second graph whose pedigree id does not match a\n"
  "  vertex in the first input\n\n"
  "- edges in the second graph\n\n"
  "The output will contain the same attribute structure as the input;\n"
  "fields associated only with the second input graph will not be passed\n"
  "to the output. When possible, the vertex/edge data for new vertices\n"
  "and edges will be populated with matching attributes on the second\n"
  "graph. To be considered a matching attribute, the array must have the\n"
  "same name, type, and number of components.\n\n"
  "@warning\n"
  "This filter is not \"domain-aware\". Pedigree ids are assumed to be\n"
  "globally unique, regardless of their domain.\n\n";


static PyObject *
PyvtkMergeGraphs_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergeGraphs::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeGraphs_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeGraphs::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeGraphs_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergeGraphs *tempr = vtkMergeGraphs::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeGraphs_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergeGraphs *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeGraphs::NewInstance());

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
PyvtkMergeGraphs_ExtendGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtendGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  vtkMutableGraphHelper *temp0 = nullptr;
  vtkGraph *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMutableGraphHelper") &&
      ap.GetVTKObject(temp1, "vtkGraph"))
  {
    int tempr = (ap.IsBound() ?
      op->ExtendGraph(temp0, temp1) :
      op->vtkMergeGraphs::ExtendGraph(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeGraphs_SetUseEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseEdgeWindow(temp0);
    }
    else
    {
      op->vtkMergeGraphs::SetUseEdgeWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeGraphs_GetUseEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseEdgeWindow() :
      op->vtkMergeGraphs::GetUseEdgeWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeGraphs_UseEdgeWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseEdgeWindowOn();
    }
    else
    {
      op->vtkMergeGraphs::UseEdgeWindowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeGraphs_UseEdgeWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseEdgeWindowOff();
    }
    else
    {
      op->vtkMergeGraphs::UseEdgeWindowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeGraphs_SetEdgeWindowArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWindowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeWindowArrayName(temp0);
    }
    else
    {
      op->vtkMergeGraphs::SetEdgeWindowArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeGraphs_GetEdgeWindowArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWindowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeWindowArrayName() :
      op->vtkMergeGraphs::GetEdgeWindowArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeGraphs_SetEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeWindow(temp0);
    }
    else
    {
      op->vtkMergeGraphs::SetEdgeWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeGraphs_GetEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeGraphs *op = static_cast<vtkMergeGraphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeWindow() :
      op->vtkMergeGraphs::GetEdgeWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeGraphs_Methods[] = {
  {"IsTypeOf", PyvtkMergeGraphs_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMergeGraphs_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMergeGraphs_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMergeGraphs\nC++: static vtkMergeGraphs *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMergeGraphs_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMergeGraphs\nC++: vtkMergeGraphs *NewInstance()\n\n"},
  {"ExtendGraph", PyvtkMergeGraphs_ExtendGraph, METH_VARARGS,
   "V.ExtendGraph(vtkMutableGraphHelper, vtkGraph) -> int\nC++: int ExtendGraph(vtkMutableGraphHelper *g1, vtkGraph *g2)\n\nThis is the core functionality of the algorithm. Adds edges and\nvertices from g2 into g1.\n"},
  {"SetUseEdgeWindow", PyvtkMergeGraphs_SetUseEdgeWindow, METH_VARARGS,
   "V.SetUseEdgeWindow(bool)\nC++: virtual void SetUseEdgeWindow(bool _arg)\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {"GetUseEdgeWindow", PyvtkMergeGraphs_GetUseEdgeWindow, METH_VARARGS,
   "V.GetUseEdgeWindow() -> bool\nC++: virtual bool GetUseEdgeWindow()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {"UseEdgeWindowOn", PyvtkMergeGraphs_UseEdgeWindowOn, METH_VARARGS,
   "V.UseEdgeWindowOn()\nC++: virtual void UseEdgeWindowOn()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {"UseEdgeWindowOff", PyvtkMergeGraphs_UseEdgeWindowOff, METH_VARARGS,
   "V.UseEdgeWindowOff()\nC++: virtual void UseEdgeWindowOff()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {"SetEdgeWindowArrayName", PyvtkMergeGraphs_SetEdgeWindowArrayName, METH_VARARGS,
   "V.SetEdgeWindowArrayName(string)\nC++: virtual void SetEdgeWindowArrayName(const char *_arg)\n\nThe edge window array. The default array name is \"time\".\n"},
  {"GetEdgeWindowArrayName", PyvtkMergeGraphs_GetEdgeWindowArrayName, METH_VARARGS,
   "V.GetEdgeWindowArrayName() -> string\nC++: virtual char *GetEdgeWindowArrayName()\n\nThe edge window array. The default array name is \"time\".\n"},
  {"SetEdgeWindow", PyvtkMergeGraphs_SetEdgeWindow, METH_VARARGS,
   "V.SetEdgeWindow(float)\nC++: virtual void SetEdgeWindow(double _arg)\n\nThe time window amount. Edges with values lower than the maximum\nvalue minus this window will be removed from the graph. The\ndefault edge window is 10000.\n"},
  {"GetEdgeWindow", PyvtkMergeGraphs_GetEdgeWindow, METH_VARARGS,
   "V.GetEdgeWindow() -> float\nC++: virtual double GetEdgeWindow()\n\nThe time window amount. Edges with values lower than the maximum\nvalue minus this window will be removed from the graph. The\ndefault edge window is 10000.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMergeGraphs_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkMergeGraphs", // tp_name
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
  PyvtkMergeGraphs_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergeGraphs_StaticNew()
{
  return vtkMergeGraphs::New();
}

PyObject *PyvtkMergeGraphs_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMergeGraphs_Type, PyvtkMergeGraphs_Methods,
    "vtkMergeGraphs",
 &PyvtkMergeGraphs_StaticNew);

  PyTypeObject *pytype = &PyvtkMergeGraphs_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGraphAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMergeGraphs(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergeGraphs_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergeGraphs", o) != 0)
  {
    Py_DECREF(o);
  }

}

