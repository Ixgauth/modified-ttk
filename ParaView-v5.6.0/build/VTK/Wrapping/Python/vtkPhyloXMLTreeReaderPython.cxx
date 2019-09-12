// python wrapper for vtkPhyloXMLTreeReader
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
#include "vtkPhyloXMLTreeReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPhyloXMLTreeReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPhyloXMLTreeReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLReader_ClassNew
extern "C" { PyObject *PyvtkXMLReader_ClassNew(); }
#define DECLARED_PyvtkXMLReader_ClassNew
#endif

static const char *PyvtkPhyloXMLTreeReader_Doc =
  "vtkPhyloXMLTreeReader - read vtkTree from PhyloXML formatted file\n\n"
  "Superclass: vtkXMLReader\n\n"
  "vtkPhyloXMLTreeReader is a source object that reads PhyloXML tree\n"
  "format files. The output of this reader is a single vtkTree data\n"
  "object.\n\n"
  "@warning\n"
  "This reader does not implement the entire PhyloXML specification. It\n"
  "currently only supports the following tags: phylogeny, name,\n"
  "description, confidence, property, clade, branch_length, color, red,\n"
  "green, and blue. This reader also only supports a single phylogeny\n"
  "per file.\n\n"
  "@sa\n"
  "vtkTree vtkXMLReader vtkPhyloXMLTreeWriter\n\n";


static PyObject *
PyvtkPhyloXMLTreeReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPhyloXMLTreeReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeReader *op = static_cast<vtkPhyloXMLTreeReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPhyloXMLTreeReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPhyloXMLTreeReader *tempr = vtkPhyloXMLTreeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPhyloXMLTreeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeReader *op = static_cast<vtkPhyloXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPhyloXMLTreeReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPhyloXMLTreeReader::NewInstance());

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
PyvtkPhyloXMLTreeReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeReader *op = static_cast<vtkPhyloXMLTreeReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkPhyloXMLTreeReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPhyloXMLTreeReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPhyloXMLTreeReader *op = static_cast<vtkPhyloXMLTreeReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkPhyloXMLTreeReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPhyloXMLTreeReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPhyloXMLTreeReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkPhyloXMLTreeReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyMethodDef PyvtkPhyloXMLTreeReader_Methods[] = {
  {"IsTypeOf", PyvtkPhyloXMLTreeReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPhyloXMLTreeReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPhyloXMLTreeReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPhyloXMLTreeReader\nC++: static vtkPhyloXMLTreeReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPhyloXMLTreeReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPhyloXMLTreeReader\nC++: vtkPhyloXMLTreeReader *NewInstance()\n\n"},
  {"GetOutput", PyvtkPhyloXMLTreeReader_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkTree\nC++: vtkTree *GetOutput()\nV.GetOutput(int) -> vtkTree\nC++: vtkTree *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPhyloXMLTreeReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOInfovisPython.vtkPhyloXMLTreeReader", // tp_name
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
  PyvtkPhyloXMLTreeReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPhyloXMLTreeReader_StaticNew()
{
  return vtkPhyloXMLTreeReader::New();
}

PyObject *PyvtkPhyloXMLTreeReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPhyloXMLTreeReader_Type, PyvtkPhyloXMLTreeReader_Methods,
    "vtkPhyloXMLTreeReader",
 &PyvtkPhyloXMLTreeReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPhyloXMLTreeReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPhyloXMLTreeReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPhyloXMLTreeReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPhyloXMLTreeReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

