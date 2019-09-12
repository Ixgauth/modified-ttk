// python wrapper for vtkCollectGraph
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
#include "vtkCollectGraph.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCollectGraph(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCollectGraph_ClassNew(); }

#ifndef DECLARED_PyvtkGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkGraphAlgorithm_ClassNew
#endif

static const char *PyvtkCollectGraph_Doc =
  "vtkCollectGraph - Collect distributed graph.\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "This filter has code to collect a graph from across processes onto\n"
  "vertex 0. Collection can be turned on or off using the \"PassThrough\"\n"
  "flag.\n\n";


static PyObject *
PyvtkCollectGraph_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCollectGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollectGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCollectGraph *tempr = vtkCollectGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollectGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollectGraph::NewInstance());

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
PyvtkCollectGraph_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

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
      op->vtkCollectGraph::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCollectGraph::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_SetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  vtkSocketController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocketController"))
  {
    if (ap.IsBound())
    {
      op->SetSocketController(temp0);
    }
    else
    {
      op->vtkCollectGraph::SetSocketController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_GetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSocketController *tempr = (ap.IsBound() ?
      op->GetSocketController() :
      op->vtkCollectGraph::GetSocketController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_SetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThrough(temp0);
    }
    else
    {
      op->vtkCollectGraph::SetPassThrough(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_GetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThrough() :
      op->vtkCollectGraph::GetPassThrough());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_PassThroughOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughOn();
    }
    else
    {
      op->vtkCollectGraph::PassThroughOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_PassThroughOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughOff();
    }
    else
    {
      op->vtkCollectGraph::PassThroughOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_SetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputType(temp0);
    }
    else
    {
      op->vtkCollectGraph::SetOutputType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectGraph_GetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectGraph *op = static_cast<vtkCollectGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputType() :
      op->vtkCollectGraph::GetOutputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCollectGraph_Methods[] = {
  {"IsTypeOf", PyvtkCollectGraph_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCollectGraph_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCollectGraph_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCollectGraph\nC++: static vtkCollectGraph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCollectGraph_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCollectGraph\nC++: vtkCollectGraph *NewInstance()\n\n"},
  {"SetController", PyvtkCollectGraph_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {"GetController", PyvtkCollectGraph_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {"SetSocketController", PyvtkCollectGraph_SetSocketController, METH_VARARGS,
   "V.SetSocketController(vtkSocketController)\nC++: virtual void SetSocketController(vtkSocketController *)\n\nWhen this filter is being used in client-server mode, this is the\ncontroller used to communicate between client and server.  Client\nshould not set the other controller.\n"},
  {"GetSocketController", PyvtkCollectGraph_GetSocketController, METH_VARARGS,
   "V.GetSocketController() -> vtkSocketController\nC++: virtual vtkSocketController *GetSocketController()\n\nWhen this filter is being used in client-server mode, this is the\ncontroller used to communicate between client and server.  Client\nshould not set the other controller.\n"},
  {"SetPassThrough", PyvtkCollectGraph_SetPassThrough, METH_VARARGS,
   "V.SetPassThrough(int)\nC++: virtual void SetPassThrough(vtkTypeBool _arg)\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {"GetPassThrough", PyvtkCollectGraph_GetPassThrough, METH_VARARGS,
   "V.GetPassThrough() -> int\nC++: virtual vtkTypeBool GetPassThrough()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {"PassThroughOn", PyvtkCollectGraph_PassThroughOn, METH_VARARGS,
   "V.PassThroughOn()\nC++: virtual void PassThroughOn()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {"PassThroughOff", PyvtkCollectGraph_PassThroughOff, METH_VARARGS,
   "V.PassThroughOff()\nC++: virtual void PassThroughOff()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {"SetOutputType", PyvtkCollectGraph_SetOutputType, METH_VARARGS,
   "V.SetOutputType(int)\nC++: virtual void SetOutputType(int _arg)\n\nDirectedness flag, used to signal whether the output graph is\ndirected or undirected. DIRECTED_OUTPUT expects that this filter\nis generating a directed graph. UNDIRECTED_OUTPUT expects that\nthis filter is generating an undirected graph. DIRECTED_OUTPUT\nand UNDIRECTED_OUTPUT flags should only be set on the client\nfilter.  Server filters should be set to USE_INPUT_TYPE since\nthey have valid input and the directedness is determined from the\ninput type.\n"},
  {"GetOutputType", PyvtkCollectGraph_GetOutputType, METH_VARARGS,
   "V.GetOutputType() -> int\nC++: virtual int GetOutputType()\n\nDirectedness flag, used to signal whether the output graph is\ndirected or undirected. DIRECTED_OUTPUT expects that this filter\nis generating a directed graph. UNDIRECTED_OUTPUT expects that\nthis filter is generating an undirected graph. DIRECTED_OUTPUT\nand UNDIRECTED_OUTPUT flags should only be set on the client\nfilter.  Server filters should be set to USE_INPUT_TYPE since\nthey have valid input and the directedness is determined from the\ninput type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCollectGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkCollectGraph", // tp_name
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
  PyvtkCollectGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCollectGraph_StaticNew()
{
  return vtkCollectGraph::New();
}

PyObject *PyvtkCollectGraph_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCollectGraph_Type, PyvtkCollectGraph_Methods,
    "vtkCollectGraph",
 &PyvtkCollectGraph_StaticNew);

  PyTypeObject *pytype = &PyvtkCollectGraph_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGraphAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "DIRECTED_OUTPUT", vtkCollectGraph::DIRECTED_OUTPUT },
        { "UNDIRECTED_OUTPUT", vtkCollectGraph::UNDIRECTED_OUTPUT },
        { "USE_INPUT_TYPE", vtkCollectGraph::USE_INPUT_TYPE },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCollectGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCollectGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCollectGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

