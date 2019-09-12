// python wrapper for vtkNewickTreeReader
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
#include "vtkTree.h"
#include "vtkNewickTreeReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNewickTreeReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNewickTreeReader_ClassNew(); }

#ifndef DECLARED_PyvtkDataReader_ClassNew
extern "C" { PyObject *PyvtkDataReader_ClassNew(); }
#define DECLARED_PyvtkDataReader_ClassNew
#endif

static const char *PyvtkNewickTreeReader_Doc =
  "vtkNewickTreeReader - read vtkTree from Newick formatted file\n\n"
  "Superclass: vtkDataReader\n\n"
  "vtkNewickTreeReader is a source object that reads Newick tree format\n"
  "files. The output of this reader is a single vtkTree data object. The\n"
  "superclass of this class, vtkDataReader, provides many methods for\n"
  "controlling the reading of the data file, see vtkDataReader for more\n"
  "information.@par Thanks: This class is adapted from code originally\n"
  "written by Yu-Wei Wu.\n"
  "@sa\n"
  "vtkTree vtkDataReader\n\n";


static PyObject *
PyvtkNewickTreeReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNewickTreeReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNewickTreeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNewickTreeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNewickTreeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNewickTreeReader *tempr = vtkNewickTreeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNewickTreeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNewickTreeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNewickTreeReader::NewInstance());

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
PyvtkNewickTreeReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkNewickTreeReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkNewickTreeReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkNewickTreeReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkNewickTreeReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkNewickTreeReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkNewickTreeReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}



static PyObject *
PyvtkNewickTreeReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  vtkTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
  {
    if (ap.IsBound())
    {
      op->SetOutput(temp0);
    }
    else
    {
      op->vtkNewickTreeReader::SetOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNewickTreeReader_ReadNewickTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadNewickTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNewickTreeReader *op = static_cast<vtkNewickTreeReader *>(vp);

  const char *temp0 = nullptr;
  vtkTree *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkTree"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadNewickTree(temp0, *temp1) :
      op->vtkNewickTreeReader::ReadNewickTree(temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkNewickTreeReader_Methods[] = {
  {"IsTypeOf", PyvtkNewickTreeReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNewickTreeReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNewickTreeReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNewickTreeReader\nC++: static vtkNewickTreeReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNewickTreeReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNewickTreeReader\nC++: vtkNewickTreeReader *NewInstance()\n\n"},
  {"GetOutput", PyvtkNewickTreeReader_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkTree\nC++: vtkTree *GetOutput()\nV.GetOutput(int) -> vtkTree\nC++: vtkTree *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {"SetOutput", PyvtkNewickTreeReader_SetOutput, METH_VARARGS,
   "V.SetOutput(vtkTree)\nC++: void SetOutput(vtkTree *output)\n\nGet the output of this reader.\n"},
  {"ReadNewickTree", PyvtkNewickTreeReader_ReadNewickTree, METH_VARARGS,
   "V.ReadNewickTree(string, vtkTree) -> int\nC++: int ReadNewickTree(const char *buffer, vtkTree &tree)\n\nGet the output of this reader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNewickTreeReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOInfovisPython.vtkNewickTreeReader", // tp_name
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
  PyvtkNewickTreeReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNewickTreeReader_StaticNew()
{
  return vtkNewickTreeReader::New();
}

PyObject *PyvtkNewickTreeReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNewickTreeReader_Type, PyvtkNewickTreeReader_Methods,
    "vtkNewickTreeReader",
 &PyvtkNewickTreeReader_StaticNew);

  PyTypeObject *pytype = &PyvtkNewickTreeReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNewickTreeReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNewickTreeReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNewickTreeReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

