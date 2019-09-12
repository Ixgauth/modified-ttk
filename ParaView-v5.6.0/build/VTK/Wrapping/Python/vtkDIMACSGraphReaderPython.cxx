// python wrapper for vtkDIMACSGraphReader
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
#include "vtkDIMACSGraphReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDIMACSGraphReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDIMACSGraphReader_ClassNew(); }

#ifndef DECLARED_PyvtkGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkGraphAlgorithm_ClassNew
#endif

static const char *PyvtkDIMACSGraphReader_Doc =
  "vtkDIMACSGraphReader - reads vtkGraph data from a DIMACS formatted\nfile\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "vtkDIMACSGraphReader is a source object that reads vtkGraph data\n"
  "files from a DIMACS format.\n\n"
  "The reader has special handlers for max-flow and graph coloring\n"
  "problems, which are specified in the problem line as 'max' and 'edge'\n"
  "respectively. Other graphs are treated as generic DIMACS files.\n\n"
  "DIMACS formatted files consist of lines in which the first character\n"
  "in in column 0 specifies the type of the line.\n\n"
  "Generic DIMACS files have the following line types:\n"
  "- problem statement line : p graph num_verts num_edges\n"
  "- node line (optional)   : n node_id node_weight\n"
  "- edge line              : a src_id trg_id edge_weight\n"
  "- alternate edge format  : e src_id trg_id edge_weight\n"
  "- comment lines          : c I am a comment line\n"
  "** note, there should be one and only one problem statement line per\n"
  "   file.\n\n"
  "DIMACS graphs are undirected and nodes are numbered 1..n\n\n"
  "See webpage for additional formatting details.\n"
  "-  http://dimacs.rutgers.edu/Challenges/\n"
  "-  http://www.dis.uniroma1.it/~challenge9/format.shtml\n\n"
  "@sa\n"
  "vtkDIMACSGraphWriter\n\n";


static PyObject *
PyvtkDIMACSGraphReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDIMACSGraphReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDIMACSGraphReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDIMACSGraphReader *tempr = vtkDIMACSGraphReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDIMACSGraphReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDIMACSGraphReader::NewInstance());

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
PyvtkDIMACSGraphReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDIMACSGraphReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

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
      op->vtkDIMACSGraphReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetVertexAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexAttributeArrayName() :
      op->vtkDIMACSGraphReader::GetVertexAttributeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetVertexAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexAttributeArrayName(temp0);
    }
    else
    {
      op->vtkDIMACSGraphReader::SetVertexAttributeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_GetEdgeAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeAttributeArrayName() :
      op->vtkDIMACSGraphReader::GetEdgeAttributeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphReader_SetEdgeAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphReader *op = static_cast<vtkDIMACSGraphReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeAttributeArrayName(temp0);
    }
    else
    {
      op->vtkDIMACSGraphReader::SetEdgeAttributeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDIMACSGraphReader_Methods[] = {
  {"IsTypeOf", PyvtkDIMACSGraphReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDIMACSGraphReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDIMACSGraphReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDIMACSGraphReader\nC++: static vtkDIMACSGraphReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDIMACSGraphReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDIMACSGraphReader\nC++: vtkDIMACSGraphReader *NewInstance()\n\n"},
  {"GetFileName", PyvtkDIMACSGraphReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nThe DIMACS file name.\n"},
  {"SetFileName", PyvtkDIMACSGraphReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nThe DIMACS file name.\n"},
  {"GetVertexAttributeArrayName", PyvtkDIMACSGraphReader_GetVertexAttributeArrayName, METH_VARARGS,
   "V.GetVertexAttributeArrayName() -> string\nC++: virtual char *GetVertexAttributeArrayName()\n\nVertex attribute array name\n"},
  {"SetVertexAttributeArrayName", PyvtkDIMACSGraphReader_SetVertexAttributeArrayName, METH_VARARGS,
   "V.SetVertexAttributeArrayName(string)\nC++: virtual void SetVertexAttributeArrayName(const char *_arg)\n\nVertex attribute array name\n"},
  {"GetEdgeAttributeArrayName", PyvtkDIMACSGraphReader_GetEdgeAttributeArrayName, METH_VARARGS,
   "V.GetEdgeAttributeArrayName() -> string\nC++: virtual char *GetEdgeAttributeArrayName()\n\nEdge attribute array name\n"},
  {"SetEdgeAttributeArrayName", PyvtkDIMACSGraphReader_SetEdgeAttributeArrayName, METH_VARARGS,
   "V.SetEdgeAttributeArrayName(string)\nC++: virtual void SetEdgeAttributeArrayName(const char *_arg)\n\nEdge attribute array name\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDIMACSGraphReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOInfovisPython.vtkDIMACSGraphReader", // tp_name
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
  PyvtkDIMACSGraphReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDIMACSGraphReader_StaticNew()
{
  return vtkDIMACSGraphReader::New();
}

PyObject *PyvtkDIMACSGraphReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDIMACSGraphReader_Type, PyvtkDIMACSGraphReader_Methods,
    "vtkDIMACSGraphReader",
 &PyvtkDIMACSGraphReader_StaticNew);

  PyTypeObject *pytype = &PyvtkDIMACSGraphReader_Type;

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

void PyVTKAddFile_vtkDIMACSGraphReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDIMACSGraphReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDIMACSGraphReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

