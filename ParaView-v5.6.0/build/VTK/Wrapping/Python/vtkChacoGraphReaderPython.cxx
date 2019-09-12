// python wrapper for vtkChacoGraphReader
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
#include "vtkChacoGraphReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChacoGraphReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkChacoGraphReader_ClassNew(); }

#ifndef DECLARED_PyvtkUndirectedGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUndirectedGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUndirectedGraphAlgorithm_ClassNew
#endif

static const char *PyvtkChacoGraphReader_Doc =
  "vtkChacoGraphReader - Reads chaco graph files.\n\n"
  "Superclass: vtkUndirectedGraphAlgorithm\n\n"
  "vtkChacoGraphReader reads in files in the Chaco format into a\n"
  "vtkGraph. An example is the following  10 13 2 6 10 1 3 2 4 8 3 5 4 6\n"
  "10 1 5 7 6 8 3 7 9 8 10 1 5 9  The first line specifies the number of\n"
  "vertices and edges in the graph. Each additional line contains the\n"
  "vertices adjacent to a particular vertex.  In this example, vertex 1\n"
  "is adjacent to 2, 6 and 10, vertex 2 is adjacent to 1 and 3, etc. \n"
  "Since Chaco ids start at 1 and VTK ids start at 0, the vertex ids in\n"
  "the vtkGraph will be 1 less than the Chaco ids.\n\n";


static PyObject *
PyvtkChacoGraphReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChacoGraphReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChacoGraphReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChacoGraphReader *tempr = vtkChacoGraphReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChacoGraphReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChacoGraphReader::NewInstance());

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
PyvtkChacoGraphReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkChacoGraphReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChacoGraphReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChacoGraphReader *op = static_cast<vtkChacoGraphReader *>(vp);

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
      op->vtkChacoGraphReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkChacoGraphReader_Methods[] = {
  {"IsTypeOf", PyvtkChacoGraphReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChacoGraphReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChacoGraphReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkChacoGraphReader\nC++: static vtkChacoGraphReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChacoGraphReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkChacoGraphReader\nC++: vtkChacoGraphReader *NewInstance()\n\n"},
  {"GetFileName", PyvtkChacoGraphReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nThe Chaco file name.\n"},
  {"SetFileName", PyvtkChacoGraphReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nThe Chaco file name.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkChacoGraphReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOInfovisPython.vtkChacoGraphReader", // tp_name
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
  PyvtkChacoGraphReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChacoGraphReader_StaticNew()
{
  return vtkChacoGraphReader::New();
}

PyObject *PyvtkChacoGraphReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkChacoGraphReader_Type, PyvtkChacoGraphReader_Methods,
    "vtkChacoGraphReader",
 &PyvtkChacoGraphReader_StaticNew);

  PyTypeObject *pytype = &PyvtkChacoGraphReader_Type;

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

void PyVTKAddFile_vtkChacoGraphReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChacoGraphReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChacoGraphReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

