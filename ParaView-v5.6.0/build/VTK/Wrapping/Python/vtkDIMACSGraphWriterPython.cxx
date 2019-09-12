// python wrapper for vtkDIMACSGraphWriter
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
#include "vtkDIMACSGraphWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDIMACSGraphWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDIMACSGraphWriter_ClassNew(); }

#ifndef DECLARED_PyvtkDataWriter_ClassNew
extern "C" { PyObject *PyvtkDataWriter_ClassNew(); }
#define DECLARED_PyvtkDataWriter_ClassNew
#endif

static const char *PyvtkDIMACSGraphWriter_Doc =
  "vtkDIMACSGraphWriter - write vtkGraph data to a DIMACS formatted file\n\n"
  "Superclass: vtkDataWriter\n\n"
  "vtkDIMACSGraphWriter is a sink object that writes vtkGraph data files\n"
  "into a generic DIMACS (.gr) format.\n\n"
  "Output files contain a problem statement line:\n\n"
  "p graph <num_verts> <num_edges>\n\n"
  "Followed by |E| edge descriptor lines that are formatted as:\n\n"
  "e <target> \n\n"
  "Vertices are numbered from 1..n in DIMACS formatted files.\n\n"
  "See webpage for format details.\n"
  "http://prolland.free.fr/works/research/dsat/dimacs.html\n\n"
  "@sa\n"
  "vtkDIMACSGraphReader\n\n";


static PyObject *
PyvtkDIMACSGraphWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDIMACSGraphWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDIMACSGraphWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDIMACSGraphWriter *tempr = vtkDIMACSGraphWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDIMACSGraphWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDIMACSGraphWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDIMACSGraphWriter::NewInstance());

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
PyvtkDIMACSGraphWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkDIMACSGraphWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDIMACSGraphWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDIMACSGraphWriter *op = static_cast<vtkDIMACSGraphWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkDIMACSGraphWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDIMACSGraphWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDIMACSGraphWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkDIMACSGraphWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}


static PyMethodDef PyvtkDIMACSGraphWriter_Methods[] = {
  {"IsTypeOf", PyvtkDIMACSGraphWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDIMACSGraphWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDIMACSGraphWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDIMACSGraphWriter\nC++: static vtkDIMACSGraphWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDIMACSGraphWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDIMACSGraphWriter\nC++: vtkDIMACSGraphWriter *NewInstance()\n\n"},
  {"GetInput", PyvtkDIMACSGraphWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkGraph\nC++: vtkGraph *GetInput()\nV.GetInput(int) -> vtkGraph\nC++: vtkGraph *GetInput(int port)\n\nGet the input to this writer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDIMACSGraphWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOInfovisPython.vtkDIMACSGraphWriter", // tp_name
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
  PyvtkDIMACSGraphWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDIMACSGraphWriter_StaticNew()
{
  return vtkDIMACSGraphWriter::New();
}

PyObject *PyvtkDIMACSGraphWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDIMACSGraphWriter_Type, PyvtkDIMACSGraphWriter_Methods,
    "vtkDIMACSGraphWriter",
 &PyvtkDIMACSGraphWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkDIMACSGraphWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDIMACSGraphWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDIMACSGraphWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDIMACSGraphWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

