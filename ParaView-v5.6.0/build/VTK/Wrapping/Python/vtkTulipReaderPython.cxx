// python wrapper for vtkTulipReader
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
#include "vtkTulipReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTulipReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTulipReader_ClassNew(); }

#ifndef DECLARED_PyvtkUndirectedGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUndirectedGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUndirectedGraphAlgorithm_ClassNew
#endif

static const char *PyvtkTulipReader_Doc =
  "vtkTulipReader - Reads tulip graph files.\n\n"
  "Superclass: vtkUndirectedGraphAlgorithm\n\n"
  "vtkTulipReader reads in files in the Tulip format. Definition of the\n"
  "Tulip file format can be found online at:\n"
  "http://tulip.labri.fr/tlpformat.php An example is the following \n"
  "(nodes 0 1 2 3 4 5 6 7 8 9) (edge 0 0 1) (edge 1 1 2) (edge 2 2 3)\n"
  "(edge 3 3 4) (edge 4 4 5) (edge 5 5 6) (edge 6 6 7) (edge 7 7 8)\n"
  "(edge 8 8 9) (edge 9 9 0) (edge 10 0 5) (edge 11 2 7) (edge 12 4 9) \n"
  "where \"nodes\" defines all the nodes ids in the graph, and \"edge\" is a\n"
  "triple of edge id, source vertex id, and target vertex id. The graph\n"
  "is read in as undirected graph. Pedigree ids are set on the output\n"
  "graph's vertices and edges that match the node and edge ids defined\n"
  "in the Tulip file.\n\n"
  "Clusters are output as a vtkAnnotationLayers on output port 1. Each\n"
  "cluster name is used to create an annotation layer, and each cluster\n"
  "with that name is added to the layer as a vtkSelectionNode. Nesting\n"
  "hierarchies are treated as if they were flat. See\n"
  "vtkGraphAnnotationLayersFilter for an example of how the clusters can\n"
  "be represented visually.\n\n"
  "@attention Only string, int, and double properties are supported.\n"
  "Display information is discarded.\n\n"
  "@par Thanks: Thanks to Colin Myers, University of Leeds for extending\n"
  "this implementation.\n\n";


static PyObject *
PyvtkTulipReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTulipReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTulipReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTulipReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTulipReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTulipReader *tempr = vtkTulipReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTulipReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTulipReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTulipReader::NewInstance());

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
PyvtkTulipReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkTulipReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTulipReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTulipReader *op = static_cast<vtkTulipReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkTulipReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTulipReader_Methods[] = {
  {"IsTypeOf", PyvtkTulipReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTulipReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTulipReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTulipReader\nC++: static vtkTulipReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTulipReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTulipReader\nC++: vtkTulipReader *NewInstance()\n\n"},
  {"GetFileName", PyvtkTulipReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nThe Tulip file name.\n"},
  {"SetFileName", PyvtkTulipReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nThe Tulip file name.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTulipReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOInfovisPython.vtkTulipReader", // tp_name
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
  PyvtkTulipReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTulipReader_StaticNew()
{
  return vtkTulipReader::New();
}

PyObject *PyvtkTulipReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTulipReader_Type, PyvtkTulipReader_Methods,
    "vtkTulipReader",
 &PyvtkTulipReader_StaticNew);

  PyTypeObject *pytype = &PyvtkTulipReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUndirectedGraphAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTulipReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTulipReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTulipReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

